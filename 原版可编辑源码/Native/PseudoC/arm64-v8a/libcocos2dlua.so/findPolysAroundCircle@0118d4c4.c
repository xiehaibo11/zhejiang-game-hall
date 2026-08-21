
/* dtNavMeshQuery::findPolysAroundCircle(unsigned int, float const*, float, dtQueryFilter const*,
   unsigned int*, unsigned int*, float*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPolysAroundCircle
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,float *param_7,int *param_8,int param_9)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  dtNode *pdVar7;
  dtNodeQueue *pdVar8;
  dtNavMeshQuery *this_00;
  dtMeshTile *pdVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_cc;
  uint local_c8;
  float fStack_c4;
  dtPoly *local_c0;
  dtMeshTile *local_b8;
  dtPoly *local_b0;
  dtMeshTile *pdStack_a8;
  dtPoly *local_a0;
  dtMeshTile *local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_c8 = 0x80000008;
  *param_8 = 0;
  if ((param_1 != 0) &&
     (uVar6 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar6 & 1) != 0)) {
    dtNodePool::clear(*(dtNodePool **)(this + 0x58));
    *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
    pdVar7 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
    *(float *)pdVar7 = *param_2;
    *(float *)(pdVar7 + 4) = param_2[1];
    fVar1 = param_2[2];
    *(undefined4 *)(pdVar7 + 0xc) = 0;
    *(undefined4 *)(pdVar7 + 0x10) = 0;
    *(uint *)(pdVar7 + 0x14) = *(uint *)(pdVar7 + 0x14) & 0xe3000000 | 0x4000000;
    *(uint *)(pdVar7 + 0x18) = param_1;
    *(float *)(pdVar7 + 8) = fVar1;
    pdVar8 = *(dtNodeQueue **)(this + 0x60);
    iVar5 = *(int *)(pdVar8 + 0xc);
    *(int *)(pdVar8 + 0xc) = iVar5 + 1;
    dtNodeQueue::bubbleUp(pdVar8,iVar5,pdVar7);
    if (param_9 < 1) {
      local_cc = 0;
      local_c8 = 0x40000010;
    }
    else {
      if (param_5 != (uint *)0x0) {
        *param_5 = *(uint *)(pdVar7 + 0x18);
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      if (param_7 != (float *)0x0) {
        *param_7 = 0.0;
      }
      local_c8 = 0x40000000;
      local_cc = 1;
    }
    pdVar8 = *(dtNodeQueue **)(this + 0x60);
    iVar5 = *(int *)(pdVar8 + 0xc);
    if (iVar5 != 0) {
      do {
        pfVar13 = (float *)**(long **)pdVar8;
        *(int *)(pdVar8 + 0xc) = iVar5 + -1;
        dtNodeQueue::trickleDown(pdVar8,0,(dtNode *)(*(long **)pdVar8)[iVar5 + -1]);
        fVar1 = pfVar13[6];
        pfVar13[5] = (float)((uint)pfVar13[5] & 0xf3ffffff | 0x8000000);
        local_a0 = (dtPoly *)0x0;
        local_98 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,(uint)fVar1,&local_98,&local_a0);
        local_b0 = (dtPoly *)0x0;
        pdStack_a8 = (dtMeshTile *)0x0;
        if (((uint)pfVar13[5] & 0xffffff) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(**(long **)(this + 0x58) +
                             (ulong)(((uint)pfVar13[5] & 0xffffff) - 1) * 0x1c + 0x18);
          if (uVar14 != 0) {
            dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar14,&pdStack_a8,&local_b0);
          }
        }
        uVar10 = *(uint *)local_a0;
        if (uVar10 != 0xffffffff) {
          lVar12 = *(long *)(local_98 + 0x20);
          pdVar9 = local_98;
          do {
            uVar3 = *(uint *)(lVar12 + (ulong)uVar10 * 0xc);
            if ((uVar3 != 0) && (uVar3 != uVar14)) {
              local_c0 = (dtPoly *)0x0;
              local_b8 = (dtMeshTile *)0x0;
              this_00 = (dtNavMeshQuery *)
                        dtNavMesh::getTileAndPolyByRefUnsafe
                                  (*(dtNavMesh **)this,uVar3,&local_b8,&local_c0);
              pdVar9 = local_98;
              if (((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_c0 + 0x1c)) != 0) &&
                 ((((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_c0 + 0x1c)) == 0 &&
                   (iVar5 = getPortalPoints(this_00,(uint)fVar1,local_a0,local_98,uVar3,local_c0,
                                            local_b8,&local_84,&local_90), pdVar9 = local_98,
                   iVar5 != 0)) &&
                  (fVar15 = (float)dtDistancePtSegSqr2D(param_2,&local_84,&local_90,&fStack_c4),
                  pdVar9 = local_98, fVar15 <= param_3 * param_3)))) {
                pdVar7 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),uVar3,'\0');
                pdVar9 = local_98;
                if (pdVar7 == (dtNode *)0x0) {
                  local_c8 = local_c8 | 0x20;
                }
                else {
                  uVar2 = *(uint *)(pdVar7 + 0x14);
                  if ((uVar2 >> 0x1b & 1) == 0) {
                    if ((uVar2 & 0x1c000000) == 0) {
                      fVar15 = local_84 + (local_90 - local_84) * 0.5;
                      *(float *)pdVar7 = fVar15;
                      fVar16 = local_80 + (local_8c - local_80) * 0.5;
                      *(float *)(pdVar7 + 4) = fVar16;
                      fVar17 = local_7c + (local_88 - local_7c) * 0.5;
                      *(float *)(pdVar7 + 8) = fVar17;
                    }
                    else {
                      fVar15 = *(float *)pdVar7;
                      fVar16 = *(float *)(pdVar7 + 4);
                      fVar17 = *(float *)(pdVar7 + 8);
                    }
                    fVar15 = pfVar13[4] +
                             SQRT((fVar15 - *pfVar13) * (fVar15 - *pfVar13) +
                                  (fVar16 - pfVar13[1]) * (fVar16 - pfVar13[1]) +
                                  (fVar17 - pfVar13[2]) * (fVar17 - pfVar13[2]));
                    if (((uVar2 >> 0x1a & 1) == 0) || (fVar15 < *(float *)(pdVar7 + 0x10))) {
                      *(uint *)(pdVar7 + 0x14) = uVar2 & 0xf7ffffff;
                      *(uint *)(pdVar7 + 0x18) = uVar3;
                      iVar5 = **(int **)(this + 0x58);
                      *(float *)(pdVar7 + 0x10) = fVar15;
                      uVar11 = uVar2 & 0xf7000000 |
                               ((uint)((int)pfVar13 - iVar5) >> 2) * -0x49249249 + 1 & 0xffffff;
                      *(uint *)(pdVar7 + 0x14) = uVar11;
                      if ((uVar2 >> 0x1a & 1) == 0) {
                        if (local_cc < param_9) {
                          if (param_5 != (uint *)0x0) {
                            param_5[local_cc] = uVar3;
                          }
                          if (param_6 != (uint *)0x0) {
                            param_6[local_cc] =
                                 *(uint *)(**(long **)(this + 0x58) +
                                           (ulong)((*(uint *)(pdVar7 + 0x14) & 0xffffff) - 1) * 0x1c
                                          + 0x18);
                          }
                          if (param_7 != (float *)0x0) {
                            param_7[local_cc] = fVar15;
                          }
                          uVar11 = *(uint *)(pdVar7 + 0x14);
                          local_cc = local_cc + 1;
                        }
                        else {
                          local_c8 = local_c8 | 0x10;
                        }
                        *(uint *)(pdVar7 + 0x14) = uVar11 & 0xe3ffffff | 0x4000000;
                        pdVar8 = *(dtNodeQueue **)(this + 0x60);
                        uVar6 = (ulong)*(uint *)(pdVar8 + 0xc);
                        *(uint *)(pdVar8 + 0xc) = *(uint *)(pdVar8 + 0xc) + 1;
LAB_0118d94c:
                        dtNodeQueue::bubbleUp(pdVar8,(int)uVar6,pdVar7);
                        pdVar9 = local_98;
                      }
                      else {
                        pdVar8 = *(dtNodeQueue **)(this + 0x60);
                        if (0 < *(int *)(pdVar8 + 0xc)) {
                          uVar6 = 0;
                          do {
                            if (*(dtNode **)(*(long *)pdVar8 + uVar6 * 8) == pdVar7)
                            goto LAB_0118d94c;
                            uVar6 = uVar6 + 1;
                          } while ((long)*(int *)(pdVar8 + 0xc) != uVar6);
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar12 = *(long *)(pdVar9 + 0x20);
            uVar10 = *(uint *)(lVar12 + (ulong)uVar10 * 0xc + 4);
          } while (uVar10 != 0xffffffff);
        }
        pdVar8 = *(dtNodeQueue **)(this + 0x60);
        iVar5 = *(int *)(pdVar8 + 0xc);
      } while (iVar5 != 0);
    }
    *param_8 = local_cc;
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

