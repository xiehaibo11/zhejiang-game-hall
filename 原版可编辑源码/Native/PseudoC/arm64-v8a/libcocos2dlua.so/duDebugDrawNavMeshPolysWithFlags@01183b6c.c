
/* duDebugDrawNavMeshPolysWithFlags(duDebugDraw*, dtNavMesh const&, unsigned short, unsigned int) */

void duDebugDrawNavMeshPolysWithFlags
               (duDebugDraw *param_1,dtNavMesh *param_2,ushort param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  dtMeshTile *pdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != (duDebugDraw *)0x0) && (iVar1 = dtNavMesh::getMaxTiles(param_2), 0 < iVar1)) {
    iVar1 = 0;
    do {
      pdVar4 = (dtMeshTile *)dtNavMesh::getTile(param_2,iVar1);
      if (*(long *)(pdVar4 + 8) != 0) {
        uVar3 = dtNavMesh::getPolyRefBase(param_2,pdVar4);
        lVar5 = *(long *)(pdVar4 + 8);
        if (0 < *(int *)(lVar5 + 0x18)) {
          lVar6 = 0;
          lVar7 = 0x1c;
          do {
            if ((param_3 & *(ushort *)(*(long *)(pdVar4 + 0x10) + lVar7)) != 0) {
              duDebugDrawNavMeshPoly(param_1,param_2,uVar3 | (uint)lVar6,param_4);
              lVar5 = *(long *)(pdVar4 + 8);
            }
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 0x20;
          } while (lVar6 < *(int *)(lVar5 + 0x18));
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = dtNavMesh::getMaxTiles(param_2);
    } while (iVar1 < iVar2);
  }
  return;
}

