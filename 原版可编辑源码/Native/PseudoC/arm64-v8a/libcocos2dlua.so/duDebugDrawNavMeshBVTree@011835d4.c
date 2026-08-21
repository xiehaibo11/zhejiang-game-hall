
/* duDebugDrawNavMeshBVTree(duDebugDraw*, dtNavMesh const&) */

void duDebugDrawNavMeshBVTree(duDebugDraw *param_1,dtNavMesh *param_2)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_1 != (duDebugDraw *)0x0) && (iVar5 = dtNavMesh::getMaxTiles(param_2), 0 < iVar5)) {
    iVar5 = 0;
    do {
      lVar7 = dtNavMesh::getTile(param_2,iVar5);
      if (*(long *)(lVar7 + 8) != 0) {
        fVar14 = *(float *)(*(long *)(lVar7 + 8) + 0x60);
        (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,1);
        lVar8 = *(long *)(lVar7 + 8);
        if (0 < *(int *)(lVar8 + 0x30)) {
          lVar9 = 0;
          lVar10 = 0;
          fVar14 = 1.0 / fVar14;
          do {
            puVar1 = (ushort *)(*(long *)(lVar7 + 0x40) + lVar9);
            if (-1 < *(int *)(puVar1 + 6)) {
              fVar11 = (float)NEON_ucvtf((uint)*puVar1);
              fVar2 = (float)NEON_ucvtf((uint)puVar1[3]);
              fVar12 = (float)NEON_ucvtf((uint)puVar1[1]);
              fVar3 = (float)NEON_ucvtf((uint)puVar1[4]);
              fVar13 = (float)NEON_ucvtf((uint)puVar1[2]);
              fVar4 = (float)NEON_ucvtf((uint)puVar1[5]);
              duAppendBoxWire(param_1,*(float *)(lVar8 + 0x48) + fVar14 * fVar11,
                              *(float *)(lVar8 + 0x4c) + fVar14 * fVar12,
                              *(float *)(lVar8 + 0x50) + fVar14 * fVar13,
                              *(float *)(lVar8 + 0x48) + fVar14 * fVar2,
                              *(float *)(lVar8 + 0x4c) + fVar14 * fVar3,
                              *(float *)(lVar8 + 0x50) + fVar14 * fVar4,0x80ffffff);
              lVar8 = *(long *)(lVar7 + 8);
            }
            lVar10 = lVar10 + 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar10 < *(int *)(lVar8 + 0x30));
        }
        (**(code **)(*(long *)param_1 + 0x48))(param_1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = dtNavMesh::getMaxTiles(param_2);
    } while (iVar5 < iVar6);
  }
  return;
}

