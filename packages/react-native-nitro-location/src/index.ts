import { NitroModules } from 'react-native-nitro-modules'
import type { Location } from './specs/Location.nitro'

export * from './specs/Location.nitro'
export * from './specs/LocationCoords.nitro'
export * from './specs/LocationResult.nitro'

/**
 * Export NitroLocation to expose all methods
 */
export const NitroLocation =
  NitroModules.createHybridObject<Location>('LocationFactory')
