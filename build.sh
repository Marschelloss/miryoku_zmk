#!/bin/sh

rm -v /workspaces/zmk-config/build/*.uf2

# Left
cd /workspaces/zmk-custom-sofle/app
west build --pristine=auto -d /workspaces/zmk-config/build-left -b nice_nano_v2 -- -DSHIELD="sofle_left nice_view_adapter nice_view" -DZMK_CONFIG="/workspaces/zmk-config/config"
cp -vp /workspaces/zmk-config/build-left/zephyr/zmk.uf2 /workspaces/zmk-config/build/left.uf2

# Right
cd /workspaces/zmk-custom-sofle/app
west build --pristine=auto -d /workspaces/zmk-config/build-right -b nice_nano_v2 -- -DSHIELD="sofle_right" -DZMK_CONFIG="/workspaces/zmk-config/config"
cp -vp /workspaces/zmk-config/build-right/zephyr/zmk.uf2 /workspaces/zmk-config/build/right.uf2
