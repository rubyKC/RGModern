// zlib License

// copyright (C) 2023 Guoxiaomi and Krimiston

// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.

// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:

// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
#include <cstddef>

#pragma once
namespace rgm::core {
enum class cooperation { asynchronous, exclusive, concurrent };

enum worker_type { main, render, audio, table, steam, network, ai, other };

template <cooperation type, size_t index>
struct cooperation_flag {
  static constexpr cooperation co_type = type;
  static constexpr cooperation co_index = index;
};

template <size_t index>
using as_flag = cooperation_flag<cooperation::asynchronous, index>;

template <size_t index>
using ex_flag = cooperation_flag<cooperation::exclusive, index>;

template <size_t index>
using co_flag = cooperation_flag<cooperation::concurrent, index>;
}  // namespace rgm::core