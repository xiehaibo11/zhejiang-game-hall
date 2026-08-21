
/* duDebugDrawNavMesh(duDebugDraw*, dtNavMesh const&, unsigned char) */

void duDebugDrawNavMesh(duDebugDraw *param_1,dtNavMesh *param_2,uchar param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != (duDebugDraw *)0x0) && (iVar1 = dtNavMesh::getMaxTiles(param_2), 0 < iVar1)) {
    iVar1 = 0;
    do {
      lVar3 = dtNavMesh::getTile(param_2,iVar1);
      if (*(long *)(lVar3 + 8) != 0) {
        FUN_01182c6c(param_1,param_2,0,lVar3,param_3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = dtNavMesh::getMaxTiles(param_2);
    } while (iVar1 < iVar2);
  }
  return;
}

