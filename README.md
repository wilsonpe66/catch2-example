# catch2-example


git clone --recurse-submodules -j8 git://github.com/foo/bar.git

cmake -D CMAKE_BUILD_TYPE=debug . -Bdebug | egrep -i type
cmake -D CMAKE_BUILD_TYPE=release . -Brelease | egrep -i type
