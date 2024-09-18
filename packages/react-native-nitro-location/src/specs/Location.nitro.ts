import type { HybridObject } from 'react-native-nitro-modules'
import type { LocationResult } from './LocationResult.nitro'

import type { Accuracy } from '../types/Accuracy'

export interface Location
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  getCurrentPosition(accuracy?: Accuracy): Promise<LocationResult>
}
