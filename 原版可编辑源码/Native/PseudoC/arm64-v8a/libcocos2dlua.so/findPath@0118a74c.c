
/* dtNavMeshQuery::findPath(unsigned int, unsigned int, float const*, float const*, dtQueryFilter
   const*, unsigned int*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPath
          (dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3,float *param_4,
          dtQueryFilter *param_5,uint *param_6,int *param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  ulong uVar10;
  dtNode *pdVar11;
  dtNodeQueue *pdVar12;
  dtNavMeshQuery *this_00;
  dtMeshTile *pdVar13;
  dtNode *pdVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  dtNode *pdVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_f0;
  dtPoly *local_e0;
  dtMeshTile *pdStack_d8;
  dtPoly *local_d0;
  dtMeshTile *pdStack_c8;
  dtPoly *local_c0;
  dtMeshTile *local_b8;
  float local_b0 [2];
  float local_a8;
  float local_a0 [2];
  float local_98;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  local_f0 = 0x80000008;
  *param_7 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_8 != 0)) &&
     ((uVar10 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), local_f0 = 0x80000008,
      (uVar10 & 1) != 0 &&
      (uVar10 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_2), (uVar10 & 1) != 0)))) {
    if (param_1 == param_2) {
      *param_6 = param_1;
      *param_7 = 1;
      local_f0 = 0x40000000;
    }
    else {
      dtNodePool::clear(*(dtNodePool **)(this + 0x58));
      *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
      pdVar11 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
      uVar2 = *(uint *)(pdVar11 + 0x14);
      *(float *)pdVar11 = *param_3;
      *(float *)(pdVar11 + 4) = param_3[1];
      fVar24 = param_3[2];
      *(uint *)(pdVar11 + 0x14) = uVar2 & 0xff000000;
      *(float *)(pdVar11 + 8) = fVar24;
      *(undefined4 *)(pdVar11 + 0xc) = 0;
      *(float *)(pdVar11 + 0x10) =
           SQRT((*param_4 - *param_3) * (*param_4 - *param_3) +
                (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
                (param_4[2] - param_3[2]) * (param_4[2] - param_3[2])) * 0.999;
      *(uint *)(pdVar11 + 0x14) = uVar2 & 0xe3000000 | 0x4000000;
      *(uint *)(pdVar11 + 0x18) = param_1;
      pdVar12 = *(dtNodeQueue **)(this + 0x60);
      iVar9 = *(int *)(pdVar12 + 0xc);
      *(int *)(pdVar12 + 0xc) = iVar9 + 1;
      dtNodeQueue::bubbleUp(pdVar12,iVar9,pdVar11);
      pdVar12 = *(dtNodeQueue **)(this + 0x60);
      iVar9 = *(int *)(pdVar12 + 0xc);
      if (iVar9 == 0) {
        local_f0 = 0x40000000;
      }
      else {
        fVar24 = *(float *)(pdVar11 + 0x10);
        local_f0 = 0x40000000;
        pdVar18 = pdVar11;
        do {
          pdVar11 = (dtNode *)**(undefined8 **)pdVar12;
          *(int *)(pdVar12 + 0xc) = iVar9 + -1;
          dtNodeQueue::trickleDown(pdVar12,0,(dtNode *)(*(undefined8 **)pdVar12)[iVar9 + -1]);
          uVar2 = *(uint *)(pdVar11 + 0x18);
          *(uint *)(pdVar11 + 0x14) = *(uint *)(pdVar11 + 0x14) & 0xf3ffffff | 0x8000000;
          if (uVar2 == param_2) break;
          local_c0 = (dtPoly *)0x0;
          local_b8 = (dtMeshTile *)0x0;
          dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar2,&local_b8,&local_c0);
          local_d0 = (dtPoly *)0x0;
          pdStack_c8 = (dtMeshTile *)0x0;
          if ((*(uint *)(pdVar11 + 0x14) & 0xffffff) == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(uint *)(**(long **)(this + 0x58) +
                               (ulong)((*(uint *)(pdVar11 + 0x14) & 0xffffff) - 1) * 0x1c + 0x18);
            if (uVar19 != 0) {
              dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar19,&pdStack_c8,&local_d0)
              ;
            }
          }
          uVar15 = *(uint *)local_c0;
          if (uVar15 != 0xffffffff) {
            lVar16 = *(long *)(local_b8 + 0x20);
            pdVar13 = local_b8;
            pdVar14 = pdVar18;
            do {
              uVar4 = *(uint *)(lVar16 + (ulong)uVar15 * 0xc);
              pdVar18 = pdVar14;
              fVar8 = fVar24;
              if ((uVar4 != 0) && (uVar4 != uVar19)) {
                local_e0 = (dtPoly *)0x0;
                pdStack_d8 = (dtMeshTile *)0x0;
                dtNavMesh::getTileAndPolyByRefUnsafe
                          (*(dtNavMesh **)this,uVar4,&pdStack_d8,&local_e0);
                pdVar13 = local_b8;
                if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_e0 + 0x1c)) != 0) &&
                   ((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_e0 + 0x1c)) == 0)) {
                  bVar5 = *(byte *)(*(long *)(local_b8 + 0x20) + (ulong)uVar15 * 0xc + 9);
                  bVar1 = 0;
                  if (bVar5 != 0xff) {
                    bVar1 = bVar5 >> 1;
                  }
                  this_00 = (dtNavMeshQuery *)
                            dtNodePool::getNode(*(dtNodePool **)(this + 0x58),uVar4,bVar1);
                  if (this_00 == (dtNavMeshQuery *)0x0) {
                    local_f0 = local_f0 | 0x20;
                    pdVar13 = local_b8;
                  }
                  else {
                    if ((((byte)this_00[0x17] & 0x1c) == 0) &&
                       (iVar9 = getPortalPoints(this_00,uVar2,local_c0,local_b8,uVar4,local_e0,
                                                pdStack_d8,local_a0,local_b0), -1 < iVar9)) {
                      *(ulong *)this_00 =
                           CONCAT44((local_a0[1] + local_b0[1]) * 0.5,
                                    (local_a0[0] + local_b0[0]) * 0.5);
                      *(float *)(this_00 + 8) = (local_98 + local_a8) * 0.5;
                    }
                    fVar23 = *(float *)this_00;
                    fVar21 = *(float *)(this_00 + 4);
                    fVar22 = *(float *)(this_00 + 8);
                    fVar20 = *(float *)(param_5 + ((ulong)(byte)local_c0[0x1f] & 0x3f) * 4) *
                             SQRT((fVar23 - *(float *)pdVar11) * (fVar23 - *(float *)pdVar11) +
                                  (fVar21 - *(float *)(pdVar11 + 4)) *
                                  (fVar21 - *(float *)(pdVar11 + 4)) +
                                  (fVar22 - *(float *)(pdVar11 + 8)) *
                                  (fVar22 - *(float *)(pdVar11 + 8)));
                    if (uVar4 == param_2) {
                      fVar25 = 0.0;
                      fVar20 = fVar20 + *(float *)(pdVar11 + 0xc) +
                               *(float *)(param_5 + ((ulong)(byte)local_e0[0x1f] & 0x3f) * 4) *
                               SQRT((*param_4 - fVar23) * (*param_4 - fVar23) +
                                    (param_4[1] - fVar21) * (param_4[1] - fVar21) +
                                    (param_4[2] - fVar22) * (param_4[2] - fVar22));
                    }
                    else {
                      fVar20 = fVar20 + *(float *)(pdVar11 + 0xc);
                      fVar25 = SQRT((*param_4 - fVar23) * (*param_4 - fVar23) +
                                    (param_4[1] - fVar21) * (param_4[1] - fVar21) +
                                    (param_4[2] - fVar22) * (param_4[2] - fVar22)) * 0.999;
                    }
                    uVar3 = *(uint *)(this_00 + 0x14);
                    fVar21 = fVar20 + fVar25;
                    pdVar13 = local_b8;
                    if ((((uVar3 >> 0x1a & 1) == 0) || (fVar21 < *(float *)(this_00 + 0x10))) &&
                       (((uVar3 >> 0x1b & 1) == 0 || (fVar21 < *(float *)(this_00 + 0x10))))) {
                      uVar6 = ((uint)((int)pdVar11 - **(int **)(this + 0x58)) >> 2) * -0x49249249 +
                              1 & 0xffffff | uVar3 & 0xe3000000 | uVar3 & 0x14000000;
                      *(uint *)(this_00 + 0x14) = uVar6;
                      *(uint *)(this_00 + 0x18) = uVar4;
                      *(float *)(this_00 + 0xc) = fVar20;
                      *(float *)(this_00 + 0x10) = fVar21;
                      if ((uVar3 >> 0x1a & 1) == 0) {
                        *(uint *)(this_00 + 0x14) = uVar6 | 0x4000000;
                        pdVar12 = *(dtNodeQueue **)(this + 0x60);
                        uVar10 = (ulong)*(uint *)(pdVar12 + 0xc);
                        *(uint *)(pdVar12 + 0xc) = *(uint *)(pdVar12 + 0xc) + 1;
LAB_0118ac60:
                        dtNodeQueue::bubbleUp(pdVar12,(int)uVar10,(dtNode *)this_00);
                      }
                      else {
                        pdVar12 = *(dtNodeQueue **)(this + 0x60);
                        if (0 < *(int *)(pdVar12 + 0xc)) {
                          uVar10 = 0;
                          do {
                            if (*(dtNavMeshQuery **)(*(long *)pdVar12 + uVar10 * 8) == this_00)
                            goto LAB_0118ac60;
                            uVar10 = uVar10 + 1;
                          } while ((long)*(int *)(pdVar12 + 0xc) != uVar10);
                        }
                      }
                      pdVar13 = local_b8;
                      pdVar18 = (dtNode *)this_00;
                      fVar8 = fVar25;
                      if (fVar24 <= fVar25) {
                        pdVar18 = pdVar14;
                        fVar8 = fVar24;
                      }
                    }
                  }
                }
              }
              fVar24 = fVar8;
              lVar16 = *(long *)(pdVar13 + 0x20);
              uVar15 = *(uint *)(lVar16 + (ulong)uVar15 * 0xc + 4);
              pdVar14 = pdVar18;
            } while (uVar15 != 0xffffffff);
          }
          pdVar12 = *(dtNodeQueue **)(this + 0x60);
          iVar9 = *(int *)(pdVar12 + 0xc);
          pdVar11 = pdVar18;
        } while (iVar9 != 0);
      }
      uVar2 = *(uint *)(pdVar11 + 0x18);
      pdVar18 = (dtNode *)0x0;
      do {
        pdVar14 = pdVar11;
        uVar19 = *(uint *)(pdVar14 + 0x14) & 0xffffff;
        if (uVar19 == 0) {
          pdVar11 = (dtNode *)0x0;
        }
        else {
          pdVar11 = (dtNode *)(**(long **)(this + 0x58) + (ulong)(uVar19 - 1) * 0x1c);
        }
        uVar19 = 0;
        if (pdVar18 != (dtNode *)0x0) {
          uVar19 = (int)((ulong)((long)pdVar18 - **(long **)(this + 0x58)) >> 2) * -0x49249249 + 1;
        }
        *(uint *)(pdVar14 + 0x14) = *(uint *)(pdVar14 + 0x14) & 0xff000000 | uVar19 & 0xffffff;
        pdVar18 = pdVar14;
      } while (pdVar11 != (dtNode *)0x0);
      if (uVar2 != param_2) {
        local_f0 = local_f0 | 0x40;
      }
      lVar16 = 0;
      while( true ) {
        lVar17 = lVar16;
        param_6[lVar17] = *(uint *)(pdVar14 + 0x18);
        if ((long)param_8 <= lVar17 + 1) break;
        if (((*(uint *)(pdVar14 + 0x14) & 0xffffff) == 0) ||
           (pdVar14 = (dtNode *)
                      (**(long **)(this + 0x58) +
                      (ulong)((*(uint *)(pdVar14 + 0x14) & 0xffffff) - 1) * 0x1c),
           lVar16 = lVar17 + 1, pdVar14 == (dtNode *)0x0)) goto LAB_0118ad68;
      }
      local_f0 = local_f0 | 0x10;
LAB_0118ad68:
      *param_7 = (int)lVar17 + 1;
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f0;
}

