
/* dtNavMeshQuery::moveAlongSurface(unsigned int, float const*, float const*, dtQueryFilter const*,
   float*, unsigned int*, int*, int) const */

undefined4 __thiscall
dtNavMeshQuery::moveAlongSurface
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3,dtQueryFilter *param_4,
          float *param_5,uint *param_6,int *param_7,int param_8)

{
  uint uVar1;
  dtPoly dVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  dtMeshTile *pdVar11;
  uint uVar12;
  ulong uVar13;
  dtPoly *pdVar14;
  ulong *puVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint uVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  undefined8 uVar31;
  ulong local_2c8;
  float local_2bc;
  dtPoly *local_2a8;
  dtMeshTile *local_2a0;
  dtPoly *local_298;
  dtMeshTile *local_290;
  uint local_288 [8];
  float local_268 [18];
  undefined8 local_220;
  float local_218;
  ulong local_210 [48];
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  uVar21 = 0x80000008;
  *param_7 = 0;
  if ((param_1 != 0) &&
     (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar7 & 1) != 0)) {
    dtNodePool::clear(*(dtNodePool **)(this + 0x50));
    local_210[0] = dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1,'\0');
    local_2c8 = 0;
    *(undefined4 *)(local_210[0] + 0xc) = 0;
    *(undefined4 *)(local_210[0] + 0x10) = 0;
    *(uint *)(local_210[0] + 0x14) = *(uint *)(local_210[0] + 0x14) & 0xe3000000 | 0x8000000;
    *(uint *)(local_210[0] + 0x18) = param_1;
    uVar31 = *(undefined8 *)param_2;
    local_2bc = param_2[2];
    fVar28 = (float)*(undefined8 *)param_3 - (float)uVar31;
    fVar24 = (float)((ulong)uVar31 >> 0x20);
    fVar30 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar24;
    local_220 = CONCAT44(fVar30 * 0.5 + fVar24,fVar28 * 0.5 + (float)uVar31);
    fVar24 = param_3[2] - local_2bc;
    local_218 = fVar24 * 0.5 + local_2bc;
    fVar28 = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar24 * fVar24) * 0.5 + 0.001;
    uVar19 = 1;
    fVar24 = 3.4028235e+38;
    do {
      uVar7 = local_210[0];
      uVar19 = uVar19 - 1;
      if (0 < (int)uVar19) {
        uVar9 = (ulong)uVar19;
        if (uVar19 < 4) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar9 & 0xfffffffc;
          uVar20 = uVar13;
          puVar15 = local_210 + 2;
          do {
            uVar25 = puVar15[-1];
            uVar26 = puVar15[1];
            uVar20 = uVar20 - 4;
            puVar15[-1] = *puVar15;
            puVar15[-2] = uVar25;
            puVar15[1] = puVar15[2];
            *puVar15 = uVar26;
            puVar15 = puVar15 + 4;
          } while (uVar20 != 0);
          if (uVar13 == uVar9) goto LAB_0118cfd8;
        }
        lVar10 = uVar9 - uVar13;
        puVar15 = local_210 + uVar13 + 1;
        do {
          lVar10 = lVar10 + -1;
          puVar15[-1] = *puVar15;
          puVar15 = puVar15 + 1;
        } while (lVar10 != 0);
      }
LAB_0118cfd8:
      local_298 = (dtPoly *)0x0;
      local_290 = (dtMeshTile *)0x0;
      dtNavMesh::getTileAndPolyByRefUnsafe
                (*(dtNavMesh **)this,*(uint *)(local_210[0] + 0x18),&local_290,&local_298);
      dVar2 = local_298[0x1e];
      uVar9 = (ulong)(byte)dVar2;
      if ((byte)dVar2 != 0) {
        lVar10 = *(long *)(local_290 + 0x18);
        pdVar14 = local_298 + 4;
        pfVar17 = local_268 + 2;
        do {
          uVar9 = uVar9 - 1;
          pfVar18 = (float *)(lVar10 + (ulong)*(ushort *)pdVar14 * 0xc);
          pfVar17[-2] = *pfVar18;
          pfVar17[-1] = pfVar18[1];
          *pfVar17 = pfVar18[2];
          pdVar14 = pdVar14 + 2;
          pfVar17 = pfVar17 + 3;
        } while (uVar9 != 0);
      }
      uVar9 = dtPointInPolygon(param_3,local_268,(uint)(byte)dVar2);
      if ((uVar9 & 1) != 0) {
        uVar31 = *(undefined8 *)param_3;
        local_2bc = param_3[2];
        local_2c8 = uVar7;
        break;
      }
      if ((byte)local_298[0x1e] != 0) {
        uVar6 = (byte)local_298[0x1e] - 1;
        uVar9 = 0;
        do {
          uVar3 = *(ushort *)(local_298 + (long)(int)uVar6 * 2 + 0x10);
          lVar10 = (long)(int)uVar6;
          if ((short)uVar3 < 0) {
            uVar12 = *(uint *)local_298;
            if (uVar12 != 0xffffffff) {
              uVar23 = 0;
              lVar16 = *(long *)(local_290 + 0x20);
              pdVar11 = local_290;
              do {
                if (uVar6 == *(byte *)(lVar16 + (ulong)uVar12 * 0xc + 8)) {
                  puVar22 = (uint *)(lVar16 + (ulong)uVar12 * 0xc);
                  uVar1 = *puVar22;
                  if (uVar1 != 0) {
                    local_2a8 = (dtPoly *)0x0;
                    local_2a0 = (dtMeshTile *)0x0;
                    dtNavMesh::getTileAndPolyByRefUnsafe
                              (*(dtNavMesh **)this,uVar1,&local_2a0,&local_2a8);
                    pdVar11 = local_290;
                    if ((((*(ushort *)(param_4 + 0x100) & *(ushort *)(local_2a8 + 0x1c)) != 0) &&
                        ((int)uVar23 < 8)) &&
                       ((*(ushort *)(param_4 + 0x102) & *(ushort *)(local_2a8 + 0x1c)) == 0)) {
                      local_288[(int)uVar23] = *puVar22;
                      uVar23 = uVar23 + 1;
                    }
                  }
                }
                lVar16 = *(long *)(pdVar11 + 0x20);
                uVar12 = *(uint *)(lVar16 + (ulong)uVar12 * 0xc + 4);
              } while (uVar12 != 0xffffffff);
              if (uVar23 != 0) {
                if (0 < (int)uVar23) goto LAB_0118d194;
                goto LAB_0118d064;
              }
            }
LAB_0118d1ac:
            fVar30 = (float)dtDistancePtSegSqr2D
                                      (param_3,local_268 + lVar10 * 3,local_268 + uVar9 * 3,
                                       (float *)&local_2a0);
            if (fVar30 < fVar24) {
              uVar31 = *(undefined8 *)(local_268 + lVar10 * 3);
              uVar29 = *(undefined8 *)(local_268 + uVar9 * 3);
              local_2c8 = uVar7;
              fVar24 = (float)uVar31;
              fVar27 = (float)((ulong)uVar31 >> 0x20);
              local_2bc = local_268[lVar10 * 3 + 2] +
                          local_2a0._0_4_ * (local_268[uVar9 * 3 + 2] - local_268[lVar10 * 3 + 2]);
              uVar31 = CONCAT44(fVar27 + ((float)((ulong)uVar29 >> 0x20) - fVar27) * local_2a0._0_4_
                                ,fVar24 + ((float)uVar29 - fVar24) * local_2a0._0_4_);
              fVar24 = fVar30;
            }
          }
          else {
            if (uVar3 == 0) goto LAB_0118d1ac;
            uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_290);
            uVar4 = *(ushort *)(*(long *)(local_290 + 0x10) + (ulong)(uVar3 - 1) * 0x20 + 0x1c);
            if (((*(ushort *)(param_4 + 0x100) & uVar4) == 0) ||
               ((*(ushort *)(param_4 + 0x102) & uVar4) != 0)) goto LAB_0118d1ac;
            uVar23 = 1;
            local_288[0] = uVar6 | uVar3 - 1;
LAB_0118d194:
            uVar20 = (ulong)uVar23;
            puVar22 = local_288;
            do {
              uVar13 = dtNodePool::getNode(*(dtNodePool **)(this + 0x50),*puVar22,'\0');
              if (((uVar13 != 0) && ((*(byte *)(uVar13 + 0x17) >> 3 & 1) == 0)) &&
                 ((fVar30 = (float)dtDistancePtSegSqr2D
                                             ((float *)&local_220,local_268 + lVar10 * 3,
                                              local_268 + uVar9 * 3,(float *)&local_2a0),
                  (int)uVar19 < 0x30 && (fVar30 <= fVar28 * fVar28)))) {
                if (uVar7 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (int)(uVar7 - **(long **)(this + 0x50) >> 2) * -0x49249249 + 1;
                }
                *(uint *)(uVar13 + 0x14) =
                     uVar6 & 0xffffff | *(uint *)(uVar13 + 0x14) & 0xe3000000 |
                     *(uint *)(uVar13 + 0x14) & 0x1c000000 | 0x8000000;
                local_210[(int)uVar19] = uVar13;
                uVar19 = uVar19 + 1;
              }
              uVar20 = uVar20 - 1;
              puVar22 = puVar22 + 1;
            } while (uVar20 != 0);
          }
LAB_0118d064:
          uVar20 = uVar9 + 1;
          uVar6 = (uint)uVar9;
          uVar9 = uVar20;
        } while (uVar20 < (byte)local_298[0x1e]);
      }
    } while (uVar19 != 0);
    if (local_2c8 == 0) {
      uVar21 = 0x40000000;
      iVar8 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar9 = local_2c8;
        uVar19 = *(uint *)(uVar9 + 0x14) & 0xffffff;
        if (uVar19 == 0) {
          local_2c8 = 0;
        }
        else {
          local_2c8 = **(long **)(this + 0x50) + (ulong)(uVar19 - 1) * 0x1c;
        }
        uVar19 = 0;
        if (uVar7 != 0) {
          uVar19 = (int)(uVar7 - **(long **)(this + 0x50) >> 2) * -0x49249249 + 1;
        }
        *(uint *)(uVar9 + 0x14) = *(uint *)(uVar9 + 0x14) & 0xff000000 | uVar19 & 0xffffff;
        uVar7 = uVar9;
      } while (local_2c8 != 0);
      lVar10 = 0;
      do {
        lVar16 = lVar10;
        param_6[lVar16] = *(uint *)(uVar9 + 0x18);
        if ((long)param_8 <= lVar16 + 1) {
          uVar21 = 0x40000010;
          goto LAB_0118d3d4;
        }
        uVar19 = *(uint *)(uVar9 + 0x14) & 0xffffff;
      } while ((uVar19 != 0) &&
              (uVar9 = **(long **)(this + 0x50) + (ulong)(uVar19 - 1) * 0x1c, lVar10 = lVar16 + 1,
              uVar9 != 0));
      uVar21 = 0x40000000;
LAB_0118d3d4:
      iVar8 = (int)lVar16 + 1;
    }
    *(undefined8 *)param_5 = uVar31;
    param_5[2] = local_2bc;
    *param_7 = iVar8;
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

