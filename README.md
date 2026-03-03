
# Rhythm Heaven Advance ESP

![Rhythm Heaven Advance](media/rha.png?raw=true "Rhythm Heaven Advance ESP")

Una traduccion no oficial para el juego de ritmo *Rhythm Tengoku (リズム天てん国)* de la Game Boy Advance.

## Acerca de

**Rhythm Heaven Advance ESP** Es una traduccion hecha por fans del juego *Rhythm Tengoku*. Este proyecto entrega una traduccion totalmente al español del juego antes mencionado.

Sientete libre de unirte a nuestro [server de Discord](https://discord.com/invite/MNJ3Wv38T4) si es que tienes alguna sugerencia, o si te gustaria ayudar en el proyecto!

## Instalacion (NO voy a traducir esto ok? [Tal vez algun dia lo hago])

### Cosas necesarias

- Una rom obtenida legalmente de *Rhythm Tengoku* **(Rev 0)** con un CRC32 checksum de: `349D7025`
- Un parcheador de ROMs (Les recomendamos: [ROM Patcher JS](https://www.marcrobledo.com/RomPatcher.js/))

### Steps

1. Download the latest `.bps` patch file from the [Releases](https://github.com/RHAdvance/RhythmHeavenAdvance/releases) page or download the latest nightly page at [our website](https://rhadvance.github.io/)
2. Open your BPS patcher tool
3. Select your *Rhythm Tengoku* ROM
4. Apply the downloaded patch
5. Load the patched ROM in your emulator or flashcard

## Building from Source

### Prerequisites

All platforms require:
- A legally obtained ROM of *Rhythm Tengoku* **(Rev 0)** (CRC32: `349D7025`)
- Git

### Windows

Use the [Linux instructions](#linux) via Windows Subsystem for Linux (WSL). Debian or Ubuntu distributions are recommended.

To set up WSL:
```bash
wsl --install
```

Then follow the Linux build instructions below.

### Linux

#### Dependencies

Install the required packages (Ubuntu/Debian):
```bash
sudo apt update
sudo apt install build-essential binutils-arm-none-eabi git libpng-dev ffmpeg
```

#### Install devkitPro

```bash
# Download and install devkitPro pacman (using my mirror for now)
wget https://www.shaffy.fr/install-devkitpro-pacman
chmod +x ./install-devkitpro-pacman
sudo ./install-devkitpro-pacman

# Set environment variables
export DEVKITPRO=/opt/devkitpro
export DEVKITARM=/opt/devkitpro/devkitARM
export DEVKITPPC=/opt/devkitpro/devkitPPC

# Install GBA development tools
sudo dkp-pacman -Sy
sudo dkp-pacman -S gba-dev
```

#### Clone and Build

1. **Clone this repository:**
   ```bash
   git clone https://github.com/RHAdvance/RhythmHeavenAdvance.git
   ```

2. **Set up agbcc:**
   ```bash
   git clone https://github.com/pret/agbcc.git
   cd agbcc
   ./build.sh
   ./install.sh ../RhythmHeavenAdvance
   cd ../RhythmHeavenAdvance
   ```

3. **Place your ROM:**
   - Copy your *Rhythm Tengoku* ROM into the project root directory
   - Rename it to `baserom.gba` (or as specified in the Makefile)

4. **Build the project:**
   ```bash
   make -j$(nproc)
   ```

The patched ROM will be generated in the `build/` directory.

### macOS

macOS build instructions are coming soon! (Pull request appreciated...)

## Creditos
Mira todos los creditos [aqui!](CREDITS.md)!

## Contacto

- **Discord:** https://discord.com/invite/MNJ3Wv38T4

## Disclaimer

Este es un proyecto no oficial hecho por fans y no tiene esta, afiliado, respaldado, o asociado con Nintendo de ninguna manera. Todas las marcas pertenecen a sus respectivos dueños. Este parche esta hecho para uso personal y con copias legalmente obtenidas del juego antes mencionado.  

Esta ESTRICTAMENTE PROHIBIDO usar este parche para uso comercial.

Todos los derechos de los assets o el codigo fuente estan reservados por los autores originales y Nintendo.
