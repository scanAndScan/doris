// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
// This file is copied from
// https://github.com/ClickHouse/ClickHouse/blob/master/src/Interpreters/Cache/FileCacheSettings.h
// and modified by Doris

#pragma once

#include "io/cache/block/block_file_cache_fwd.h"

namespace doris {
namespace io {

struct FileCacheSettings {
    size_t max_size = 0;
    size_t max_elements = REMOTE_FS_OBJECTS_CACHE_DEFAULT_ELEMENTS;
    // use a priority policy to eliminate
    size_t persistent_max_size = 0;
    size_t persistent_max_elements = REMOTE_FS_OBJECTS_CACHE_DEFAULT_ELEMENTS;

    size_t max_file_segment_size = 0;
    size_t max_query_cache_size = 0;
};

} // namespace io
} // namespace doris
