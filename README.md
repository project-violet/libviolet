# libviolet

Native downloader for `violet-app` written by `rust-lang`.

## How to build?

```
You must build in linux environment.
1. Install rust & cargo
2. rustup target add aarch64-linux-android armv7-linux-androideabi i686-linux-android
3. Download and unzip ndk https://developer.android.com/ndk/downloads
4. Settings up your ndk path below two files
libviolet/.cargo/config
libviolet/build.sh
5. Run ./build.sh
```

### iOS

```
rustup target add aarch64-apple-ios armv7-apple-ios armv7s-apple-ios x86_64-apple-ios i386-apple-ios
cargo install cargo-lipo
cargo install cbindgen
cargo lipo --release
cbindgen --config cbindgen.toml --crate violet --output my_header.h
```

## Why is libviolet written by rust?

I don't know anything about java, kotlin, swift and object-c.
But similar to flutter, I wanted to find a way to support both `ios` and `Android`.
C++ library dependencies and builds were too complex, so I used rust.
