## Steps to reproduce
1. Build example GDExtension library with `scons`.
2. Open the project with Godot editor that has every libraries builtin.
3. The project opens successfully, `once called` appear on stdout.
4. Build Godot editor with `builtin_freetype=no builtin_libpng=no builtin_zlib=no builtin_graphite=no builtin_harfbuzz=no`, and open the project.
5. Editor crashed with signal 11.
6. Build Godot editor again with `builtin_freetype=no builtin_libpng=no builtin_zlib=no builtin_graphite=no builtin_harfbuzz=no builtin_icu4c=no`
7. The project opens successfully.
