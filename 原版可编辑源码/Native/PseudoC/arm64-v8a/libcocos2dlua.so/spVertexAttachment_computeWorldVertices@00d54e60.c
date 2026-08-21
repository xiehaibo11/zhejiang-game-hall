
void spVertexAttachment_computeWorldVertices
               (long param_1,long param_2,int param_3,int param_4,long param_5,int param_6,
               uint param_7)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  
  lVar9 = *(long *)(param_2 + 8);
  lVar14 = *(long *)(param_2 + 0x38);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar15 = *(long *)(param_1 + 0x38);
  iVar3 = param_6 + param_4;
  if (lVar8 == 0) {
    if (*(int *)(param_2 + 0x34) < 1) {
      lVar14 = lVar15;
    }
    if (0 < param_4) {
      fVar21 = *(float *)(lVar9 + 0x6c);
      fVar17 = *(float *)(lVar9 + 0x78);
      lVar8 = (long)param_6;
      pfVar5 = (float *)(lVar14 + (long)param_3 * 4 + 4);
      pfVar6 = (float *)(param_5 + (long)param_6 * 4 + 4);
      do {
        fVar19 = pfVar5[-1];
        fVar20 = *pfVar5;
        lVar8 = lVar8 + (int)param_7;
        pfVar5 = pfVar5 + 2;
        pfVar6[-1] = fVar21 + fVar19 * *(float *)(lVar9 + 100) + fVar20 * *(float *)(lVar9 + 0x68);
        *pfVar6 = fVar17 + fVar19 * *(float *)(lVar9 + 0x70) + fVar20 * *(float *)(lVar9 + 0x74);
        pfVar6 = (float *)((long)pfVar6 +
                          (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
      } while (lVar8 < iVar3);
    }
  }
  else {
    if (param_3 < 1) {
      iVar12 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
      iVar11 = 0;
      do {
        iVar4 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        iVar11 = iVar11 + 2;
                    /* try { // try from 00d54ea4 to 00e54ee7 has its CatchHandler @ 00d54fd0 */
        uVar10 = (ulong)((int)uVar10 + iVar4 + 1);
        iVar12 = iVar4 + iVar12;
      } while (iVar11 < param_3);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x10);
    iVar11 = iVar12 * 3;
    if (*(int *)(param_2 + 0x34) == 0) {
      if (0 < param_4) {
        lVar14 = (long)param_6;
        do {
          iVar12 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
          uVar2 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar2;
          if (iVar12 < 1) {
            uVar16 = 0;
          }
          else {
            uVar10 = (ulong)(int)uVar2;
            uVar16 = 0;
            pfVar5 = (float *)(lVar15 + 8 + (long)iVar11 * 4);
            do {
              lVar13 = uVar10 * 4;
              uVar18 = *(undefined8 *)(pfVar5 + -2);
              uVar10 = uVar10 + 1;
              lVar13 = *(long *)(lVar9 + (long)*(int *)(lVar8 + lVar13) * 8);
              uVar22 = NEON_rev64(uVar18,4);
              iVar11 = iVar11 + 3;
              uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                (*(float *)(lVar13 + 0x78) +
                                (float)((ulong)uVar18 >> 0x20) * *(float *)(lVar13 + 0x74) +
                                (float)((ulong)uVar22 >> 0x20) * *(float *)(lVar13 + 0x70)) *
                                *pfVar5,(float)uVar16 +
                                        (*(float *)(lVar13 + 0x6c) +
                                        (float)uVar18 * *(float *)(lVar13 + 100) +
                                        (float)uVar22 * *(float *)(lVar13 + 0x68)) * *pfVar5);
              pfVar5 = pfVar5 + 3;
            } while ((long)uVar10 < (long)(int)(iVar12 + uVar2));
          }
          lVar13 = lVar14 * 4;
          lVar14 = lVar14 + (int)param_7;
          *(undefined8 *)(param_5 + lVar13) = uVar16;
        } while (lVar14 < iVar3);
      }
    }
    else if (0 < param_4) {
                    /* try { // try from 00d54f54 to 00e54f5b has its CatchHandler @ 00d54fc8 */
      iVar12 = iVar12 << 1;
      lVar13 = (long)param_6;
                    /* try { // try from 00d54f5c to 00e54fdf has its CatchHandler @ 00d54bc4 */
      do {
        iVar4 = *(int *)(lVar8 + (long)(int)uVar10 * 4);
        uVar2 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar2;
        if (iVar4 < 1) {
          uVar16 = 0;
        }
        else {
          uVar10 = (ulong)(int)uVar2;
          pfVar5 = (float *)(lVar14 + 4 + (long)iVar12 * 4);
          uVar16 = 0;
          pfVar6 = (float *)(lVar15 + 8 + (long)iVar11 * 4);
          do {
            pfVar1 = pfVar5 + -1;
            fVar21 = *pfVar5;
            lVar7 = *(long *)(lVar9 + (long)*(int *)(lVar8 + uVar10 * 4) * 8);
            uVar10 = uVar10 + 1;
                    /* catch() { ... } // from try @ 00d54f54 with catch @ 00d54fc8 */
                    /* catch() { ... } // from try @ 00d54ce0 with catch @ 00d54fcc */
                    /* catch() { ... } // from try @ 00d54ea4 with catch @ 00d54fd0 */
            iVar12 = iVar12 + 2;
            pfVar5 = pfVar5 + 2;
            uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                              (*(float *)(lVar7 + 0x78) +
                              *(float *)(lVar7 + 0x70) * (pfVar6[-2] + *pfVar1) +
                              *(float *)(lVar7 + 0x74) * (pfVar6[-1] + fVar21)) * *pfVar6,
                              (float)uVar16 +
                              (*(float *)(lVar7 + 0x6c) +
                              *(float *)(lVar7 + 100) * (pfVar6[-2] + *pfVar1) +
                              *(float *)(lVar7 + 0x68) * (pfVar6[-1] + fVar21)) * *pfVar6);
            iVar11 = iVar11 + 3;
            pfVar6 = pfVar6 + 3;
          } while ((long)uVar10 < (long)(int)(iVar4 + uVar2));
        }
        lVar7 = lVar13 * 4;
        lVar13 = lVar13 + (int)param_7;
        *(undefined8 *)(param_5 + lVar7) = uVar16;
      } while (lVar13 < iVar3);
    }
  }
  return;
}

