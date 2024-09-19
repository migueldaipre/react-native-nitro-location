///
/// HybridLocationSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridLocationSpec.hpp"

namespace margelo::nitro::nitro_location {

  void HybridLocationSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("getCurrentPosition", &HybridLocationSpec::getCurrentPosition);
    });
  }

} // namespace margelo::nitro::nitro_location
