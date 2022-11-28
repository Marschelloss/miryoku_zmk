// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

#define XXX &none

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &sk LSHFT,         &sk LCTRL,         &sk LALT,          &sk LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &sk LSHFT,         &sk LCTRL,         &sk LALT,          &sk LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&sk LGUI,          &sk LALT,          &sk LCTRL,         &sk LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
U_MT(LALT, Q),     &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,            \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_MT(LSHIFT, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_FIGHT \
&kp Q,   &kp W,   &kp E,   &kp R,       &kp T,                                        &kp Y,             &kp U,             &kp I,             &kp O,              &kp P, \
&kp A,   &kp S,   &kp D,   &kp F,       &kp G,                                        &kp H,             &kp J,             &kp K,             &kp L,              &kp SQT, \
&kp Z,   &kp X,   &kp C,   &kp V,       &kp B,                                        &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH), \
         U_NP,    &kp Z,   &kp LALT,    &kp SPACE,   &kp LGUI,    &kp RET,            &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAME \
&kp Q,   &kp W,   &kp E,   &kp R,       &kp T,                                        &kp Y,             &kp U,             &kp I,             &kp O,              &kp P, \
&kp A,   &kp S,   &kp D,   &kp F,       &kp G,                                        &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),      U_MT(LGUI, SQT), \
&kp Z,   &kp X,   &kp C,   &kp V,       &kp B,                                        &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH), \
         U_NP,    &kp Z,   &kp LALT,    &kp SPACE,   &kp LSHIFT,   U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYOUTMAPPING_SOFLE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp ESC    &kp N1   &kp N2  &kp N3  &kp N4   &kp N5                 &to U_GAME &to U_BASE  &to U_FIGHT  XXX       XXX  XXX \
&kp TAB    K00      K01     K02     K03      K04                    K05        K06         K07          K08       K09  XXX \
&kp LCTRL  K10      K11     K12     K13      K14                    K15        K16         K17          K18       K19  XXX \
&kp LSHIFT K20      K21     K22     K23      K24     XXX       XXX  K25        K26         K27          K28       K29  XXX \
                    XXX     XXX     K32      K33     K34       K35  K36        K37         &kp C_NEXT   &kp C_PP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(FIGHT,  "Fight")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_FIGHT MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9 
#define U_GAME   10 
#define U_FIGHT   11 