
/* dtCrowd::purge() */

void __thiscall dtCrowd::purge(dtCrowd *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)this) {
    lVar2 = 0;
    lVar3 = 0x30;
    do {
      lVar1 = *(long *)(this + 8);
      dtLocalBoundary::~dtLocalBoundary((dtLocalBoundary *)(lVar1 + lVar3));
      dtPathCorridor::~dtPathCorridor
                ((dtPathCorridor *)((dtLocalBoundary *)(lVar1 + lVar3) + -0x28));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x270;
    } while (lVar2 < *(int *)this);
  }
  dtFree(*(void **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  dtFree(*(void **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  dtFree(*(void **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  dtFree(*(void **)(this + 0x368));
  *(undefined8 *)(this + 0x368) = 0;
  dtFreeProximityGrid(*(dtProximityGrid **)(this + 0x360));
  *(undefined8 *)(this + 0x360) = 0;
  dtFreeObstacleAvoidanceQuery(*(dtObstacleAvoidanceQuery **)(this + 0x358));
  *(undefined8 *)(this + 0x358) = 0;
  dtFreeNavMeshQuery(*(dtNavMeshQuery **)(this + 0x13c8));
  *(undefined8 *)(this + 0x13c8) = 0;
  return;
}

