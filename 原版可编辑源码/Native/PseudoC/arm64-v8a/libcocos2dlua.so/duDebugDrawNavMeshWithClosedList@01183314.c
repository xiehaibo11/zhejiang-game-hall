
/* duDebugDrawNavMeshWithClosedList(duDebugDraw*, dtNavMesh const&, dtNavMeshQuery const&, unsigned
   char) */

void duDebugDrawNavMeshWithClosedList
               (duDebugDraw *param_1,dtNavMesh *param_2,dtNavMeshQuery *param_3,uchar param_4)

{
  dtNavMeshQuery *pdVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 != (duDebugDraw *)0x0) {
    pdVar1 = (dtNavMeshQuery *)0x0;
    if ((param_4 & 2) != 0) {
      pdVar1 = param_3;
    }
    iVar2 = dtNavMesh::getMaxTiles(param_2);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar4 = dtNavMesh::getTile(param_2,iVar2);
        if (*(long *)(lVar4 + 8) != 0) {
          FUN_01182c6c(param_1,param_2,pdVar1,lVar4,param_4);
        }
        iVar2 = iVar2 + 1;
        iVar3 = dtNavMesh::getMaxTiles(param_2);
      } while (iVar2 < iVar3);
    }
  }
  return;
}

