import type { HybridObject } from 'react-native-nitro-modules'

export interface LocationCoords
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  readonly accuracy: number | null
  readonly altitude: number | null
  readonly latitude: number
  readonly longitude: number
}
