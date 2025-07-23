# Resources

- [QMK](https://docs.qmk.fm/)
- [Sweep](https://github.com/davidphilipbarr/Sweep)
- [QMK-Configurator](https://config.qmk.fm/#/ferris/sweep/)

# Flashing

- `nix-shell -p qmk`
- `qmk compile -kb ferris/sweep -km default` -> `qmk compile -kb ferris/sweep -km <which layout>`
- `qmk flash -kb ferris/sweep -km default` -> `qmk flash -kb ferris/sweep -km <which layout>`
- resources located at `qmk-firmware`
