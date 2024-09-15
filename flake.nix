{
  description = "Web development environment for me";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs = { self, nixpkgs }@inputs:
   let 
     system = "x86_64-linux";
     pkgs = nixpkgs.legacyPackages.${system};
   in
  {
    devShells.x86_64-linux.default =  
    pkgs.mkShell { 
      nativeBuildInputs = with pkgs; [
        ncurses
        libevent
      ];
      shellHook = ''
        echo "C language dev environment for Shiroe in NixOS"
      '';
    };
  };
}
