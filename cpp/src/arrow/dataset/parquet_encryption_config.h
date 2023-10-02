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

#pragma once

#include "arrow/dataset/type_fwd.h"

namespace parquet::encryption {
class CryptoFactory;
struct KmsConnectionConfig;
struct EncryptionConfiguration;
struct DecryptionConfiguration;
}  // namespace parquet::encryption

namespace arrow {
namespace dataset {

/// core class, that translates the parameters of high level encryption
struct ARROW_DS_EXPORT ParquetEncryptionConfig {
  std::shared_ptr<parquet::encryption::CryptoFactory> crypto_factory;
  std::shared_ptr<parquet::encryption::KmsConnectionConfig> kms_connection_config;
  std::shared_ptr<parquet::encryption::EncryptionConfiguration> encryption_config;
};

/// core class, that translates the parameters of high level decryption
struct ARROW_DS_EXPORT ParquetDecryptionConfig {
  std::shared_ptr<parquet::encryption::CryptoFactory> crypto_factory;
  std::shared_ptr<parquet::encryption::KmsConnectionConfig> kms_connection_config;
  std::shared_ptr<parquet::encryption::DecryptionConfiguration> decryption_config;
};

}  // namespace dataset
}  // namespace arrow
