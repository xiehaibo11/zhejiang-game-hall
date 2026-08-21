
ulong spSkeletonClipping_clipStart(undefined8 *param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_1[7] == 0) {
    param_1[7] = param_3;
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    lVar8 = spFloatArray_setSize(param_1[1],uVar2);
    spVertexAttachment_computeWorldVertices(param_3,param_2,0,uVar2,*(undefined8 *)(lVar8 + 8),0,2);
    puVar16 = (uint *)param_1[1];
    uVar3 = *puVar16;
    pfVar10 = *(float **)(puVar16 + 2);
                    /* try { // try from 00d67104 to 00e6710b has its CatchHandler @ 00d6766c */
    fVar18 = pfVar10[(int)(uVar3 - 2)] * pfVar10[1] - *pfVar10 * pfVar10[(int)(uVar3 - 1)];
    if (0 < (int)((long)(int)uVar3 + -3)) {
                    /* try { // try from 00d67120 to 00e67153 has its CatchHandler @ 00d67708 */
      lVar8 = 0;
      fVar19 = *pfVar10;
      do {
        lVar5 = lVar8 + 2;
        lVar6 = lVar8 + 3;
        lVar7 = lVar8 + 1;
        lVar8 = lVar8 + 2;
        fVar18 = fVar18 + (fVar19 * pfVar10[lVar6] - pfVar10[lVar7] * pfVar10[lVar5]);
        fVar19 = pfVar10[lVar5];
      } while (lVar8 < (long)(int)uVar3 + -3);
    }
    if ((1 < (int)uVar3) && (0.0 <= fVar18)) {
      uVar4 = uVar3 - 1;
      uVar15 = 0;
      uVar11 = -(ulong)(uVar3 - 2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 - 2) << 2;
      do {
        pfVar1 = pfVar10 + uVar15;
        uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        fVar18 = *pfVar1;
        fVar19 = pfVar1[1];
        *pfVar1 = *(float *)((long)pfVar10 + uVar11);
        uVar15 = uVar15 + 2;
        uVar4 = uVar4 - 2;
        pfVar1[1] = *(float *)((long)pfVar10 + uVar13);
        *(float *)((long)pfVar10 + uVar11) = fVar18;
                    /* try { // try from 00d671a0 to 00e671ab has its CatchHandler @ 00d67720 */
        uVar11 = uVar11 - 8;
        *(float *)((long)pfVar10 + uVar13) = fVar19;
      } while (uVar15 < uVar3 >> 1);
    }
    uVar17 = *param_1;
    uVar9 = spTriangulator_triangulate(uVar17,puVar16);
    puVar16 = (uint *)spTriangulator_decompose(uVar17,puVar16,uVar9);
    param_1[8] = puVar16;
    uVar15 = (ulong)*puVar16;
    if (0 < (int)*puVar16) {
      uVar11 = 0;
      do {
                    /* try { // try from 00d6720c to 00e67223 has its CatchHandler @ 00d676f4 */
        puVar16 = *(uint **)(*(long *)(puVar16 + 2) + uVar11 * 8);
        uVar3 = *puVar16;
        pfVar10 = *(float **)(puVar16 + 2);
                    /* try { // try from 00d67224 to 00e67237 has its CatchHandler @ 00d676ec */
        fVar18 = *pfVar10;
                    /* try { // try from 00d6723c to 00e67243 has its CatchHandler @ 00d67660 */
                    /* try { // try from 00d67244 to 00e6724f has its CatchHandler @ 00d67658 */
        fVar19 = pfVar10[(int)(uVar3 - 2)] * pfVar10[1] - fVar18 * pfVar10[(int)(uVar3 - 1)];
        if (0 < (int)((long)(int)uVar3 + -3)) {
          lVar8 = 0;
          fVar20 = fVar18;
          do {
            lVar5 = lVar8 + 2;
                    /* try { // try from 00d67258 to 00e67263 has its CatchHandler @ 00d67650 */
            lVar6 = lVar8 + 3;
            lVar7 = lVar8 + 1;
            lVar8 = lVar8 + 2;
                    /* try { // try from 00d6726c to 00e6728b has its CatchHandler @ 00d67654 */
            fVar19 = fVar19 + (fVar20 * pfVar10[lVar6] - pfVar10[lVar7] * pfVar10[lVar5]);
            fVar20 = pfVar10[lVar5];
          } while (lVar8 < (long)(int)uVar3 + -3);
        }
        if ((1 < (int)uVar3) && (0.0 <= fVar19)) {
          uVar4 = uVar3 - 1;
                    /* try { // try from 00d6729c to 00e672b3 has its CatchHandler @ 00d67600 */
          uVar13 = 0;
          uVar12 = -(ulong)(uVar3 - 2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 - 2) << 2;
          do {
            pfVar1 = pfVar10 + uVar13;
            uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            fVar18 = *pfVar1;
            fVar19 = pfVar1[1];
            *pfVar1 = *(float *)((long)pfVar10 + uVar12);
            uVar13 = uVar13 + 2;
            uVar4 = uVar4 - 2;
            pfVar1[1] = *(float *)((long)pfVar10 + uVar14);
            *(float *)((long)pfVar10 + uVar12) = fVar18;
            uVar12 = uVar12 - 8;
            *(float *)((long)pfVar10 + uVar14) = fVar19;
          } while (uVar13 < uVar3 >> 1);
          fVar18 = *pfVar10;
        }
        spFloatArray_add(fVar18,puVar16);
                    /* try { // try from 00d671f4 to 00e6720b has its CatchHandler @ 00d67704 */
        spFloatArray_add(*(undefined4 *)(*(long *)(puVar16 + 2) + 4),puVar16);
        puVar16 = (uint *)param_1[8];
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar15);
      uVar15 = (ulong)*puVar16;
    }
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
}

