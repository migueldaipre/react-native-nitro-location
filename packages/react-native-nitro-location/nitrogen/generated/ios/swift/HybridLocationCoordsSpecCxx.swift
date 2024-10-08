///
/// HybridLocationCoordsSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridLocationCoordsSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public final class HybridLocationCoordsSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::nitro_location::bridge::swift`)
   * from `NitroLocation-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.nitro_location.bridge.swift

  /**
   * Holds an instance of the `HybridLocationCoordsSpec` Swift protocol.
   */
  private(set) var implementation: HybridLocationCoordsSpec

  /**
   * Create a new `HybridLocationCoordsSpecCxx` that wraps the given `HybridLocationCoordsSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: HybridLocationCoordsSpec) {
    self.implementation = implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    get {
      return self.implementation.hybridContext
    }
    set {
      self.implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  public var memorySize: Int {
    return self.implementation.memorySize
  }

  // Properties
  public var accuracy: bridge.std__optional_double_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_double_ in
        if let actualValue = self.implementation.accuracy {
          return bridge.create_std__optional_double_(actualValue)
        } else {
          return .init()
        }
      }()
    }
  }
  
  public var altitude: bridge.std__optional_double_ {
    @inline(__always)
    get {
      return { () -> bridge.std__optional_double_ in
        if let actualValue = self.implementation.altitude {
          return bridge.create_std__optional_double_(actualValue)
        } else {
          return .init()
        }
      }()
    }
  }
  
  public var latitude: Double {
    @inline(__always)
    get {
      return self.implementation.latitude
    }
  }
  
  public var longitude: Double {
    @inline(__always)
    get {
      return self.implementation.longitude
    }
  }

  // Methods
  
}
