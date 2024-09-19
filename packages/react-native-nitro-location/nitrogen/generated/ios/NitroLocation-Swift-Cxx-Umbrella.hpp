///
/// NitroLocation-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `Accuracy` to properly resolve imports.
namespace margelo::nitro::nitro_location { enum class Accuracy; }
// Forward declaration of `HybridLocationCoordsSpec` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationCoordsSpec; }
// Forward declaration of `HybridLocationResultSpec` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationResultSpec; }
// Forward declaration of `HybridLocationSpec` to properly resolve imports.
namespace margelo::nitro::nitro_location { class HybridLocationSpec; }

// Include C++ defined types
#include "Accuracy.hpp"
#include "HybridLocationCoordsSpec.hpp"
#include "HybridLocationResultSpec.hpp"
#include "HybridLocationSpec.hpp"
#include <future>
#include <memory>
#include <optional>

// C++ helpers for Swift
#include "NitroLocation-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/PromiseHolder.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridLocationCoordsSpecCxx` to properly resolve imports.
namespace NitroLocation { class HybridLocationCoordsSpecCxx; }
// Forward declaration of `HybridLocationResultSpecCxx` to properly resolve imports.
namespace NitroLocation { class HybridLocationResultSpecCxx; }
// Forward declaration of `HybridLocationSpecCxx` to properly resolve imports.
namespace NitroLocation { class HybridLocationSpecCxx; }

// Include Swift defined types
#if __has_include("NitroLocation-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroLocation".
#include "NitroLocation-Swift.h"
#else
#error NitroLocation's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroLocation", and try building the app first.
#endif