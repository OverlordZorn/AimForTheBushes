# Static Line Framework

## 1. Config Values
### 1.1 Vehicles
Static line actions are automatically added to all children of `Helicopter` and `Plane`. However, it must be enabled per-vehicle.

```cpp
class CfgVehicles {
    class TAG_myVehicle {
        aftb_staticLine_enabled = 1;
        aftb_staticLine_condition = "true";
    };
};
```

| Config Name                | Type             | Description                                                       |
| -------------------------- | ---------------- | ----------------------------------------------------------------- |
| `aftb_staticLine_enabled`   | Number           | 0-disabled, 1-enabled                                             |
| `aftb_staticLine_condition` | String (of code) | Extra condition that must return true in order to jump (OPTIONAL) |

## 2. Events
### 2.1 Listenable
| Event Name                             | Passed Parameter(s)                     | Locality | Description                           |
| -------------------------------------- | --------------------------------------- | -------- | ------------------------------------- |
| `aftb_staticLine_jumped`                | [_vehicle, _unit, _parachute]           | Local    | A unit jumped out                     |
| `aftb_staticLine_jumpWaypointStarted`   | [_vehicle, _startPosition, _wpPosition] | Global   | "Static Line Jump" waypoint started   |
| `aftb_staticLine_jumpWaypointFinished`  | [_vehicle, _startPosition, _wpPosition] | Global   | "Static Line Jump" waypoint completed |