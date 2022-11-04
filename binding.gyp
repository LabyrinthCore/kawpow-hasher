{
    "targets": [
        {
            "target_name": "kawpowhasher",
            "sources": [
                "src/kawpow/kawpow.cpp",
                "src/kawpow/primes.c",
                "src/kawpow/progpow.cpp",
                "src/keccak/keccak.c",
                "src/keccak/keccakf800.c",
                "src/keccak/keccakf1600.c",
                "src/uint256.cpp",
                "src/util/strencodings.cpp",
                "kawpowhasher.cc"
            ],
            "include_dirs": [
                ".",
                "src",
                "<!(node -e \"require('nan')\")"
            ],
            "cflags_cc": [
                "-std=c++17 -Wno-cast-function-type"
            ]
        }
    ]
}