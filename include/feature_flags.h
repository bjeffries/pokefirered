#ifndef GUARD_FEATURE_FLAGS_H
#define GUARD_FEATURE_FLAGS_H

// Feature flags for modifying game behavior at compile time.
// Uncomment a flag to enable it.

// Skip the Game Freak logo and Gengar/Nidorino intro animation.
// The copyright screen still plays (it loads save data), then the
// game jumps directly to the title screen.
// #define SKIP_GF_INTRO

// Skip the Game Freak intro animation AND the title screen.
// The copyright screen still plays (it loads save data), then the
// game jumps directly to the main menu.
// Implies SKIP_GF_INTRO.
#define SKIP_TITLE_SCREEN

// Skip the controls guide shown at the start of a new game.
// The Pikachu intro and Oak's speech still play normally.
// #define SKIP_CONTROLS_GUIDE

// Preset new game values. When all three are defined together, the entire
// new game introduction (controls guide, Pikachu intro, Oak's speech,
// gender selection, and name entry) is bypassed and these values are used.
// Names support A-Z and a-z only, up to 7 characters.
#define PRESET_PLAYER_GENDER MALE
#define PRESET_PLAYER_NAME   "Blaine"
#define PRESET_RIVAL_NAME    "Gary"

#endif // GUARD_FEATURE_FLAGS_H
