
/* dtNavMesh::connectExtLinks(dtMeshTile*, dtMeshTile*, int) */

void __thiscall
dtNavMesh::connectExtLinks(dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  dtMeshTile *pdVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_a8 [4];
  float afStack_a4 [7];
  float afStack_88 [4];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((param_1 != (dtMeshTile *)0x0) && (lVar8 = *(long *)(param_1 + 8), 0 < *(int *)(lVar8 + 0x18))
     ) {
    lVar17 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x10);
      pfVar1 = (float *)(lVar9 + lVar17 * 0x20);
      uVar14 = (ulong)*(byte *)((long)pfVar1 + 0x1e);
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          uVar3 = *(ushort *)(lVar9 + lVar17 * 0x20 + uVar13 * 2 + 0x10);
          if (((short)uVar3 < 0) && ((param_3 == -1 || ((uVar3 & 0xff) == param_3)))) {
            lVar8 = lVar9 + lVar17 * 0x20 + 4;
            uVar10 = 0;
            if (uVar13 + 1 != uVar14) {
              uVar10 = uVar13 + 1 & 0xffffffff;
            }
            pfVar15 = (float *)(*(long *)(param_1 + 0x18) +
                               (ulong)*(ushort *)(lVar8 + uVar13 * 2) * 0xc);
            pdVar16 = (dtMeshTile *)
                      (*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(lVar8 + uVar10 * 2) * 0xc);
            uVar7 = findConnectingPolys((float *)this,pfVar15,pdVar16,(int)param_2,
                                        (uint *)(ulong)(uVar3 + 4 & 7),afStack_88,(int)auStack_a8);
            if (0 < (int)uVar7) {
              uVar10 = (ulong)uVar7;
              pfVar6 = afStack_88;
              pfVar5 = afStack_a4;
              fVar2 = *(float *)(param_1 + 4);
              do {
                if (fVar2 == -NAN) {
                  fVar11 = -NAN;
                }
                else {
                  lVar8 = *(long *)(param_1 + 0x20);
                  pfVar12 = (float *)(lVar8 + (ulong)(uint)fVar2 * 0xc);
                  fVar11 = pfVar12[1];
                  *(float *)(param_1 + 4) = fVar11;
                  fVar18 = *pfVar6;
                  *(char *)(pfVar12 + 2) = (char)uVar13;
                  *(char *)((long)pfVar12 + 9) = (char)uVar3;
                  *pfVar12 = fVar18;
                  pfVar12[1] = *pfVar1;
                  *pfVar1 = fVar2;
                  if ((uVar3 & 0xfb) == 0) {
                    fVar18 = pfVar5[-1];
                    fVar20 = pfVar15[2];
                    fVar21 = *(float *)(pdVar16 + 8);
                  }
                  else {
                    if ((uVar3 & 0xff | 4) != 6) goto LAB_011868dc;
                    fVar18 = pfVar5[-1];
                    fVar20 = *pfVar15;
                    fVar21 = *(float *)pdVar16;
                  }
                  fVar19 = (fVar18 - fVar20) / (fVar21 - fVar20);
                  fVar18 = (*pfVar5 - fVar20) / (fVar21 - fVar20);
                  lVar8 = lVar8 + (ulong)(uint)fVar2 * 0xc;
                  fVar2 = fVar19;
                  if (fVar19 <= fVar18) {
                    fVar2 = fVar18;
                    fVar18 = fVar19;
                  }
                  fVar20 = fVar18;
                  if (1.0 < fVar18) {
                    fVar20 = 1.0;
                  }
                  fVar21 = fVar2;
                  if (1.0 < fVar2) {
                    fVar21 = 1.0;
                  }
                  fVar19 = 0.0;
                  if (0.0 <= fVar18) {
                    fVar19 = fVar20 * 255.0;
                  }
                  fVar18 = 0.0;
                  if (0.0 <= fVar2) {
                    fVar18 = fVar21 * 255.0;
                  }
                  *(char *)(lVar8 + 10) = (char)(int)fVar19;
                  *(char *)(lVar8 + 0xb) = (char)(int)fVar18;
                }
LAB_011868dc:
                pfVar6 = pfVar6 + 1;
                uVar10 = uVar10 - 1;
                pfVar5 = pfVar5 + 2;
                fVar2 = fVar11;
              } while (uVar10 != 0);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
        lVar8 = *(long *)(param_1 + 8);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar8 + 0x18));
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

