///
/// HybridLocationResultSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridLocationResultSpec.hpp"

// Forward declaration of `HybridLocationResultSpecCxx` to properly resolve imports.
namespace NitroLocation { class HybridLocationResultSpecCxx; }

// Forward declaration of `HybridLocationCoordsSpec` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationCoordsSpec; }
// Forward declaration of `HybridLocationCoordsSpecSwift` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationCoordsSpecSwift; }

#include <memory>
#include "HybridLocationCoordsSpec.hpp"
#include "HybridLocationCoordsSpecSwift.hpp"
#include <optional>

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "NitroLocation-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::nitro_location {

  /**
   * The C++ part of HybridLocationResultSpecCxx.swift.
   *
   * HybridLocationResultSpecSwift (C++) accesses HybridLocationResultSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridLocationResultSpecCxx can directly inherit from the C++ class HybridLocationResultSpec
   * to simplify the whole structure and memory management.
   */
  class HybridLocationResultSpecSwift final: public HybridLocationResultSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridLocationResultSpecSwift(const NitroLocation::HybridLocationResultSpecCxx& swiftPart):
      HybridObject(HybridLocationResultSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroLocation::HybridLocationResultSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline std::shared_ptr<margelo::nitro::nitro_location::HybridLocationCoordsSpec> getCoords() noexcept override {
      auto result = _swiftPart.getCoords();
      return HybridContext::getOrCreate<HybridLocationCoordsSpecSwift>(result);
    }
    inline double getTimestamp() noexcept override {
      return _swiftPart.getTimestamp();
    }
    inline std::optional<bool> getMocked() noexcept override {
      auto result = _swiftPart.getMocked();
      return result;
    }

  public:
    // Methods
    

  private:
    NitroLocation::HybridLocationResultSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::nitro_location
