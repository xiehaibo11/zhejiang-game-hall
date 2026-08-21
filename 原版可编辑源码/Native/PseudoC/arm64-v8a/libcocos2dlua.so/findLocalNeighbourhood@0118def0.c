
/* dtNavMeshQuery::findLocalNeighbourhood(unsigned int, float const*, float, dtQueryFilter const*,
   unsigned int*, unsigned int*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findLocalNeighbourhood
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,int *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  dtPoly dVar4;
  dtPoly dVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  dtNavMeshQuery *this_00;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  dtPoly *pdVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  float fVar21;
  uint local_32c;
  dtPoly *local_2e0;
  dtMeshTile *local_2d8;
  float fStack_2cc;
  dtPoly *local_2c8;
  dtMeshTile *local_2c0;
  dtPoly *local_2b8;
  dtMeshTile *local_2b0;
  float afStack_2a8 [3];
  float afStack_29c [3];
  float local_290 [2];
  undefined4 auStack_288 [16];
  float local_248 [2];
  undefined4 auStack_240 [16];
  long local_200 [48];
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  local_32c = 0x80000008;
  *param_7 = 0;
  if ((param_1 != 0) &&
     (uVar9 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar9 & 1) != 0)) {
    dtNodePool::clear(*(dtNodePool **)(this + 0x50));
    local_200[0] = dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1,'\0');
    *(uint *)(local_200[0] + 0x14) = *(uint *)(local_200[0] + 0x14) & 0xe3000000 | 0x8000000;
    *(uint *)(local_200[0] + 0x18) = param_1;
    if (param_8 < 1) {
      uVar1 = 0;
      local_32c = 0x40000010;
    }
    else {
      *param_5 = param_1;
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      local_32c = 0x40000000;
      uVar1 = 1;
    }
    uVar20 = 1;
    do {
      lVar7 = local_200[0];
      uVar20 = uVar20 - 1;
      if (0 < (int)uVar20) {
        uVar9 = (ulong)uVar20;
        if (uVar20 < 4) {
          uVar15 = 0;
        }
        else {
          uVar15 = uVar9 & 0xfffffffc;
          uVar10 = uVar15;
          plVar17 = local_200 + 2;
          do {
            lVar13 = plVar17[-1];
            lVar14 = plVar17[1];
            uVar10 = uVar10 - 4;
            plVar17[-1] = *plVar17;
            plVar17[-2] = lVar13;
            plVar17[1] = plVar17[2];
            *plVar17 = lVar14;
            plVar17 = plVar17 + 4;
          } while (uVar10 != 0);
          if (uVar15 == uVar9) goto LAB_0118e084;
        }
        lVar13 = uVar9 - uVar15;
        plVar17 = local_200 + uVar15 + 1;
        do {
          lVar13 = lVar13 + -1;
          plVar17[-1] = *plVar17;
          plVar17 = plVar17 + 1;
        } while (lVar13 != 0);
      }
LAB_0118e084:
      uVar2 = *(uint *)(local_200[0] + 0x18);
      local_2b8 = (dtPoly *)0x0;
      local_2b0 = (dtMeshTile *)0x0;
      dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar2,&local_2b0,&local_2b8);
      uVar11 = *(uint *)local_2b8;
      if (uVar11 != 0xffffffff) {
        lVar13 = *(long *)(local_2b0 + 0x20);
        do {
          uVar3 = *(uint *)(lVar13 + (ulong)uVar11 * 0xc);
          if (((uVar3 != 0) &&
              (lVar13 = dtNodePool::getNode(*(dtNodePool **)(this + 0x50),uVar3,'\0'), lVar13 != 0))
             && ((*(byte *)(lVar13 + 0x17) >> 3 & 1) == 0)) {
            local_2c8 = (dtPoly *)0x0;
            local_2c0 = (dtMeshTile *)0x0;
            this_00 = (dtNavMeshQuery *)
                      dtNavMesh::getTileAndPolyByRefUnsafe
                                (*(dtNavMesh **)this,uVar3,&local_2c0,&local_2c8);
            if (((((byte)local_2c8[0x1f] & 0xc0) != 0x40) &&
                ((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_2c8 + 0x1c)) != 0)) &&
               (((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_2c8 + 0x1c)) == 0 &&
                ((iVar8 = getPortalPoints(this_00,uVar2,local_2b8,local_2b0,uVar3,local_2c8,
                                          local_2c0,afStack_29c,afStack_2a8), iVar8 != 0 &&
                 (fVar21 = (float)dtDistancePtSegSqr2D(param_2,afStack_29c,afStack_2a8,&fStack_2cc),
                 fVar21 <= param_3 * param_3)))))) {
              uVar12 = *(uint *)(lVar13 + 0x14);
              *(uint *)(lVar13 + 0x14) = uVar12 | 0x8000000;
              *(uint *)(lVar13 + 0x14) =
                   uVar12 & 0xff000000 | 0x8000000 |
                   ((uint)((int)lVar7 - **(int **)(this + 0x50)) >> 2) * -0x49249249 + 1 & 0xffffff;
              dVar4 = local_2c8[0x1e];
              uVar9 = (ulong)(byte)dVar4;
              if ((byte)dVar4 != 0) {
                lVar14 = *(long *)(local_2c0 + 0x18);
                pdVar16 = local_2c8 + 4;
                puVar18 = auStack_240;
                do {
                  uVar9 = uVar9 - 1;
                  puVar19 = (undefined4 *)(lVar14 + (ulong)*(ushort *)pdVar16 * 0xc);
                  puVar18[-2] = *puVar19;
                  puVar18[-1] = puVar19[1];
                  *puVar18 = puVar19[2];
                  pdVar16 = pdVar16 + 2;
                  puVar18 = puVar18 + 3;
                } while (uVar9 != 0);
              }
              if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                  uVar12 = *(uint *)local_2b8;
                  if (uVar12 != 0xffffffff) {
                    do {
                      if (*(uint *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar12 * 0xc) ==
                          param_5[uVar9]) goto LAB_0118e248;
                      uVar12 = *(uint *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar12 * 0xc + 4);
                    } while (uVar12 != 0xffffffff);
                  }
                  local_2e0 = (dtPoly *)0x0;
                  local_2d8 = (dtMeshTile *)0x0;
                  dtNavMesh::getTileAndPolyByRefUnsafe
                            (*(dtNavMesh **)this,param_5[uVar9],&local_2d8,&local_2e0);
                  dVar5 = local_2e0[0x1e];
                  uVar10 = (ulong)(byte)dVar5;
                  if ((byte)dVar5 != 0) {
                    lVar14 = *(long *)(local_2d8 + 0x18);
                    pdVar16 = local_2e0 + 4;
                    puVar18 = auStack_288;
                    do {
                      uVar10 = uVar10 - 1;
                      puVar19 = (undefined4 *)(lVar14 + (ulong)*(ushort *)pdVar16 * 0xc);
                      puVar18[-2] = *puVar19;
                      puVar18[-1] = puVar19[1];
                      *puVar18 = puVar19[2];
                      pdVar16 = pdVar16 + 2;
                      puVar18 = puVar18 + 3;
                    } while (uVar10 != 0);
                  }
                  uVar10 = dtOverlapPolyPoly2D(local_248,(uint)(byte)dVar4,local_290,
                                               (uint)(byte)dVar5);
                  if ((uVar10 & 1) != 0) goto LAB_0118e0c4;
LAB_0118e248:
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar1);
              }
              if ((int)uVar1 < param_8) {
                param_5[(int)uVar1] = uVar3;
                if (param_6 != (uint *)0x0) {
                  param_6[(int)uVar1] = uVar2;
                }
                uVar1 = uVar1 + 1;
              }
              else {
                local_32c = local_32c | 0x10;
              }
              if ((int)uVar20 < 0x30) {
                local_200[(int)uVar20] = lVar13;
                uVar20 = uVar20 + 1;
              }
            }
          }
LAB_0118e0c4:
          lVar13 = *(long *)(local_2b0 + 0x20);
          uVar11 = *(uint *)(lVar13 + (ulong)uVar11 * 0xc + 4);
        } while (uVar11 != 0xffffffff);
      }
    } while (uVar20 != 0);
    *param_7 = uVar1;
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return local_32c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

