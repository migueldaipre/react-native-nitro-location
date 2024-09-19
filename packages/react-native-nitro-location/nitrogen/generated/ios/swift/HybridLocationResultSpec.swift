///
/// HybridLocationResultSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the LocationResult HybridObject.
 * Implement this protocol to create Swift-based instances of LocationResult.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridLocationResult : HybridLocationResultSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridLocationResultSpec: HybridObjectSpec {
  // Properties
  var coords: HybridLocationCoordsSpec { get }
  var timestamp: Double { get }
  var mocked: Bool? { get }

  // Methods
  
}

public extension HybridLocationResultSpec {
  /**
   * Create a new instance of HybridLocationResultSpecCxx for the given HybridLocationResultSpec.
   *
   * Instances of HybridLocationResultSpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> HybridLocationResultSpecCxx {
    return HybridLocationResultSpecCxx(self)
  }
}
