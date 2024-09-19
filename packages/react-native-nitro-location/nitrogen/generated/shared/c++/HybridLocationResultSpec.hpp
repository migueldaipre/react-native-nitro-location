///
/// HybridLocationResultSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `HybridLocationCoordsSpec` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationCoordsSpec; }

#include <memory>
#include "HybridLocationCoordsSpec.hpp"
#include <optional>

namespace margelo::nitro::nitro_location {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `LocationResult`
   * Inherit this class to create instances of `HybridLocationResultSpec` in C++.
   * @example
   * ```cpp
   * class HybridLocationResult: public HybridLocationResultSpec {
   *   // ...
   * };
   * ```
   */
  class HybridLocationResultSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridLocationResultSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridLocationResultSpec() { }

    public:
      // Properties
      virtual std::shared_ptr<margelo::nitro::nitro_location::HybridLocationCoordsSpec> getCoords() = 0;
      virtual double getTimestamp() = 0;
      virtual std::optional<bool> getMocked() = 0;

    public:
      // Methods
      

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "LocationResult";
  };

} // namespace margelo::nitro::nitro_location
