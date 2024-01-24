# <center>Starwars ACEX Compat</center>
<p align="center">
    <a href="https://github.com/liamcannon/STAX/releases/latest">
        <img src="https://img.shields.io/badge/Version-1.0.0-blue.svg?style=flat-square" alt="STAX Version">
    </a>
    <a href="https://github.com/liamcannon/STAX/issues">
        <img src="https://img.shields.io/github/issues-raw/liamcannon/Mine-Detector-Fixes.svg?style=flat-square&label=Issues" alt="STAX Issues">
    </a>
    <a href="https://steamcommunity.com/sharedfiles/filedetails/">
        <img src="https://img.shields.io/steam/downloads/3086321202.svg?style=flat-square&label=Downloads" alt="STAX Downloads">
    </a>
    <a href="https://github.com/liamcannon/STAX/blob/main/LICENSE">
        <img src="https://img.shields.io/badge/License-APL-red.svg?style=flat-square" alt="STAX License">
    </a>
</p>

**Starwars ACEX Compat** (STAX) aims to serve as an "all-in-one" mod to compat various mods making the ACE Arsenal a cleaner space.

The project is entirely **open-source** and any contributions to fix other mods are welcome.

While containing fixes for several mods, only patches for mods that players have enabled when launching arma will be loaded using the `skipWhenMissingDependencies` flag. This ensures that missing addon or missing class errors will not occur.

## Available Patches

- [3AS](https://steamcommunity.com/sharedfiles/filedetails/?id=1940589429)

## Contributing

Users are welcome to create a compatability patch for a mod by using the [example patch](https://github.com/liamcannon/STAX/tree/main/extras/compat) as a base.

### Submitting issues and requesting patches

If you find a bug in the mod or want to request a compatability patch for another mod, you can do so on the [Issue Tracker](https://github.com/liamcannon/STAX/issues). Be sure to apply the appropiate label for what you are reporting.

### Testing & building

STAX is built using [HEMTT](https://github.com/BrettMayson/HEMTT). There are several build files included in [Tools/](https://github.com/liamcannon/STAX/tree/main/Tools) to automatically update the mod version when building and releasing.

## License

STAX is licensed under the Arma Public Licence ([APL](https://github.com/liamcannon/STAX/blob/main/LICENSE)).
