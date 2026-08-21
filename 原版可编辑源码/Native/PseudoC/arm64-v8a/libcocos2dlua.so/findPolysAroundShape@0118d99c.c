
/* dtNavMeshQuery::findPolysAroundShape(unsigned int, float const*, int, dtQueryFilter const*,
   unsigned int*, unsigned int*, float*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPolysAroundShape
          (dtNavMeshQuery *this,uint param_1,float *param_2,int param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,float *param_7,int *param_8,int param_9)

{
  ulong uVar1;
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
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  int local_f0;
  uint local_ec;
  int iStack_e8;
  int iStack_e4;
  float local_e0;
  float local_dc;
  dtPoly *local_d8;
  dtMeshTile *local_d0;
  dtPoly *local_c8;
  dtMeshTile *pdStack_c0;
  dtPoly *local_b8;
  dtMeshTile *local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_ec = 0x80000008;
  *param_8 = 0;
  if ((param_1 != 0) &&
     (uVar6 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar6 & 1) != 0)) {
    dtNodePool::clear(*(dtNodePool **)(this + 0x58));
    *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
    if (param_3 < 1) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
    }
    else {
      uVar6 = 0;
      uVar12 = (ulong)(uint)param_3;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      do {
        uVar1 = uVar6 & 0xffffffff;
        uVar20 = *(undefined8 *)(param_2 + uVar1);
        uVar12 = uVar12 - 1;
        uVar6 = uVar6 + 3;
        fVar16 = fVar16 + (float)uVar20;
        fVar17 = fVar17 + (float)((ulong)uVar20 >> 0x20);
        fVar18 = fVar18 + (param_2 + uVar1)[2];
      } while (uVar12 != 0);
    }
    fVar19 = 1.0 / (float)param_3;
    pdVar7 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
    *(ulong *)pdVar7 = CONCAT44(fVar17 * fVar19,fVar16 * fVar19);
    *(float *)(pdVar7 + 8) = fVar19 * fVar18;
    *(undefined4 *)(pdVar7 + 0xc) = 0;
    *(undefined4 *)(pdVar7 + 0x10) = 0;
    *(uint *)(pdVar7 + 0x14) = *(uint *)(pdVar7 + 0x14) & 0xe3000000 | 0x4000000;
    *(uint *)(pdVar7 + 0x18) = param_1;
    pdVar8 = *(dtNodeQueue **)(this + 0x60);
    iVar5 = *(int *)(pdVar8 + 0xc);
    *(int *)(pdVar8 + 0xc) = iVar5 + 1;
    dtNodeQueue::bubbleUp(pdVar8,iVar5,pdVar7);
    if (param_9 < 1) {
      local_ec = 0x40000010;
      local_f0 = 0;
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
      local_ec = 0x40000000;
      local_f0 = 1;
    }
    pdVar8 = *(dtNodeQueue **)(this + 0x60);
    iVar5 = *(int *)(pdVar8 + 0xc);
    while (iVar5 != 0) {
      pfVar14 = (float *)**(long **)pdVar8;
      *(int *)(pdVar8 + 0xc) = iVar5 + -1;
      dtNodeQueue::trickleDown(pdVar8,0,(dtNode *)(*(long **)pdVar8)[iVar5 + -1]);
      fVar16 = pfVar14[6];
      pfVar14[5] = (float)((uint)pfVar14[5] & 0xf3ffffff | 0x8000000);
      local_b8 = (dtPoly *)0x0;
      local_b0 = (dtMeshTile *)0x0;
      dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,(uint)fVar16,&local_b0,&local_b8);
      local_c8 = (dtPoly *)0x0;
      pdStack_c0 = (dtMeshTile *)0x0;
      if (((uint)pfVar14[5] & 0xffffff) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(uint *)(**(long **)(this + 0x58) +
                           (ulong)(((uint)pfVar14[5] & 0xffffff) - 1) * 0x1c + 0x18);
        if (uVar15 != 0) {
          dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar15,&pdStack_c0,&local_c8);
        }
      }
      uVar10 = *(uint *)local_b8;
      if (uVar10 != 0xffffffff) {
        lVar13 = *(long *)(local_b0 + 0x20);
        pdVar9 = local_b0;
        do {
          uVar3 = *(uint *)(lVar13 + (ulong)uVar10 * 0xc);
          if ((uVar3 != 0) && (uVar3 != uVar15)) {
            local_d8 = (dtPoly *)0x0;
            local_d0 = (dtMeshTile *)0x0;
            this_00 = (dtNavMeshQuery *)
                      dtNavMesh::getTileAndPolyByRefUnsafe
                                (*(dtNavMesh **)this,uVar3,&local_d0,&local_d8);
            pdVar9 = local_b0;
            if (((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_d8 + 0x1c)) != 0) &&
               (((((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_d8 + 0x1c)) == 0 &&
                  (iVar5 = getPortalPoints(this_00,(uint)fVar16,local_b8,local_b0,uVar3,local_d8,
                                           local_d0,&local_9c,&local_a8), pdVar9 = local_b0,
                  iVar5 != 0)) &&
                 (uVar6 = dtIntersectSegmentPoly2D
                                    (&local_9c,&local_a8,param_2,param_3,&local_dc,&local_e0,
                                     &iStack_e4,&iStack_e8), pdVar9 = local_b0, (uVar6 & 1) != 0))
                && ((local_dc <= 1.0 && (0.0 <= local_e0)))))) {
              pdVar7 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),uVar3,'\0');
              pdVar9 = local_b0;
              if (pdVar7 == (dtNode *)0x0) {
                local_ec = local_ec | 0x20;
              }
              else {
                uVar2 = *(uint *)(pdVar7 + 0x14);
                if ((uVar2 >> 0x1b & 1) == 0) {
                  if ((uVar2 & 0x1c000000) == 0) {
                    fVar17 = local_9c + (local_a8 - local_9c) * 0.5;
                    *(float *)pdVar7 = fVar17;
                    fVar18 = local_98 + (local_a4 - local_98) * 0.5;
                    *(float *)(pdVar7 + 4) = fVar18;
                    fVar19 = local_94 + (local_a0 - local_94) * 0.5;
                    *(float *)(pdVar7 + 8) = fVar19;
                  }
                  else {
                    fVar17 = *(float *)pdVar7;
                    fVar18 = *(float *)(pdVar7 + 4);
                    fVar19 = *(float *)(pdVar7 + 8);
                  }
                  fVar17 = pfVar14[4] +
                           SQRT((fVar17 - *pfVar14) * (fVar17 - *pfVar14) +
                                (fVar18 - pfVar14[1]) * (fVar18 - pfVar14[1]) +
                                (fVar19 - pfVar14[2]) * (fVar19 - pfVar14[2]));
                  if (((uVar2 >> 0x1a & 1) == 0) || (fVar17 < *(float *)(pdVar7 + 0x10))) {
                    *(uint *)(pdVar7 + 0x14) = uVar2 & 0xf7ffffff;
                    *(uint *)(pdVar7 + 0x18) = uVar3;
                    iVar5 = **(int **)(this + 0x58);
                    *(float *)(pdVar7 + 0x10) = fVar17;
                    uVar11 = uVar2 & 0xf7000000 |
                             ((uint)((int)pfVar14 - iVar5) >> 2) * -0x49249249 + 1 & 0xffffff;
                    *(uint *)(pdVar7 + 0x14) = uVar11;
                    if ((uVar2 >> 0x1a & 1) == 0) {
                      if (local_f0 < param_9) {
                        if (param_5 != (uint *)0x0) {
                          param_5[local_f0] = uVar3;
                        }
                        if (param_6 != (uint *)0x0) {
                          param_6[local_f0] =
                               *(uint *)(**(long **)(this + 0x58) +
                                         (ulong)((*(uint *)(pdVar7 + 0x14) & 0xffffff) - 1) * 0x1c +
                                        0x18);
                        }
                        if (param_7 != (float *)0x0) {
                          param_7[local_f0] = fVar17;
                        }
                        uVar11 = *(uint *)(pdVar7 + 0x14);
                        local_f0 = local_f0 + 1;
                      }
                      else {
                        local_ec = local_ec | 0x10;
                      }
                      *(uint *)(pdVar7 + 0x14) = uVar11 & 0xe3ffffff | 0x4000000;
                      pdVar8 = *(dtNodeQueue **)(this + 0x60);
                      uVar6 = (ulong)*(uint *)(pdVar8 + 0xc);
                      *(uint *)(pdVar8 + 0xc) = *(uint *)(pdVar8 + 0xc) + 1;
LAB_0118de9c:
                      dtNodeQueue::bubbleUp(pdVar8,(int)uVar6,pdVar7);
                      pdVar9 = local_b0;
                    }
                    else {
                      pdVar8 = *(dtNodeQueue **)(this + 0x60);
                      if (0 < *(int *)(pdVar8 + 0xc)) {
                        uVar6 = 0;
                        do {
                          if (*(dtNode **)(*(long *)pdVar8 + uVar6 * 8) == pdVar7)
                          goto LAB_0118de9c;
                          uVar6 = uVar6 + 1;
                        } while ((long)*(int *)(pdVar8 + 0xc) != uVar6);
                      }
                    }
                  }
                }
              }
            }
          }
          lVar13 = *(long *)(pdVar9 + 0x20);
          uVar10 = *(uint *)(lVar13 + (ulong)uVar10 * 0xc + 4);
        } while (uVar10 != 0xffffffff);
      }
      pdVar8 = *(dtNodeQueue **)(this + 0x60);
      iVar5 = *(int *)(pdVar8 + 0xc);
    }
    *param_8 = local_f0;
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

