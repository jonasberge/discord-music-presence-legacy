# Discord Game SDK

Version: 3.2.1
Date: 12.03.2024
Source: https://discord.com/developers/docs/game-sdk/sdk-starter-guide

## Preparation

The Discord Game SDK ships with an `so` library for Linux,
but it must be renamed to `libdiscord.so` for CMake to detect it.
Do this by running the following command in the root directory of the project:

```sh
cp vendor/discord_game_sdk/lib/x86_64/discord_game_sdk.so vendor/discord_game_sdk/lib/x86_64/libdiscord.so
```
