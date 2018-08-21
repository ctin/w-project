#!/bin/sh

PWD=`pwd`
if [[ "$PWD" != */ ]]; then
	PWD="$PWD/"
fi

BASE_DIR=$PWD$(dirname "$0")
BUILD_DIR=$BASE_DIR/build

if [ -d "$BUILD_DIR" ]; then
	rm -r "$BUILD_DIR"
fi

mkdir -p $BUILD_DIR
if [ ! -d "$BUILD_DIR" ]; then
  echo "dir $BUILD_DIR is not exists!"
  exit 1
fi

ECHO

cd $BUILD_DIR
echo "$BASE_DIR"
conan install $BASE_DIR --build missing
cmake $BASE_DIR
make
#cmake -G Xcode $BASE_DIR
#open -n wserver.xcodeproj