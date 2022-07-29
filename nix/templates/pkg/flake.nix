{
  description = "My Lean package";

  inputs.lean.url = github:leanprover/lean4;
  inputs.flake-utils.url = github:numtide/flake-utils;

  outputs = { self, lean, flake-utils }: flake-utils.lib.eachDefaultSystem (system:
    let
      leanPkgs = lean.packages.${system};
      pkg = leanPkgs.buildLeanPackage {
        name = "MyPackage";  # must match the name of the top-level .lean file
        src = ./.;
      };
    in {
      packages = pkg // {
        inherit (leanPkgs) lean;
      };

      defaultPackage = pkg.modRoot;
    });

  # Recommended nix configuration
  nixConfig.max-jobs = "auto";  # Allow building multiple derivations in parallel
  nixConfig.keep-outputs = true;  # Do not garbage-collect build time-only dependencies (e.g. clang)

  # Allow fetching build results from the Lean Cachix cache
  nixConfig.extra-trusted-substituters = "https://lean4.cachix.org/";
  nixConfig.extra-trusted-public-keys = "cache.nixos.org-1:6NCHdD59X431o0gWypbMrAURkbJ16ZPMQFGspcDShjY= lean4.cachix.org-1:mawtxSxcaiWE24xCXXgh3qnvlTkyU7evRRnGeAhD4Wk=";
}
