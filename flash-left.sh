#!/bin/bash

echo 'Wating for nano...'
while [ ! -d /Volumes/NICENANO ]; do sleep 1; done

sleep 4
cp -v /Users/marcel/zmk-miryoku/build/left.uf2 /Volumes/NICENANO

echo 'Done!'
