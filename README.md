Source Info
===========

Open "Team4Iterate.uproject" in Unreal.

This project is based on a C++ project. However, most mechanics are
still implemented via blueprints.

The following is implemented via C++ and can be found under source
folder.

-   Character movement keybinding.

-   Spawn helpful blocks and barrier(cut from final game)

The following is implemented via blueprints

-   Grapple mechanic (in character blueprint)

-   Infinite game mode and procedural generation. (In infinitegamemode
    blueprint)

-   UI

-   Twitch integration is under twitchplay folder and use Plugin
    [Twitchplay](https://www.unrealengine.com/marketplace/twitchplay-plugin)

-   Collision detection and death checks are in ByreaveBP\_Tile.

Build instructions
==================

-   First compile the c++ code by clicking compile button in unreal
    menu.

-   Directly building it using the dropdown menu in unreal for windows
    64-bits.

-   Choose a folder and the executable should be in WindowsNoEditor
    folder named in the project name.

Potential Future Implementations
================================

Custom bird character.

Ability to input your own Twitch user/channel.

More interactions with Twitch audience.
