
/* dtFreeObstacleAvoidanceDebugData(dtObstacleAvoidanceDebugData*) */

void dtFreeObstacleAvoidanceDebugData(dtObstacleAvoidanceDebugData *param_1)

{
  if (param_1 != (dtObstacleAvoidanceDebugData *)0x0) {
    dtFree(*(void **)(param_1 + 8));
    dtFree(*(void **)(param_1 + 0x10));
    dtFree(*(void **)(param_1 + 0x18));
    dtFree(*(void **)(param_1 + 0x20));
    dtFree(*(void **)(param_1 + 0x28));
    dtFree(*(void **)(param_1 + 0x30));
    dtFree(*(void **)(param_1 + 0x38));
    dtFree(param_1);
    return;
  }
  return;
}

