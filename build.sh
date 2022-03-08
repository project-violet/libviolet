rustup target add aarch64-apple-ios armv7-apple-ios armv7s-apple-ios x86_64-apple-ios i386-apple-ios
cargo install cargo-lipo
cargo install cbindgen
cargo lipo --release
cbindgen --config cbindgen.toml --crate violet --output my_header.h
