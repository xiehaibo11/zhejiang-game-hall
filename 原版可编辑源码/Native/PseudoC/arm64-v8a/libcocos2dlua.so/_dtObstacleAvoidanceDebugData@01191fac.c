
/* dtObstacleAvoidanceDebugData::~dtObstacleAvoidanceDebugData() */

void __thiscall
dtObstacleAvoidanceDebugData::~dtObstacleAvoidanceDebugData(dtObstacleAvoidanceDebugData *this)

{
  dtFree(*(void **)(this + 8));
  dtFree(*(void **)(this + 0x10));
  dtFree(*(void **)(this + 0x18));
  dtFree(*(void **)(this + 0x20));
  dtFree(*(void **)(this + 0x28));
  dtFree(*(void **)(this + 0x30));
  dtFree(*(void **)(this + 0x38));
  return;
}

