
/* dtNavMeshQuery::updateSlicedFindPath(int, int*) */

void __thiscall dtNavMeshQuery::updateSlicedFindPath(dtNavMeshQuery *this,int param_1,int *param_2)

{
  float fVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  dtNodeQueue *pdVar7;
  ulong uVar8;
  dtNavMeshQuery *this_00;
  dtMeshTile *pdVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  uint local_12c;
  uint uStack_10c;
  dtPoly *local_108;
  dtMeshTile *pdStack_100;
  dtPoly *local_f8;
  dtMeshTile *pdStack_f0;
  dtPoly *local_e8;
  dtMeshTile *local_e0;
  float local_d8 [7];
  undefined4 local_bc;
  float local_b8;
  float local_b0 [2];
  float local_a8;
  float local_a0 [2];
  float local_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  uVar10 = *(uint *)(this + 8);
  if ((*(uint *)(this + 8) >> 0x1d & 1) != 0) {
    uVar6 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,*(uint *)(this + 0x1c));
    if (((uVar6 & 1) == 0) ||
       (uVar6 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,*(uint *)(this + 0x20)),
       (uVar6 & 1) == 0)) {
      *(undefined4 *)(this + 8) = 0x80000000;
      uVar10 = 0x80000000;
    }
    else {
      iVar17 = 0;
      local_bc = 0;
      do {
        pdVar7 = *(dtNodeQueue **)(this + 0x60);
        iVar5 = *(int *)(pdVar7 + 0xc);
        if (param_1 <= iVar17) {
          if (iVar5 == 0) goto LAB_0118b5d8;
LAB_0118b5e0:
          if (param_2 != (int *)0x0) {
LAB_0118b614:
            *param_2 = iVar17;
          }
          uVar10 = *(uint *)(this + 8);
          break;
        }
        if (iVar5 == 0) {
LAB_0118b5d8:
          this[0xb] = (dtNavMeshQuery)0x40;
          goto LAB_0118b5e0;
        }
        iVar17 = iVar17 + 1;
        pfVar14 = (float *)**(long **)pdVar7;
        *(int *)(pdVar7 + 0xc) = iVar5 + -1;
        dtNodeQueue::trickleDown(pdVar7,0,(dtNode *)(*(long **)pdVar7)[iVar5 + -1]);
        fVar1 = pfVar14[6];
        pfVar14[5] = (float)((uint)pfVar14[5] & 0xf3ffffff | 0x8000000);
        if (fVar1 == *(float *)(this + 0x20)) {
          *(float **)(this + 0x10) = pfVar14;
          uVar10 = *(uint *)(this + 8) & 0xffffff | 0x40000000;
          *(uint *)(this + 8) = uVar10;
          if (param_2 != (int *)0x0) goto LAB_0118b614;
          break;
        }
        local_e8 = (dtPoly *)0x0;
        local_e0 = (dtMeshTile *)0x0;
        iVar5 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,(uint)fVar1,&local_e0,&local_e8);
        if (iVar5 < 0) {
          *(undefined4 *)(this + 8) = 0x80000000;
          if (param_2 != (int *)0x0) goto LAB_0118b614;
          uVar10 = 0x80000000;
          break;
        }
        local_f8 = (dtPoly *)0x0;
        pdStack_f0 = (dtMeshTile *)0x0;
        if (((uint)pfVar14[5] & 0xffffff) == 0) {
          pfVar12 = (float *)0x0;
          bVar4 = false;
          fVar16 = 0.0;
LAB_0118b224:
          uVar10 = *(uint *)local_e8;
          if (uVar10 != 0xffffffff) {
            lVar15 = *(long *)(local_e0 + 0x20);
            pdVar9 = local_e0;
            do {
              fVar19 = *(float *)(lVar15 + (ulong)uVar10 * 0xc);
              if ((fVar19 != 0.0) && (fVar19 != fVar16)) {
                local_108 = (dtPoly *)0x0;
                pdStack_100 = (dtMeshTile *)0x0;
                dtNavMesh::getTileAndPolyByRefUnsafe
                          (*(dtNavMesh **)this,(uint)fVar19,&pdStack_100,&local_108);
                pdVar9 = local_e0;
                if (((*(ushort *)(*(long *)(this + 0x40) + 0x100) & *(ushort *)(local_108 + 0x1c))
                     != 0) &&
                   ((*(ushort *)(*(long *)(this + 0x40) + 0x102) & *(ushort *)(local_108 + 0x1c)) ==
                    0)) {
                  this_00 = (dtNavMeshQuery *)
                            dtNodePool::getNode(*(dtNodePool **)(this + 0x58),(uint)fVar19,'\0');
                  pdVar9 = local_e0;
                  if (this_00 == (dtNavMeshQuery *)0x0) {
                    *(uint *)(this + 8) = *(uint *)(this + 8) | 0x20;
                  }
                  else {
                    uVar11 = *(uint *)(this_00 + 0x14) & 0xffffff;
                    if ((uVar11 == 0) || (uVar11 != ((uint)pfVar14[5] & 0xffffff))) {
                      if (((*(uint *)(this_00 + 0x14) & 0x1c000000) == 0) &&
                         (iVar5 = getPortalPoints(this_00,(uint)fVar1,local_e8,local_e0,(uint)fVar19
                                                  ,local_108,pdStack_100,local_a0,local_b0),
                         -1 < iVar5)) {
                        *(ulong *)this_00 =
                             CONCAT44((local_a0[1] + local_b0[1]) * 0.5,
                                      (local_a0[0] + local_b0[0]) * 0.5);
                        *(float *)(this_00 + 8) = (local_98 + local_a8) * 0.5;
                      }
                      local_b8 = 0.0;
                      local_d8[0] = 0.0;
                      if ((!bVar4) ||
                         (raycast((uint)this,(float *)(ulong)(uint)fVar16,pfVar12,
                                  (dtQueryFilter *)this_00,(uint)*(undefined8 *)(this + 0x40),
                                  (dtRaycastHit *)0x1,(uint)local_d8), local_d8[0] < 1.0)) {
                        bVar3 = false;
                        fVar18 = pfVar14[3] +
                                 *(float *)(*(long *)(this + 0x40) +
                                           ((ulong)(byte)local_e8[0x1f] & 0x3f) * 4) *
                                 SQRT((*(float *)this_00 - *pfVar14) *
                                      (*(float *)this_00 - *pfVar14) +
                                      (*(float *)(this_00 + 4) - pfVar14[1]) *
                                      (*(float *)(this_00 + 4) - pfVar14[1]) +
                                      (*(float *)(this_00 + 8) - pfVar14[2]) *
                                      (*(float *)(this_00 + 8) - pfVar14[2]));
                      }
                      else {
                        bVar3 = true;
                        fVar18 = pfVar12[3] + local_b8;
                      }
                      if (fVar19 == *(float *)(this + 0x20)) {
                        fVar18 = fVar18 + *(float *)(*(long *)(this + 0x40) +
                                                    ((ulong)(byte)local_108[0x1f] & 0x3f) * 4) *
                                          SQRT((*(float *)(this + 0x30) - *(float *)this_00) *
                                               (*(float *)(this + 0x30) - *(float *)this_00) +
                                               (*(float *)(this + 0x34) - *(float *)(this_00 + 4)) *
                                               (*(float *)(this + 0x34) - *(float *)(this_00 + 4)) +
                                               (*(float *)(this + 0x38) - *(float *)(this_00 + 8)) *
                                               (*(float *)(this + 0x38) - *(float *)(this_00 + 8)));
                        fVar22 = 0.0;
                      }
                      else {
                        fVar22 = SQRT((*(float *)(this + 0x30) - *(float *)this_00) *
                                      (*(float *)(this + 0x30) - *(float *)this_00) +
                                      (*(float *)(this + 0x34) - *(float *)(this_00 + 4)) *
                                      (*(float *)(this + 0x34) - *(float *)(this_00 + 4)) +
                                      (*(float *)(this + 0x38) - *(float *)(this_00 + 8)) *
                                      (*(float *)(this + 0x38) - *(float *)(this_00 + 8))) * 0.999;
                      }
                      uVar11 = *(uint *)(this_00 + 0x14);
                      fVar20 = fVar18 + fVar22;
                      pdVar9 = local_e0;
                      if ((((uVar11 >> 0x1a & 1) == 0) || (fVar20 < *(float *)(this_00 + 0x10))) &&
                         (((uVar11 >> 0x1b & 1) == 0 || (fVar20 < *(float *)(this_00 + 0x10))))) {
                        if (bVar3) {
                          uVar13 = (uint)pfVar14[5] & 0xffffff;
                        }
                        else {
                          uVar13 = (int)((ulong)((long)pfVar14 - **(long **)(this + 0x58)) >> 2) *
                                   -0x49249249 + 1;
                        }
                        uVar11 = uVar11 & 0xe3000000 | uVar13 & 0xffffff | uVar11 & 0x4000000;
                        *(uint *)(this_00 + 0x14) = uVar11;
                        *(float *)(this_00 + 0x18) = fVar19;
                        *(float *)(this_00 + 0xc) = fVar18;
                        *(float *)(this_00 + 0x10) = fVar20;
                        if (bVar3) {
                          uVar11 = uVar11 | 0x10000000;
                          *(uint *)(this_00 + 0x14) = uVar11;
                        }
                        if ((uVar11 >> 0x1a & 1) == 0) {
                          *(uint *)(this_00 + 0x14) = uVar11 | 0x4000000;
                          pdVar7 = *(dtNodeQueue **)(this + 0x60);
                          uVar6 = (ulong)*(uint *)(pdVar7 + 0xc);
                          *(uint *)(pdVar7 + 0xc) = *(uint *)(pdVar7 + 0xc) + 1;
LAB_0118b568:
                          dtNodeQueue::bubbleUp(pdVar7,(int)uVar6,(dtNode *)this_00);
                        }
                        else {
                          pdVar7 = *(dtNodeQueue **)(this + 0x60);
                          if (0 < *(int *)(pdVar7 + 0xc)) {
                            uVar6 = 0;
                            do {
                              if (*(dtNavMeshQuery **)(*(long *)pdVar7 + uVar6 * 8) == this_00)
                              goto LAB_0118b568;
                              uVar6 = uVar6 + 1;
                            } while ((long)*(int *)(pdVar7 + 0xc) != uVar6);
                          }
                        }
                        pdVar9 = local_e0;
                        if (fVar22 < *(float *)(this + 0x18)) {
                          *(float *)(this + 0x18) = fVar22;
                          *(dtNavMeshQuery **)(this + 0x10) = this_00;
                        }
                      }
                    }
                  }
                }
              }
              lVar15 = *(long *)(pdVar9 + 0x20);
              uVar10 = *(uint *)(lVar15 + (ulong)uVar10 * 0xc + 4);
            } while (uVar10 != 0xffffffff);
          }
          bVar4 = true;
        }
        else {
          uVar6 = (ulong)(((uint)pfVar14[5] & 0xffffff) - 1);
          lVar15 = **(long **)(this + 0x58);
          pfVar12 = (float *)(lVar15 + uVar6 * 0x1c);
          fVar16 = pfVar12[6];
          if (((uint)pfVar12[5] & 0xffffff) == 0) {
            uStack_10c = 0;
            if (fVar16 != 0.0) goto LAB_0118b194;
LAB_0118b21c:
            bVar4 = false;
            goto LAB_0118b224;
          }
          uStack_10c = *(uint *)(lVar15 + (ulong)(((uint)pfVar12[5] & 0xffffff) - 1) * 0x1c + 0x18);
          if (fVar16 == 0.0) goto LAB_0118b21c;
LAB_0118b194:
          iVar5 = dtNavMesh::getTileAndPolyByRef
                            (*(dtNavMesh **)this,(uint)fVar16,&pdStack_f0,&local_f8);
          if ((-1 < iVar5) &&
             ((uStack_10c == 0 ||
              (uVar8 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,uStack_10c), (uVar8 & 1) != 0))
             )) {
            if ((((byte)this[0x48] >> 1 & 1) != 0) &&
               (uVar21 = *(undefined8 *)(lVar15 + uVar6 * 0x1c + 4),
               fVar19 = (float)*(undefined8 *)(pfVar14 + 1) - (float)uVar21,
               fVar18 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20) -
                        (float)((ulong)uVar21 >> 0x20),
               (*pfVar14 - *pfVar12) * (*pfVar14 - *pfVar12) + fVar19 * fVar19 + fVar18 * fVar18 <
               *(float *)(this + 0x4c))) {
              bVar4 = true;
              goto LAB_0118b224;
            }
            goto LAB_0118b21c;
          }
          *(undefined4 *)(this + 8) = 0x80000000;
          if (param_2 == (int *)0x0) {
            local_12c = 0x80000000;
          }
          else {
            *param_2 = iVar17;
            local_12c = *(uint *)(this + 8);
          }
          bVar4 = false;
        }
        uVar10 = local_12c;
      } while (bVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

