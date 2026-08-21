
/* dtFreeObstacleAvoidanceQuery(dtObstacleAvoidanceQuery*) */

void dtFreeObstacleAvoidanceQuery(dtObstacleAvoidanceQuery *param_1)

{
  if (param_1 != (dtObstacleAvoidanceQuery *)0x0) {
    dtFree(*(void **)(param_1 + 0x30));
    dtFree(*(void **)(param_1 + 0x40));
    dtFree(param_1);
    return;
  }
  return;
}

