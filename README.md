[![Discord Channel](https://img.shields.io/discord/518540764754608128?color=%237289DA&logo=discord&logoColor=%23FFFFFF)](https://discord.gg/YQKCAYQ)
[![Downloads](https://img.shields.io/github/downloads/diasurgical/devilutionX/total.svg)](https://github.com/sixcy/devilutionX-ironman/releases)
[![Codecov](https://codecov.io/gh/diasurgical/devilutionX/branch/master/graph/badge.svg)](https://codecov.io/gh/sixcy/devilutionX-ironman)
[![BCH compliance](https://bettercodehub.com/edge/badge/sixcy/devilutionX-ironman?branch=ironman)](https://bettercodehub.com/)

# Diablo 1 (DevilutionX) Ironman mod

[Download the mod here](https://github.com/sixcy/devilutionX-ironman/releases)

This Ironman mod is built on DevilutionX version 1.4.1.
DevilutionX is a modern port of Diablo 1. Read below the section "DevilutionX" to learn more.

![showcase1](https://user-images.githubusercontent.com/6163502/188024803-d87fc22f-edc0-4fe5-b53d-671c878e456f.png)
![showcase2](https://user-images.githubusercontent.com/6163502/188024806-f8efe47c-823f-453a-acbd-d483d67cd7a4.png)

Ironman is a classic Diablo 1 challenge, reputed to be one of the hardest user-made challenges.
Many variations of it have emerged; tournaments were held and are still being held to this day, players competing on who would go the furthest.

One of the most common variations involved diving in the dungeon with a team of 3 people, with the following rules:
1) No backtracking is allowed: once you enter a new level, you can never go back to the surface or go back to previously cleared levels.
2) The level must be cleared before hopping to the next: all monsters must be killed, all barrels must be broken, and all chests/sarcophagus must be opened
3) Death is permanent. Once you die, the game ends for you unless a teammate has a Resurrect scroll to spend on you.
4) In dlvl16, Diablo must be killed last
5) You can only buy gear between difficulties: upon starting a New Game, between Normal and Nightmare, and finally between Nightmare and Hell

Some people even attempted the challenge solo: they would make a solo MP game and try to survive until the end.
The game has known triple-crown (on all three difficulties) victories several times, although such a challenge is insanely hard!

This mod aims to revisit the Ironman challenge for Single Player. In particular:
- Saving is allowed to pause and resume the game at anytime (Save has been replaced by "Save and Exit"); instead of having to play through all four dungeon levels in one game session
- Quests have been modified to have their rewards available without having to visit townsfolks
- The various ironman rules are enforced through dynamic checks. For instance, you cannot descend to the next level until you have cleared the current one.
- (not from the mod in itself) Since it is Single Player, the challenge is easier: monsters have two times less HP than in Multi-Player

The intended way to play this mod is to make a new Single-Player character, create a new Normal game, and kill Diablo.
Once Diablo is killed, you may move to Nightmare. Then to Hell. Although killing Diablo on Normal difficulty should be hard enough!

If your character dies, you will not be able to resume progress: the run will be lost.
The save file is not deleted, so you may create a New Game just for fun if you wish to - although that would be beyond ironman's scope.

1-person Multi-Player also works fine, so you can play MP and still have the ironman checks.
Playing with more than one person has not been tested at all, play it at your own risks.

The mod will not tamper with your existing devilutionX save files. It is safe to try.

I hope you will have a lot of fun trying out the Diablo 1 Ironman challenge.
Feel free to create an Issue (Issues tab on GitHub) if you encounter any problems.
Suggestions are welcome as well!

Good luck.

---

<p align="center">
<img width="554" src="https://user-images.githubusercontent.com/204594/113575181-c946a400-961d-11eb-8347-a8829fa3830c.png">
</p>

<p align="center">
<img width="838" src="https://user-images.githubusercontent.com/204594/113578478-26912400-9623-11eb-9ff6-9bd9717462b6.png">
</p>

<sub>*(The health-bar and XP-bar are off by default, but can be enabled in the [ini-file](https://github.com/diasurgical/devilutionX/wiki/DevilutionX-diablo.ini-configuration-guide). Widescreen and transparency can also be disabled if preferred)*</sub>

# What is DevilutionX

DevilutionX is a source port of Diablo and Hellfire that strives to make it simple to run the game while providing engine improvements, bugfixes, and some optional quality of life features.

Check out the [manual](https://github.com/diasurgical/devilutionX/wiki) for what features are available and how best to take advantage of them.

For a full list of changes see our [changelog](docs/CHANGELOG.md).

# How to Install

Note: You'll need access to the data from the original game. If you don't have an original CD then you can [buy Diablo from GoG.com](https://www.gog.com/game/diablo). Alternately you can use `spawn.mpq` from the [shareware](http://ftp.blizzard.com/pub/demos/diablosw.exe) version, in place of `DIABDAT.MPQ`, to play the shareware portion of the game.

Download the latest [DevilutionX release](https://github.com/diasurgical/devilutionX/releases) and extract the contents to a location of your choosing or [build from source](#building-from-source).

- Copy `DIABDAT.MPQ` from the CD or GOG-installation (or [extract it from the GoG installer](https://github.com/diasurgical/devilutionX/wiki/Extracting-the-.MPQs-from-the-GoG-installer)) to the DevilutionX folder.
- To run the Diablo: Hellfire expansion you will need to also copy `hellfire.mpq`, `hfmonk.mpq`, `hfmusic.mpq`, `hfvoice.mpq`.

For more detailed instructions: [Installation Instructions](./docs/installing.md).

# Contributing

We are always looking for more people to help with [coding](docs/CONTRIBUTING.md), [documentation](https://github.com/diasurgical/devilutionX/wiki), testing the [latest builds](https://app.circleci.com/pipelines/github/diasurgical/devilutionX?branch=master), spreading the word, or simply just hanging out on [the chat](https://discord.gg/YQKCAYQ).

# Mods

We hope to provide a good starting point for mods, in addition to the full Devilution source code we also provide modding tools. Also, check out the list of known [mods based on DevilutionX](https://github.com/diasurgical/devilutionX/wiki/Mods-and-related-projects).

# Test builds

If you want to help test the latest state of the next version you can fetch the build artifact from one of the build server:

*Note: You must be logged into GitHub to download the attachments!*

[![Linux x86](https://github.com/diasurgical/devilutionX/actions/workflows/Linux_x86.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/Linux_x86.yml?query=branch%3Amaster)
[![Linux x86-64 SDL1](https://github.com/diasurgical/devilutionX/actions/workflows/Linux_x86_64_SDL1.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/Linux_x86_64_SDL1.yml?query=branch%3Amaster)
[![MacOSX](https://github.com/diasurgical/devilutionX/actions/workflows/MacOSX.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/MacOSX.yml?query=branch%3Amaster)
[![Windows x64](https://github.com/diasurgical/devilutionX/actions/workflows/Windows_x64.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/Windows_x64.yml?query=branch%3Amaster)
[![Windows x86](https://github.com/diasurgical/devilutionX/actions/workflows/Windows_x86.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/Windows_x86.yml?query=branch%3Amaster)
[![Android](https://github.com/diasurgical/devilutionX/actions/workflows/Android.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/Android.yml?query=branch%3Amaster)
[![iOS](https://github.com/diasurgical/devilutionX/actions/workflows/iOS.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/iOS.yml?query=branch%3Amaster)
[![PS4](https://github.com/diasurgical/devilutionX/actions/workflows/PS4.yml/badge.svg)](https://github.com/diasurgical/devilutionX/actions/workflows/PS4.yml?query=branch%3Amaster)

Linux x86-64, Switch, Vita, 3DS, Amiga, [![CircleCI](https://circleci.com/gh/diasurgical/devilutionX.svg?style=shield)](https://app.circleci.com/pipelines/github/diasurgical/devilutionX?branch=master)

Xbox One/Series, MSVC [![AppVeyor](https://ci.appveyor.com/api/projects/status/1a0jus2372qvksht/branch/master?svg=true)](https://ci.appveyor.com/project/AJenbo/devilutionx)

# Building from Source

Want to compile the program by yourself? Great! Simply follow the [build instructions](./docs/building.md).

# Credits

- The original Devilution project [Devilution](https://github.com/diasurgical/devilution#credits)
- [Everyone](https://github.com/diasurgical/devilutionX/graphs/contributors) who worked on Devilution/DevilutionX
- [Nikolay Popov](https://www.instagram.com/nikolaypopovz/) for UI and graphics
- [WiAParker](https://wiaparker.pl/projekty/diablo-hellfire/) for the Polish voice pack
- And thanks to all who support the project, report bugs, and help spread the word ❤️

# Legal

DevilutionX is released to the Public Domain. The documentation and functionality provided by DevilutionX may only be utilized with assets provided by the ownership of Diablo.

The source code in this repository is for non-commercial use only. If you use the source code you may not charge others for access to it or any derivative work thereof.

Diablo® - Copyright © 1996 Blizzard Entertainment, Inc. All rights reserved. Diablo and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.

DevilutionX and any of its maintainers are in no way associated with or endorsed by Blizzard Entertainment®.
