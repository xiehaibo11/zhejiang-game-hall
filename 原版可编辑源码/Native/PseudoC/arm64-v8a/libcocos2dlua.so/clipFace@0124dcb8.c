
/* btPolyhedralContactClipping::clipFace(btAlignedObjectArray<btVector3> const&,
   btAlignedObjectArray<btVector3>&, btVector3 const&, float) */

void btPolyhedralContactClipping::clipFace
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2,btVector3 *param_3,
               float param_4)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((int)uVar2 < 2) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  fVar13 = *(float *)param_3;
  fVar14 = *(float *)(param_3 + 4);
  fVar15 = *(float *)(param_3 + 8);
  uVar7 = 0;
  lVar3 = lVar5 + (long)(int)uVar2 * 0x10;
  fVar10 = *(float *)(lVar3 + -0xc);
  fVar11 = *(float *)(lVar3 + -0x10);
  fVar21 = *(float *)(lVar3 + -8);
  fVar12 = *(float *)(lVar3 + -0x10) * fVar13 + *(float *)(lVar3 + -0xc) * fVar14 +
           *(float *)(lVar3 + -8) * fVar15 + param_4;
  do {
    pfVar1 = (float *)(lVar5 + uVar7 * 0x10);
    fVar17 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar16 = pfVar1[2];
    fVar20 = pfVar1[3];
    fVar19 = fVar17 * fVar13 + fVar18 * fVar14 + fVar16 * fVar15 + param_4;
    fVar13 = fVar18;
    fVar14 = fVar17;
    fVar15 = fVar16;
    if (0.0 <= fVar12) {
      if (fVar19 < 0.0) {
        iVar4 = *(int *)(param_2 + 4);
        fVar12 = fVar12 / (fVar12 - fVar19);
        if (iVar4 == *(int *)(param_2 + 8)) {
          uVar8 = iVar4 << 1;
          if (iVar4 == 0) {
            uVar8 = 1;
          }
          if (iVar4 < (int)uVar8) {
            if (uVar8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = btAlignedAllocInternal
                                (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4,
                                 0x10);
              iVar4 = *(int *)(param_2 + 4);
            }
            if (0 < iVar4) {
              lVar5 = 0;
              lVar6 = (long)iVar4;
              do {
                lVar6 = lVar6 + -1;
                uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar3 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar3 + lVar5) = uVar9;
                lVar5 = lVar5 + 0x10;
              } while (lVar6 != 0);
            }
            if (*(void **)(param_2 + 0x10) != (void *)0x0) {
              if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                btAlignedFreeInternal(*(void **)(param_2 + 0x10));
              }
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            iVar4 = *(int *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar3;
            *(uint *)(param_2 + 8) = uVar8;
          }
        }
        pfVar1 = (float *)(*(long *)(param_2 + 0x10) + (long)iVar4 * 0x10);
        *pfVar1 = fVar11 + (fVar17 - fVar11) * fVar12;
        pfVar1[1] = fVar10 + (fVar18 - fVar10) * fVar12;
        pfVar1[2] = fVar21 + (fVar16 - fVar21) * fVar12;
        pfVar1[3] = 0.0;
        iVar4 = *(int *)(param_2 + 4) + 1;
        *(int *)(param_2 + 4) = iVar4;
        if (iVar4 == *(int *)(param_2 + 8)) {
          uVar8 = iVar4 * 2;
          if (iVar4 == 0) {
            uVar8 = 1;
          }
          if (iVar4 < (int)uVar8) {
            if (uVar8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = btAlignedAllocInternal
                                (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4,
                                 0x10);
              iVar4 = *(int *)(param_2 + 4);
            }
            if (0 < iVar4) {
              lVar5 = 0;
              lVar6 = (long)iVar4;
              do {
                lVar6 = lVar6 + -1;
                uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar3 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar3 + lVar5) = uVar9;
                lVar5 = lVar5 + 0x10;
              } while (lVar6 != 0);
            }
            goto LAB_0124e03c;
          }
        }
        goto LAB_0124e074;
      }
    }
    else {
      if (0.0 <= fVar19) {
        iVar4 = *(int *)(param_2 + 4);
        fVar12 = fVar12 / (fVar12 - fVar19);
        fVar14 = fVar11 + (fVar17 - fVar11) * fVar12;
        fVar13 = fVar10 + (fVar18 - fVar10) * fVar12;
        fVar15 = fVar21 + (fVar16 - fVar21) * fVar12;
        fVar20 = 0.0;
        if (iVar4 == *(int *)(param_2 + 8)) {
          uVar8 = iVar4 << 1;
          if (iVar4 == 0) {
            uVar8 = 1;
          }
          if (iVar4 < (int)uVar8) {
            if (uVar8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = btAlignedAllocInternal
                                (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4,
                                 0x10);
              iVar4 = *(int *)(param_2 + 4);
            }
            if (0 < iVar4) {
              lVar5 = 0;
              lVar6 = (long)iVar4;
              do {
                lVar6 = lVar6 + -1;
                uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar3 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar3 + lVar5) = uVar9;
                lVar5 = lVar5 + 0x10;
              } while (lVar6 != 0);
            }
            if (*(void **)(param_2 + 0x10) != (void *)0x0) {
              if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                btAlignedFreeInternal(*(void **)(param_2 + 0x10));
              }
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            iVar4 = *(int *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar3;
            *(uint *)(param_2 + 8) = uVar8;
          }
        }
      }
      else {
        iVar4 = *(int *)(param_2 + 4);
        if (iVar4 == *(int *)(param_2 + 8)) {
          uVar8 = iVar4 << 1;
          if (iVar4 == 0) {
            uVar8 = 1;
          }
          if (iVar4 < (int)uVar8) {
            if (uVar8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = btAlignedAllocInternal
                                (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4,
                                 0x10);
              iVar4 = *(int *)(param_2 + 4);
            }
            if (0 < iVar4) {
              lVar5 = 0;
              lVar6 = (long)iVar4;
              do {
                lVar6 = lVar6 + -1;
                uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar3 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar3 + lVar5) = uVar9;
                lVar5 = lVar5 + 0x10;
              } while (lVar6 != 0);
            }
LAB_0124e03c:
            if (*(void **)(param_2 + 0x10) != (void *)0x0) {
              if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                btAlignedFreeInternal(*(void **)(param_2 + 0x10));
              }
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            iVar4 = *(int *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar3;
            *(uint *)(param_2 + 8) = uVar8;
          }
        }
      }
LAB_0124e074:
      pfVar1 = (float *)(*(long *)(param_2 + 0x10) + (long)iVar4 * 0x10);
      *pfVar1 = fVar14;
      pfVar1[1] = fVar13;
      pfVar1[2] = fVar15;
      pfVar1[3] = fVar20;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == uVar2) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    fVar13 = *(float *)param_3;
    fVar14 = *(float *)(param_3 + 4);
    fVar15 = *(float *)(param_3 + 8);
    fVar10 = fVar18;
    fVar11 = fVar17;
    fVar21 = fVar16;
    fVar12 = fVar19;
  } while( true );
}

