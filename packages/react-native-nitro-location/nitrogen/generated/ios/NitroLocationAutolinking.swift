///
/// NitroLocationAutolinking.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

public final class NitroLocationAutolinking {
  /**
   * Creates an instance of a Swift class that implements `HybridLocationFactorySpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridLocationFactorySpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `LocationFactory`).
   */
  public static func createLocationFactory() -> HybridLocationFactorySpecCxx {
    let hybridObject = LocationFactory()
    return hybridObject.createCxxBridge()
  }
}
