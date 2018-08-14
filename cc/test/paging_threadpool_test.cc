// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#include <atomic>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <thread>
#include "gtest/gtest.h"
#include "core/faster.h"
#include "device/file_system_disk.h"

using namespace FASTER::core;

typedef FASTER::environment::ThreadPoolIoHandler handler_t;

#define CLASS PagingTest_ThreadPool

#include "paging_test.h"

#undef CLASS

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}