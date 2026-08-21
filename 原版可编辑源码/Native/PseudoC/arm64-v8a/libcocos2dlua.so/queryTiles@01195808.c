
/* dtTileCache::queryTiles(float const*, float const*, unsigned int*, int*, int) const */

undefined8 __thiscall
dtTileCache::queryTiles
          (dtTileCache *this,float *param_1,float *param_2,uint *param_3,int *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_e8 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar16 = param_1[2];
  fVar18 = *(float *)(this + 0x34);
  fVar17 = param_2[2];
  iVar6 = (int)((fVar16 - *(float *)(this + 0x30)) / (fVar18 * (float)*(int *)(this + 0x40)));
  iVar5 = (int)((fVar17 - *(float *)(this + 0x30)) / (fVar18 * (float)*(int *)(this + 0x40)));
  if (iVar5 < iVar6) {
    iVar4 = 0;
  }
  else {
    fVar19 = *param_1;
    fVar20 = *param_2;
    iVar4 = 0;
    iVar7 = (int)((fVar19 - *(float *)(this + 0x28)) / (fVar18 * (float)*(int *)(this + 0x3c)));
    iVar3 = (int)((fVar20 - *(float *)(this + 0x28)) / (fVar18 * (float)*(int *)(this + 0x3c)));
    do {
      if (iVar7 <= iVar3) {
        lVar8 = *(long *)(this + 8);
        iVar9 = iVar7;
        do {
          piVar10 = *(int **)(lVar8 + (long)(int)(*(uint *)(this + 4) &
                                                 iVar6 * -0x27e9c7bf + iVar9 * -0x72594cbd) * 8);
          if (piVar10 != (int *)0x0) {
            uVar11 = 0;
            lVar13 = *(long *)(piVar10 + 2);
            while( true ) {
              if ((((lVar13 == 0) || (*(int *)(lVar13 + 8) != iVar9)) || (0x1f < (int)uVar11)) ||
                 (*(int *)(lVar13 + 0xc) != iVar6)) {
                piVar10 = *(int **)(piVar10 + 0xc);
              }
              else {
                local_e8[(int)uVar11] =
                     *piVar10 << (ulong)(*(uint *)(this + 0x24) & 0x1f) |
                     (int)((ulong)((long)piVar10 - *(long *)(this + 0x18)) >> 3) * -0x49249249;
                piVar10 = *(int **)(piVar10 + 0xc);
                uVar11 = uVar11 + 1;
              }
              if (piVar10 == (int *)0x0) break;
              lVar13 = *(long *)(piVar10 + 2);
            }
            if (0 < (int)uVar11) {
              lVar13 = *(long *)(this + 0x18);
              fVar21 = param_1[1];
              uVar12 = (ulong)uVar11;
              puVar14 = local_e8;
              do {
                lVar15 = *(long *)(lVar13 + (ulong)(*puVar14 &
                                                   ~(-1 << (ulong)(*(uint *)(this + 0x24) & 0x1f)))
                                            * 0x38 + 8);
                fVar22 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x32));
                if ((fVar21 <= *(float *)(lVar15 + 0x24)) &&
                   (*(float *)(lVar15 + 0x18) <= param_2[1])) {
                  fVar23 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x34));
                  if ((*(float *)(lVar15 + 0x1c) + fVar18 * fVar23 <= fVar17) &&
                     ((fVar16 <= *(float *)(lVar15 + 0x1c) +
                                 fVar18 * (float)(*(byte *)(lVar15 + 0x35) + 1) &&
                      (iVar4 < param_5 &&
                       (*(float *)(lVar15 + 0x14) + fVar18 * fVar22 <= fVar20 &&
                       fVar19 <= *(float *)(lVar15 + 0x14) +
                                 fVar18 * (float)(*(byte *)(lVar15 + 0x33) + 1)))))) {
                    param_3[iVar4] = *puVar14;
                    iVar4 = iVar4 + 1;
                  }
                }
                uVar12 = uVar12 - 1;
                puVar14 = puVar14 + 1;
              } while (uVar12 != 0);
            }
          }
          bVar1 = iVar9 < iVar3;
          iVar9 = iVar9 + 1;
        } while (bVar1);
      }
      bVar1 = iVar6 < iVar5;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  *param_4 = iVar4;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0x40000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

