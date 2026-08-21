
/* dtNavMeshQuery::getPolyWallSegments(unsigned int, dtQueryFilter const*, float*, unsigned int*,
   int*, int) const */

uint __thiscall
dtNavMeshQuery::getPolyWallSegments
          (dtNavMeshQuery *this,uint param_1,dtQueryFilter *param_2,float *param_3,uint *param_4,
          int *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  dtMeshTile *pdVar9;
  ulong uVar10;
  short *psVar11;
  float *pfVar12;
  short *psVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  float fVar23;
  short sVar24;
  dtPoly *local_110;
  dtMeshTile *pdStack_108;
  dtPoly *local_100;
  dtMeshTile *local_f8;
  uint local_f0;
  ushort local_ec [5];
  short asStack_e2 [57];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *param_5 = 0;
  local_100 = (dtPoly *)0x0;
  local_f8 = (dtMeshTile *)0x0;
  iVar7 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_f8,&local_100);
  if (iVar7 < 0) {
    uVar21 = 0x80000008;
  }
  else {
    if ((byte)local_100[0x1e] == 0) {
      iVar7 = 0;
      uVar21 = 0x40000000;
    }
    else {
      iVar7 = 0;
      uVar16 = (byte)local_100[0x1e] - 1;
      uVar21 = 0x40000000;
      psVar13 = (short *)((ulong)&local_f0 | 4);
      uVar17 = 0;
      do {
        uVar3 = *(ushort *)(local_100 + (long)(int)uVar16 * 2 + 0x10);
        if ((short)uVar3 < 0) {
          uVar8 = *(uint *)local_100;
          if (uVar8 == 0xffffffff) {
            uVar20 = 0;
LAB_0118e6ec:
            uVar18 = 0;
            uVar8 = uVar20;
LAB_0118e6f0:
            uVar20 = uVar8 - (int)uVar18;
            uVar18 = uVar18 & 0xffffffff;
            if (uVar20 != 0) {
              memmove(local_ec + uVar18 * 4 + 2,&local_f0 + uVar18 * 2,
                      -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3);
            }
            (&local_f0 + uVar18 * 2)[0] = 0;
            (&local_f0 + uVar18 * 2)[1] = 0xffff;
            uVar20 = uVar8 + 1;
            if ((int)uVar8 < 0xf) {
              if ((int)uVar8 < 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                psVar11 = psVar13;
                do {
                  if (0xff < *psVar11) break;
                  uVar18 = uVar18 + 1;
                  psVar11 = psVar11 + 4;
                } while (uVar20 != uVar18);
              }
              uVar20 = uVar20 - (int)uVar18;
              uVar18 = uVar18 & 0xffffffff;
              if (uVar20 != 0) {
                memmove(local_ec + uVar18 * 4 + 2,&local_f0 + uVar18 * 2,
                        -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3);
              }
              (&local_f0 + uVar18 * 2)[0] = 0;
              (&local_f0 + uVar18 * 2)[1] = 0x10000ff;
              uVar20 = uVar8 + 2;
            }
          }
          else {
            uVar20 = 0;
            lVar19 = *(long *)(local_f8 + 0x20);
            pdVar9 = local_f8;
            do {
              uVar18 = (ulong)uVar8;
              if (uVar16 == *(byte *)(lVar19 + (ulong)uVar8 * 0xc + 8)) {
                puVar22 = (uint *)(lVar19 + uVar18 * 0xc);
                uVar8 = *puVar22;
                if (uVar8 != 0) {
                  local_110 = (dtPoly *)0x0;
                  pdStack_108 = (dtMeshTile *)0x0;
                  dtNavMesh::getTileAndPolyByRefUnsafe
                            (*(dtNavMesh **)this,uVar8,&pdStack_108,&local_110);
                  pdVar9 = local_f8;
                  if ((((*(ushort *)(param_2 + 0x100) & *(ushort *)(local_110 + 0x1c)) != 0) &&
                      ((*(ushort *)(param_2 + 0x102) & *(ushort *)(local_110 + 0x1c)) == 0)) &&
                     ((int)uVar20 < 0x10)) {
                    lVar19 = lVar19 + uVar18 * 0xc;
                    bVar1 = *(byte *)(lVar19 + 10);
                    bVar2 = *(byte *)(lVar19 + 0xb);
                    uVar8 = *puVar22;
                    if ((int)uVar20 < 1) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = 0;
                      psVar11 = psVar13;
                      do {
                        if ((short)(ushort)bVar2 <= *psVar11) break;
                        uVar10 = uVar10 + 1;
                        psVar11 = psVar11 + 4;
                      } while (uVar20 != uVar10);
                    }
                    uVar5 = uVar20 - (int)uVar10;
                    uVar10 = uVar10 & 0xffffffff;
                    if (uVar5 != 0) {
                      memmove(local_ec + uVar10 * 4 + 2,&local_f0 + uVar10 * 2,
                              -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
                    }
                    (&local_f0)[uVar10 * 2] = uVar8;
                    uVar20 = uVar20 + 1;
                    local_ec[uVar10 * 4] = (ushort)bVar1;
                    local_ec[uVar10 * 4 + 1] = (ushort)bVar2;
                    pdVar9 = local_f8;
                  }
                }
              }
              lVar19 = *(long *)(pdVar9 + 0x20);
              uVar8 = *(uint *)(lVar19 + uVar18 * 0xc + 4);
            } while (uVar8 != 0xffffffff);
            if ((int)uVar20 < 0x10) {
              if ((int)uVar20 < 1) goto LAB_0118e6ec;
              uVar18 = 0;
              psVar11 = psVar13;
              do {
                uVar8 = uVar20;
                if (-1 < *psVar11) break;
                uVar18 = uVar18 + 1;
                psVar11 = psVar11 + 4;
              } while (uVar20 != uVar18);
              goto LAB_0118e6f0;
            }
          }
          if (1 < (int)uVar20) {
            pfVar12 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)(local_100 + (long)(int)uVar16 * 2 + 4) * 0xc);
            pfVar14 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)(local_100 + uVar17 * 2 + 4) * 0xc);
            lVar19 = (ulong)uVar20 - 1;
            psVar11 = asStack_e2;
            do {
              if ((param_4 != (uint *)0x0) && (uVar16 = *(uint *)(psVar11 + -3), uVar16 != 0)) {
                if (iVar7 < param_6) {
                  fVar23 = (float)(int)psVar11[-1] / 255.0;
                  pfVar15 = param_3 + (long)iVar7 * 6;
                  sVar24 = *psVar11;
                  *pfVar15 = *pfVar12 + fVar23 * (*pfVar14 - *pfVar12);
                  pfVar15[1] = pfVar12[1] + fVar23 * (pfVar14[1] - pfVar12[1]);
                  pfVar15[2] = pfVar12[2] + fVar23 * (pfVar14[2] - pfVar12[2]);
                  fVar23 = (float)(int)sVar24 / 255.0;
                  pfVar15[3] = *pfVar12 + fVar23 * (*pfVar14 - *pfVar12);
                  pfVar15[4] = pfVar12[1] + fVar23 * (pfVar14[1] - pfVar12[1]);
                  pfVar15[5] = pfVar12[2] + fVar23 * (pfVar14[2] - pfVar12[2]);
                  param_4[iVar7] = uVar16;
                  iVar7 = iVar7 + 1;
                }
                else {
                  uVar21 = uVar21 | 0x10;
                }
              }
              sVar24 = psVar11[-1];
              if (psVar11[-4] != sVar24) {
                if (iVar7 < param_6) {
                  fVar23 = (float)(int)psVar11[-4] / 255.0;
                  pfVar15 = param_3 + (long)iVar7 * 6;
                  *pfVar15 = *pfVar12 + fVar23 * (*pfVar14 - *pfVar12);
                  pfVar15[1] = pfVar12[1] + fVar23 * (pfVar14[1] - pfVar12[1]);
                  pfVar15[2] = pfVar12[2] + fVar23 * (pfVar14[2] - pfVar12[2]);
                  fVar23 = (float)(int)sVar24 / 255.0;
                  pfVar15[3] = *pfVar12 + fVar23 * (*pfVar14 - *pfVar12);
                  pfVar15[4] = pfVar12[1] + fVar23 * (pfVar14[1] - pfVar12[1]);
                  pfVar15[5] = pfVar12[2] + fVar23 * (pfVar14[2] - pfVar12[2]);
                  if (param_4 != (uint *)0x0) {
                    param_4[iVar7] = 0;
                  }
                  iVar7 = iVar7 + 1;
                }
                else {
                  uVar21 = uVar21 | 0x10;
                }
              }
              lVar19 = lVar19 + -1;
              psVar11 = psVar11 + 4;
            } while (lVar19 != 0);
          }
        }
        else {
          if (uVar3 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_f8);
            uVar4 = *(ushort *)(*(long *)(local_f8 + 0x10) + (ulong)(uVar3 - 1) * 0x20 + 0x1c);
            if (((*(ushort *)(param_2 + 0x100) & uVar4) != 0) &&
               ((*(ushort *)(param_2 + 0x102) & uVar4) == 0)) {
              uVar8 = uVar8 | uVar3 - 1;
              if ((param_4 != (uint *)0x0) || (uVar8 == 0)) goto joined_r0x0118e4f4;
              goto LAB_0118e470;
            }
            uVar8 = 0;
          }
joined_r0x0118e4f4:
          if (iVar7 < param_6) {
            pfVar15 = param_3 + (long)iVar7 * 6;
            pfVar14 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)(local_100 + (long)(int)uVar16 * 2 + 4) * 0xc);
            pfVar12 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)(local_100 + uVar17 * 2 + 4) * 0xc);
            *pfVar15 = *pfVar14;
            pfVar15[1] = pfVar14[1];
            pfVar15[2] = pfVar14[2];
            pfVar15[3] = *pfVar12;
            pfVar15[4] = pfVar12[1];
            pfVar15[5] = pfVar12[2];
            if (param_4 != (uint *)0x0) {
              param_4[iVar7] = uVar8;
            }
            iVar7 = iVar7 + 1;
          }
          else {
            uVar21 = uVar21 | 0x10;
          }
        }
LAB_0118e470:
        uVar18 = uVar17 + 1;
        uVar16 = (uint)uVar17;
        uVar17 = uVar18;
      } while (uVar18 < (byte)local_100[0x1e]);
    }
    *param_5 = iVar7;
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

