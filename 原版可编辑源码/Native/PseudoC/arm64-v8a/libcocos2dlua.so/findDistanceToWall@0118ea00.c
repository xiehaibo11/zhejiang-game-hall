
/* dtNavMeshQuery::findDistanceToWall(unsigned int, float const*, float, dtQueryFilter const*,
   float*, float*, float*) const */

uint __thiscall
dtNavMeshQuery::findDistanceToWall
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          float *param_5,float *param_6,float *param_7)

{
  ulong uVar1;
  byte bVar2;
  dtPoly dVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  dtNode *pdVar9;
  dtNodeQueue *pdVar10;
  dtNavMeshQuery *this_00;
  uint uVar11;
  dtPoly *pdVar12;
  dtMeshTile *pdVar13;
  uint uVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_ec;
  float fStack_e4;
  dtPoly *local_e0;
  dtMeshTile *pdStack_d8;
  dtPoly *local_d0;
  dtMeshTile *pdStack_c8;
  dtPoly *local_c0;
  dtMeshTile *local_b8;
  dtPoly *local_b0;
  float local_a8;
  dtMeshTile *local_a0;
  float local_98;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  local_ec = 0x80000008;
  if ((param_1 != 0) &&
     (uVar8 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar8 & 1) != 0)) {
    dtNodePool::clear(*(dtNodePool **)(this + 0x58));
    *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
    pdVar9 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
    *(float *)pdVar9 = *param_2;
    *(float *)(pdVar9 + 4) = param_2[1];
    fVar25 = param_2[2];
    *(undefined4 *)(pdVar9 + 0xc) = 0;
    *(undefined4 *)(pdVar9 + 0x10) = 0;
    *(uint *)(pdVar9 + 0x14) = *(uint *)(pdVar9 + 0x14) & 0xe3000000 | 0x4000000;
    *(uint *)(pdVar9 + 0x18) = param_1;
    *(float *)(pdVar9 + 8) = fVar25;
    pdVar10 = *(dtNodeQueue **)(this + 0x60);
    iVar7 = *(int *)(pdVar10 + 0xc);
    *(int *)(pdVar10 + 0xc) = iVar7 + 1;
    dtNodeQueue::bubbleUp(pdVar10,iVar7,pdVar9);
    pdVar10 = *(dtNodeQueue **)(this + 0x60);
    fVar25 = param_3 * param_3;
    iVar7 = *(int *)(pdVar10 + 0xc);
    if (iVar7 == 0) {
      local_ec = 0x40000000;
    }
    else {
      local_ec = 0x40000000;
      do {
        pfVar17 = (float *)**(long **)pdVar10;
        *(int *)(pdVar10 + 0xc) = iVar7 + -1;
        dtNodeQueue::trickleDown(pdVar10,0,(dtNode *)(*(long **)pdVar10)[iVar7 + -1]);
        fVar22 = pfVar17[6];
        pfVar17[5] = (float)((uint)pfVar17[5] & 0xf3ffffff | 0x8000000);
        local_c0 = (dtPoly *)0x0;
        local_b8 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,(uint)fVar22,&local_b8,&local_c0);
        local_d0 = (dtPoly *)0x0;
        pdStack_c8 = (dtMeshTile *)0x0;
        if (((uint)pfVar17[5] & 0xffffff) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(uint *)(**(long **)(this + 0x58) +
                             (ulong)(((uint)pfVar17[5] & 0xffffff) - 1) * 0x1c + 0x18);
          if (uVar19 != 0) {
            dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar19,&pdStack_c8,&local_d0);
          }
        }
        if ((byte)local_c0[0x1e] != 0) {
          uVar18 = (byte)local_c0[0x1e] - 1;
          uVar8 = 0;
          do {
            uVar4 = *(ushort *)(local_c0 + (long)(int)uVar18 * 2 + 0x10);
            if ((short)uVar4 < 0) {
              uVar14 = *(uint *)local_c0;
              if (uVar14 != 0xffffffff) {
                lVar16 = *(long *)(local_b8 + 0x20);
                do {
                  if (uVar18 == *(byte *)(lVar16 + (ulong)uVar14 * 0xc + 8)) {
                    uVar14 = *(uint *)(lVar16 + (ulong)uVar14 * 0xc);
                    if (uVar14 != 0) {
                      local_a0 = (dtMeshTile *)0x0;
                      local_b0 = (dtPoly *)0x0;
                      dtNavMesh::getTileAndPolyByRefUnsafe
                                (*(dtNavMesh **)this,uVar14,&local_a0,&local_b0);
                      pdVar12 = local_b0;
                      goto LAB_0118ec70;
                    }
                    break;
                  }
                  uVar14 = *(uint *)(lVar16 + (ulong)uVar14 * 0xc + 4);
                } while (uVar14 != 0xffffffff);
              }
LAB_0118ec8c:
              pfVar15 = (float *)(*(long *)(local_b8 + 0x18) +
                                 (ulong)*(ushort *)(local_c0 + (long)(int)uVar18 * 2 + 4) * 0xc);
              pfVar20 = (float *)(*(long *)(local_b8 + 0x18) +
                                 (ulong)*(ushort *)(local_c0 + uVar8 * 2 + 4) * 0xc);
              fVar21 = (float)dtDistancePtSegSqr2D(param_2,pfVar15,pfVar20,(float *)&local_a0);
              if (fVar21 <= fVar25) {
                *param_6 = *pfVar15 + (*pfVar20 - *pfVar15) * local_a0._0_4_;
                param_6[1] = pfVar15[1] + local_a0._0_4_ * (pfVar20[1] - pfVar15[1]);
                param_6[2] = pfVar15[2] + local_a0._0_4_ * (pfVar20[2] - pfVar15[2]);
                fVar25 = fVar21;
              }
            }
            else {
              if (uVar4 == 0) goto LAB_0118ec8c;
              dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_b8);
              pdVar12 = (dtPoly *)(*(long *)(local_b8 + 0x10) + (ulong)(uVar4 - 1) * 0x20);
LAB_0118ec70:
              if (((*(ushort *)(param_4 + 0x100) & *(ushort *)(pdVar12 + 0x1c)) == 0) ||
                 ((*(ushort *)(param_4 + 0x102) & *(ushort *)(pdVar12 + 0x1c)) != 0))
              goto LAB_0118ec8c;
            }
            uVar1 = uVar8 + 1;
            uVar18 = (uint)uVar8;
            uVar8 = uVar1;
          } while (uVar1 < (byte)local_c0[0x1e]);
        }
        uVar18 = *(uint *)local_c0;
        if (uVar18 != 0xffffffff) {
          lVar16 = *(long *)(local_b8 + 0x20);
          pdVar13 = local_b8;
          do {
            uVar14 = *(uint *)(lVar16 + (ulong)uVar18 * 0xc);
            if ((uVar14 != 0) && (uVar14 != uVar19)) {
              local_e0 = (dtPoly *)0x0;
              pdStack_d8 = (dtMeshTile *)0x0;
              dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar14,&pdStack_d8,&local_e0)
              ;
              pdVar13 = local_b8;
              if (((byte)local_e0[0x1f] & 0xc0) != 0x40) {
                bVar2 = *(byte *)(lVar16 + (ulong)uVar18 * 0xc + 8);
                dVar3 = local_c0[0x1e];
                uVar11 = bVar2 + 1;
                uVar5 = 0;
                if ((byte)dVar3 != 0) {
                  uVar5 = uVar11 / (byte)dVar3;
                }
                fVar21 = (float)dtDistancePtSegSqr2D
                                          (param_2,(float *)(*(long *)(local_b8 + 0x18) +
                                                            (ulong)*(ushort *)
                                                                    (local_c0 + (ulong)bVar2 * 2 + 4
                                                                    ) * 0xc),
                                           (float *)(*(long *)(local_b8 + 0x18) +
                                                    (ulong)*(ushort *)
                                                            (local_c0 +
                                                            (ulong)(uVar11 - uVar5 * (byte)dVar3) *
                                                            2 + 4) * 0xc),&fStack_e4);
                pdVar13 = local_b8;
                if (((fVar21 <= fVar25) &&
                    ((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_e0 + 0x1c)) != 0)) &&
                   ((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_e0 + 0x1c)) == 0)) {
                  this_00 = (dtNavMeshQuery *)
                            dtNodePool::getNode(*(dtNodePool **)(this + 0x58),uVar14,'\0');
                  pdVar13 = local_b8;
                  if (this_00 == (dtNavMeshQuery *)0x0) {
                    local_ec = local_ec | 0x20;
                  }
                  else {
                    uVar11 = *(uint *)(this_00 + 0x14);
                    if ((uVar11 >> 0x1b & 1) == 0) {
                      if ((uVar11 & 0x1c000000) == 0) {
                        iVar7 = getPortalPoints(this_00,(uint)fVar22,local_c0,local_b8,uVar14,
                                                local_e0,pdStack_d8,(float *)&local_a0,
                                                (float *)&local_b0);
                        if (-1 < iVar7) {
                          *(ulong *)this_00 =
                               CONCAT44(((float)((ulong)local_a0 >> 0x20) +
                                        (float)((ulong)local_b0 >> 0x20)) * 0.5,
                                        (SUB84(local_a0,0) + SUB84(local_b0,0)) * 0.5);
                          *(float *)(this_00 + 8) = (local_98 + local_a8) * 0.5;
                        }
                        uVar11 = *(uint *)(this_00 + 0x14);
                      }
                      fVar21 = pfVar17[4] +
                               SQRT((*(float *)this_00 - *pfVar17) * (*(float *)this_00 - *pfVar17)
                                    + (*(float *)(this_00 + 4) - pfVar17[1]) *
                                      (*(float *)(this_00 + 4) - pfVar17[1]) +
                                    (*(float *)(this_00 + 8) - pfVar17[2]) *
                                    (*(float *)(this_00 + 8) - pfVar17[2]));
                      pdVar13 = local_b8;
                      if (((uVar11 >> 0x1a & 1) == 0) || (fVar21 < *(float *)(this_00 + 0x10))) {
                        *(uint *)(this_00 + 0x14) = uVar11 & 0xf7ffffff;
                        *(uint *)(this_00 + 0x18) = uVar14;
                        iVar7 = **(int **)(this + 0x58);
                        *(float *)(this_00 + 0x10) = fVar21;
                        uVar14 = ((uint)((int)pfVar17 - iVar7) >> 2) * -0x49249249 + 1 & 0xffffff;
                        *(uint *)(this_00 + 0x14) = uVar11 & 0xf7000000 | uVar14;
                        if ((uVar11 >> 0x1a & 1) == 0) {
                          *(uint *)(this_00 + 0x14) =
                               uVar11 & 0x10000000 | uVar11 & 0xe3000000 | uVar14 | 0x4000000;
                          pdVar10 = *(dtNodeQueue **)(this + 0x60);
                          uVar8 = (ulong)*(uint *)(pdVar10 + 0xc);
                          *(uint *)(pdVar10 + 0xc) = *(uint *)(pdVar10 + 0xc) + 1;
LAB_0118ef6c:
                          dtNodeQueue::bubbleUp(pdVar10,(int)uVar8,(dtNode *)this_00);
                          pdVar13 = local_b8;
                        }
                        else {
                          pdVar10 = *(dtNodeQueue **)(this + 0x60);
                          if (0 < *(int *)(pdVar10 + 0xc)) {
                            uVar8 = 0;
                            do {
                              if (*(dtNavMeshQuery **)(*(long *)pdVar10 + uVar8 * 8) == this_00)
                              goto LAB_0118ef6c;
                              uVar8 = uVar8 + 1;
                            } while ((long)*(int *)(pdVar10 + 0xc) != uVar8);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar16 = *(long *)(pdVar13 + 0x20);
            uVar18 = *(uint *)(lVar16 + (ulong)uVar18 * 0xc + 4);
          } while (uVar18 != 0xffffffff);
        }
        pdVar10 = *(dtNodeQueue **)(this + 0x60);
        iVar7 = *(int *)(pdVar10 + 0xc);
      } while (iVar7 != 0);
    }
    fVar22 = *param_2 - *param_6;
    *param_7 = fVar22;
    fVar21 = param_2[1] - param_6[1];
    param_7[1] = fVar21;
    fVar23 = param_2[2] - param_6[2];
    fVar24 = 1.0 / SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
    *param_7 = fVar22 * fVar24;
    param_7[1] = fVar21 * fVar24;
    param_7[2] = fVar23 * fVar24;
    *param_5 = SQRT(fVar25);
  }
  if (*(long *)(lVar6 + 0x28) == local_90) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

