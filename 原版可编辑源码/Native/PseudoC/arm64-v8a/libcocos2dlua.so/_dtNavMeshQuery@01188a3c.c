
/* dtNavMeshQuery::~dtNavMeshQuery() */

void __thiscall dtNavMeshQuery::~dtNavMeshQuery(dtNavMeshQuery *this)

{
  if (*(dtNodePool **)(this + 0x50) != (dtNodePool *)0x0) {
    dtNodePool::~dtNodePool(*(dtNodePool **)(this + 0x50));
  }
  if (*(dtNodePool **)(this + 0x58) != (dtNodePool *)0x0) {
    dtNodePool::~dtNodePool(*(dtNodePool **)(this + 0x58));
  }
  if (*(dtNodeQueue **)(this + 0x60) != (dtNodeQueue *)0x0) {
    dtNodeQueue::~dtNodeQueue(*(dtNodeQueue **)(this + 0x60));
  }
  dtFree(*(void **)(this + 0x50));
  dtFree(*(void **)(this + 0x58));
  dtFree(*(void **)(this + 0x60));
  return;
}

