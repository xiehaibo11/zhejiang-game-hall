
/* WARNING: Removing unreachable block (ram,0x01189780) */
/* dtNavMeshQuery::findRandomPointAroundCircle(unsigned int, float const*, float, dtQueryFilter
   const*, float (*)(), unsigned int*, float*) const */

undefined4 __thiscall
dtNavMeshQuery::findRandomPointAroundCircle
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          _func_float *param_5,uint *param_6,float *param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  dtPoly dVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  dtNode *pdVar8;
  dtNodeQueue *pdVar9;
  dtNavMeshQuery *this_00;
  dtMeshTile *pdVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  undefined4 *puVar17;
  ulong uVar18;
  float *pfVar19;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  dtMeshTile *local_160;
  float local_154;
  dtPoly *local_150;
  float fStack_13c;
  dtPoly *local_138;
  dtMeshTile *local_130;
  dtPoly *local_128;
  dtMeshTile *pdStack_120;
  dtPoly *local_118;
  dtPoly *local_110;
  dtMeshTile *pdStack_108;
  undefined8 local_100;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 auStack_c4 [13];
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  uVar20 = 0x80000008;
  if ((param_1 != 0) &&
     (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar7 & 1) != 0)) {
    local_110 = (dtPoly *)0x0;
    pdStack_108 = (dtMeshTile *)0x0;
    dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,param_1,&pdStack_108,&local_110);
    if (((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_110 + 0x1c)) != 0) &&
       (uVar20 = 0x80000008, (*(ushort *)(param_4 + 0x102) & *(ushort *)(local_110 + 0x1c)) == 0)) {
      dtNodePool::clear(*(dtNodePool **)(this + 0x58));
      *(undefined4 *)(*(long *)(this + 0x60) + 0xc) = 0;
      pdVar8 = (dtNode *)dtNodePool::getNode(*(dtNodePool **)(this + 0x58),param_1,'\0');
      *(float *)pdVar8 = *param_2;
      *(float *)(pdVar8 + 4) = param_2[1];
      fVar25 = param_2[2];
      *(undefined4 *)(pdVar8 + 0xc) = 0;
      *(undefined4 *)(pdVar8 + 0x10) = 0;
      *(uint *)(pdVar8 + 0x14) = *(uint *)(pdVar8 + 0x14) & 0xe3000000 | 0x4000000;
      *(uint *)(pdVar8 + 0x18) = param_1;
      *(float *)(pdVar8 + 8) = fVar25;
      pdVar9 = *(dtNodeQueue **)(this + 0x60);
      iVar6 = *(int *)(pdVar9 + 0xc);
      *(int *)(pdVar9 + 0xc) = iVar6 + 1;
      dtNodeQueue::bubbleUp(pdVar9,iVar6,pdVar8);
      pdVar9 = *(dtNodeQueue **)(this + 0x60);
      iVar6 = *(int *)(pdVar9 + 0xc);
      if (iVar6 != 0) {
        fVar25 = 0.0;
        local_160 = (dtMeshTile *)0x0;
        local_150 = (dtPoly *)0x0;
        local_154 = 0.0;
        do {
          pfVar19 = (float *)**(long **)pdVar9;
          *(int *)(pdVar9 + 0xc) = iVar6 + -1;
          dtNodeQueue::trickleDown(pdVar9,0,(dtNode *)(*(long **)pdVar9)[iVar6 + -1]);
          fVar23 = pfVar19[6];
          pfVar19[5] = (float)((uint)pfVar19[5] & 0xf3ffffff | 0x8000000);
          local_100 = (dtMeshTile *)0x0;
          local_118 = (dtPoly *)0x0;
          dtNavMesh::getTileAndPolyByRefUnsafe
                    (*(dtNavMesh **)this,(uint)fVar23,(dtMeshTile **)&local_100,&local_118);
          if ((byte)local_118[0x1f] < 0x40) {
            fVar26 = 0.0;
            if (2 < (ulong)(byte)local_118[0x1e]) {
              fVar26 = 0.0;
              lVar15 = 4;
              lVar12 = *(long *)(local_100 + 0x18);
              pfVar14 = (float *)(lVar12 + (ulong)*(ushort *)(local_118 + 4) * 0xc);
              fVar22 = *pfVar14;
              fVar24 = pfVar14[2];
              uVar7 = (ulong)*(ushort *)(local_118 + 6);
              do {
                lVar1 = lVar15 * 2;
                pfVar14 = (float *)(lVar12 + uVar7 * 0xc);
                pfVar16 = (float *)(lVar12 + (ulong)*(ushort *)(local_118 + lVar1) * 0xc);
                uVar18 = lVar15 - 1;
                lVar15 = lVar15 + 1;
                fVar26 = fVar26 + ((pfVar14[2] - fVar24) * (*pfVar16 - fVar22) -
                                  (*pfVar14 - fVar22) * (pfVar16[2] - fVar24));
                uVar7 = (ulong)*(ushort *)(local_118 + lVar1);
              } while (uVar18 < (byte)local_118[0x1e]);
            }
            fVar25 = fVar25 + fVar26;
            fVar22 = (*param_5)();
            if (fVar25 * fVar22 <= fVar26) {
              local_160 = local_100;
              local_154 = fVar23;
              local_150 = local_118;
            }
          }
          local_128 = (dtPoly *)0x0;
          pdStack_120 = (dtMeshTile *)0x0;
          if (((uint)pfVar19[5] & 0xffffff) == 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = *(uint *)(**(long **)(this + 0x58) +
                               (ulong)(((uint)pfVar19[5] & 0xffffff) - 1) * 0x1c + 0x18);
            if (uVar21 != 0) {
              dtNavMesh::getTileAndPolyByRefUnsafe
                        (*(dtNavMesh **)this,uVar21,&pdStack_120,&local_128);
            }
          }
          uVar11 = *(uint *)local_118;
          if (uVar11 != 0xffffffff) {
            lVar15 = *(long *)(local_100 + 0x20);
            pdVar10 = local_100;
            do {
              uVar3 = *(uint *)(lVar15 + (ulong)uVar11 * 0xc);
              if ((uVar3 != 0) && (uVar3 != uVar21)) {
                local_138 = (dtPoly *)0x0;
                local_130 = (dtMeshTile *)0x0;
                this_00 = (dtNavMeshQuery *)
                          dtNavMesh::getTileAndPolyByRefUnsafe
                                    (*(dtNavMesh **)this,uVar3,&local_130,&local_138);
                pdVar10 = local_100;
                if (((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_138 + 0x1c)) != 0) &&
                   (((((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_138 + 0x1c)) == 0 &&
                      (iVar6 = getPortalPoints(this_00,(uint)fVar23,local_118,local_100,uVar3,
                                               local_138,local_130,&local_d8,&local_f0),
                      pdVar10 = local_100, iVar6 != 0)) &&
                     (fVar26 = (float)dtDistancePtSegSqr2D(param_2,&local_d8,&local_f0,&fStack_13c),
                     pdVar10 = local_100, fVar26 <= param_3 * param_3)) &&
                    ((pdVar8 = (dtNode *)
                               dtNodePool::getNode(*(dtNodePool **)(this + 0x58),uVar3,'\0'),
                     pdVar10 = local_100, pdVar8 != (dtNode *)0x0 &&
                     (uVar2 = *(uint *)(pdVar8 + 0x14), (uVar2 >> 0x1b & 1) == 0)))))) {
                  if ((uVar2 & 0x1c000000) == 0) {
                    fVar26 = local_d8 + (local_f0 - local_d8) * 0.5;
                    *(float *)pdVar8 = fVar26;
                    fVar22 = local_d4 + (local_ec - local_d4) * 0.5;
                    *(float *)(pdVar8 + 4) = fVar22;
                    fVar24 = local_d0 + (local_e8 - local_d0) * 0.5;
                    *(float *)(pdVar8 + 8) = fVar24;
                  }
                  else {
                    fVar26 = *(float *)pdVar8;
                    fVar22 = *(float *)(pdVar8 + 4);
                    fVar24 = *(float *)(pdVar8 + 8);
                  }
                  fVar26 = pfVar19[4] +
                           SQRT((fVar26 - *pfVar19) * (fVar26 - *pfVar19) +
                                (fVar22 - pfVar19[1]) * (fVar22 - pfVar19[1]) +
                                (fVar24 - pfVar19[2]) * (fVar24 - pfVar19[2]));
                  if (((uVar2 >> 0x1a & 1) == 0) || (fVar26 < *(float *)(pdVar8 + 0x10))) {
                    *(uint *)(pdVar8 + 0x14) = uVar2 & 0xf7ffffff;
                    *(uint *)(pdVar8 + 0x18) = uVar3;
                    iVar6 = **(int **)(this + 0x58);
                    *(float *)(pdVar8 + 0x10) = fVar26;
                    uVar3 = ((uint)((int)pfVar19 - iVar6) >> 2) * -0x49249249 + 1 & 0xffffff;
                    *(uint *)(pdVar8 + 0x14) = uVar2 & 0xf7000000 | uVar3;
                    if ((uVar2 >> 0x1a & 1) == 0) {
                      *(uint *)(pdVar8 + 0x14) = uVar2 & 0xe3000000 | uVar3 | 0x4000000;
                      pdVar9 = *(dtNodeQueue **)(this + 0x60);
                      uVar7 = (ulong)*(uint *)(pdVar9 + 0xc);
                      *(uint *)(pdVar9 + 0xc) = *(uint *)(pdVar9 + 0xc) + 1;
LAB_01189638:
                      dtNodeQueue::bubbleUp(pdVar9,(int)uVar7,pdVar8);
                      pdVar10 = local_100;
                    }
                    else {
                      pdVar9 = *(dtNodeQueue **)(this + 0x60);
                      if (0 < *(int *)(pdVar9 + 0xc)) {
                        uVar7 = 0;
                        do {
                          if (*(dtNode **)(*(long *)pdVar9 + uVar7 * 8) == pdVar8)
                          goto LAB_01189638;
                          uVar7 = uVar7 + 1;
                        } while ((long)*(int *)(pdVar9 + 0xc) != uVar7);
                      }
                    }
                  }
                }
              }
              lVar15 = *(long *)(pdVar10 + 0x20);
              uVar11 = *(uint *)(lVar15 + (ulong)uVar11 * 0xc + 4);
            } while (uVar11 != 0xffffffff);
          }
          pdVar9 = *(dtNodeQueue **)(this + 0x60);
          iVar6 = *(int *)(pdVar9 + 0xc);
        } while (iVar6 != 0);
        if (local_150 != (dtPoly *)0x0) {
          lVar15 = *(long *)(local_160 + 0x18);
          pfVar19 = (float *)(lVar15 + (ulong)*(ushort *)(local_150 + 4) * 0xc);
          local_d8 = *pfVar19;
          local_d4 = pfVar19[1];
          local_d0 = pfVar19[2];
          dVar4 = local_150[0x1e];
          if (1 < (ulong)(byte)dVar4) {
            lVar12 = 3;
            puVar13 = auStack_c4;
            do {
              puVar17 = (undefined4 *)(lVar15 + (ulong)*(ushort *)(local_150 + lVar12 * 2) * 0xc);
              puVar13[-2] = *puVar17;
              puVar13[-1] = puVar17[1];
              uVar7 = lVar12 - 1;
              lVar12 = lVar12 + 1;
              *puVar13 = puVar17[2];
              puVar13 = puVar13 + 3;
            } while (uVar7 < (byte)dVar4);
          }
          fVar25 = (*param_5)();
          fVar23 = (*param_5)();
          dtRandomPointInConvexPoly
                    (&local_d8,(uint)(byte)local_150[0x1e],&local_f0,fVar25,fVar23,
                     (float *)&local_100);
          local_118 = (dtPoly *)((ulong)local_118 & 0xffffffff00000000);
          getPolyHeight(this,(uint)local_154,(float *)&local_100,(float *)&local_118);
          uVar20 = 0x40000000;
          local_100 = (dtMeshTile *)CONCAT44(local_118._0_4_,(float)local_100);
          *param_7 = (float)local_100;
          param_7[1] = local_118._0_4_;
          param_7[2] = local_f8;
          *param_6 = (uint)local_154;
          goto LAB_01189744;
        }
      }
      uVar20 = 0x80000000;
    }
  }
LAB_01189744:
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

