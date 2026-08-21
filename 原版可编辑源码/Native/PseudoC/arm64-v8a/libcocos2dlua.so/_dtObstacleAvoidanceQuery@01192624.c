
/* dtObstacleAvoidanceQuery::~dtObstacleAvoidanceQuery() */

void __thiscall dtObstacleAvoidanceQuery::~dtObstacleAvoidanceQuery(dtObstacleAvoidanceQuery *this)

{
  dtFree(*(void **)(this + 0x30));
  dtFree(*(void **)(this + 0x40));
  return;
}

