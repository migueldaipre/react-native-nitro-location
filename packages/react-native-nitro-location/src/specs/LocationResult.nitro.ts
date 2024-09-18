import type { HybridObject } from 'react-native-nitro-modules'
import type { LocationCoords } from './LocationCoords.nitro'

export interface LocationResult
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  readonly coords: LocationCoords

  /**
   * The time at which this position info was obtained in milliseconds since epoch datetime.
   */
  readonly timestamp: number

  /**
   * Android Only
   */
  readonly mocked: boolean | undefined
}
