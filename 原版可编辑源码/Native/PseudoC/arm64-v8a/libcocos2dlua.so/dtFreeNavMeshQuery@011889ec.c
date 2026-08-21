
/* dtFreeNavMeshQuery(dtNavMeshQuery*) */

void dtFreeNavMeshQuery(dtNavMeshQuery *param_1)

{
  if (param_1 != (dtNavMeshQuery *)0x0) {
    dtNavMeshQuery::~dtNavMeshQuery(param_1);
    dtFree(param_1);
    return;
  }
  return;
}

