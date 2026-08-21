
/* duDebugDrawNavMeshPortals(duDebugDraw*, dtNavMesh const&) */

void duDebugDrawNavMeshPortals(duDebugDraw *param_1,dtNavMesh *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((param_1 != (duDebugDraw *)0x0) && (iVar5 = dtNavMesh::getMaxTiles(param_2), 0 < iVar5)) {
    iVar5 = 0;
    do {
      lVar7 = dtNavMesh::getTile(param_2,iVar5);
      if (*(long *)(lVar7 + 8) != 0) {
        fVar20 = *(float *)(*(long *)(lVar7 + 8) + 0x44);
        (**(code **)(*(long *)param_1 + 0x20))(0x40000000,param_1,1);
        uVar10 = 0;
        lVar8 = *(long *)(lVar7 + 8);
        do {
          if (0 < *(int *)(lVar8 + 0x18)) {
            uVar1 = 0x80008000;
            if (uVar10 != 2) {
              uVar1 = 0x80808000;
            }
            fVar21 = -0.04;
            if (uVar10 != 2) {
              fVar21 = 0.04;
            }
            lVar16 = 0;
            uVar4 = 0x80000080;
            fVar22 = -0.04;
            if (uVar10 != 0) {
              uVar4 = 0x80800080;
              fVar22 = 0.04;
            }
            do {
              lVar14 = *(long *)(lVar7 + 0x10);
              uVar13 = (ulong)*(byte *)(lVar14 + lVar16 * 0x20 + 0x1e);
              if (uVar13 != 0) {
                uVar15 = 0;
                do {
                  lVar8 = lVar14 + lVar16 * 0x20;
                  if ((uVar10 | 0x8000) == (uint)*(ushort *)(lVar8 + uVar15 * 2 + 0x10)) {
                    lVar8 = lVar8 + 4;
                    uVar2 = 0;
                    if (uVar15 + 1 != uVar13) {
                      uVar2 = uVar15 + 1 & 0xffffffff;
                    }
                    pfVar11 = (float *)(*(long *)(lVar7 + 0x18) +
                                       (ulong)*(ushort *)(lVar8 + uVar15 * 2) * 0xc);
                    puVar12 = (undefined4 *)
                              (*(long *)(lVar7 + 0x18) + (ulong)*(ushort *)(lVar8 + uVar2 * 2) * 0xc
                              );
                    if ((uVar10 & 0x7ffffffb) == 0) {
                      fVar17 = fVar22 + *pfVar11;
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,pfVar11[1] - fVar20,pfVar11[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,fVar20 + pfVar11[1],pfVar11[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,fVar20 + pfVar11[1],pfVar11[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,fVar20 + (float)puVar12[1],puVar12[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,fVar20 + (float)puVar12[1],puVar12[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,(float)puVar12[1] - fVar20,puVar12[2],param_1,uVar4);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (fVar17,(float)puVar12[1] - fVar20,puVar12[2],param_1,uVar4);
                      fVar18 = pfVar11[1];
                      fVar19 = pfVar11[2];
                      pcVar9 = *(code **)(*(long *)param_1 + 0x30);
                      uVar3 = uVar4;
                    }
                    else {
                      if ((uVar10 | 4) != 6) goto LAB_011838cc;
                      fVar19 = fVar21 + pfVar11[2];
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*pfVar11,pfVar11[1] - fVar20,fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*pfVar11,fVar20 + pfVar11[1],fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*pfVar11,fVar20 + pfVar11[1],fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*puVar12,fVar20 + (float)puVar12[1],fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*puVar12,fVar20 + (float)puVar12[1],fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*puVar12,(float)puVar12[1] - fVar20,fVar19,param_1,uVar1);
                      (**(code **)(*(long *)param_1 + 0x30))
                                (*puVar12,(float)puVar12[1] - fVar20,fVar19,param_1,uVar1);
                      fVar17 = *pfVar11;
                      fVar18 = pfVar11[1];
                      pcVar9 = *(code **)(*(long *)param_1 + 0x30);
                      uVar3 = uVar1;
                    }
                    (*pcVar9)(fVar17,fVar18 - fVar20,fVar19,param_1,uVar3);
                  }
LAB_011838cc:
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar13);
                lVar8 = *(long *)(lVar7 + 8);
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(lVar8 + 0x18));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != 8);
        (**(code **)(*(long *)param_1 + 0x48))(param_1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = dtNavMesh::getMaxTiles(param_2);
    } while (iVar5 < iVar6);
  }
  return;
}

