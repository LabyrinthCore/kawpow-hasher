// Copyright (c) 2021-2022 The Labyrinth Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <include/hash_types.h>

#include <stddef.h>

#ifdef __cplusplus
#define NOEXCEPT noexcept
#else
#define NOEXCEPT
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * The Keccak-f[1600] function.
 *
 * The implementation of the Keccak-f function with 1600-bit width of the permutation (b).
 * The size of the state is also 1600 bit what gives 25 64-bit words.
 *
 * @param state  The state of 25 64-bit words on which the permutation is to be performed.
 */
void kawpow_keccakf1600(uint64_t state[25]) NOEXCEPT;

/**
 * The Keccak-f[800] function.
 *
 * The implementation of the Keccak-f function with 800-bit width of the permutation (b).
 * The size of the state is also 800 bit what gives 25 32-bit words.
 *
 * @param state  The state of 25 32-bit words on which the permutation is to be performed.
 */
void kawpow_keccakf800(uint32_t state[25]) NOEXCEPT;

union kawpow_hash256 kawpow_keccak256(const uint8_t* data, size_t size) NOEXCEPT;
union kawpow_hash256 kawpow_keccak256_32(const uint8_t data[32]) NOEXCEPT;
union kawpow_hash512 kawpow_keccak512(const uint8_t* data, size_t size) NOEXCEPT;
union kawpow_hash512 kawpow_keccak512_64(const uint8_t data[64]) NOEXCEPT;

#ifdef __cplusplus
}
#endif
