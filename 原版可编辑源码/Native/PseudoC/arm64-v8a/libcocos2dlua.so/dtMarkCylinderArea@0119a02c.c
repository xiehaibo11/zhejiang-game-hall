
/* dtMarkCylinderArea(dtTileCacheLayer&, float const*, float, float, float const*, float, float,
   unsigned char) */

undefined8
dtMarkCylinderArea(dtTileCacheLayer *param_1,float *param_2,float param_3,float param_4,
                  float *param_5,float param_6,float param_7,uchar param_8)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
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
  
  fVar13 = param_5[2];
  fVar15 = param_2[2];
  bVar2 = *(byte *)(*(long *)param_1 + 0x31);
  fVar12 = 1.0 / param_3;
  uVar6 = (uint)(fVar12 * ((fVar13 - param_6) - fVar15));
  if ((int)uVar6 < (int)(uint)bVar2) {
    fVar17 = *param_5;
    fVar19 = *param_2;
    bVar3 = *(byte *)(*(long *)param_1 + 0x30);
    uVar7 = (uint)(fVar12 * ((fVar17 - param_6) - fVar19));
    if ((int)uVar7 < (int)(uint)bVar3) {
      uVar10 = (uint)(fVar12 * ((fVar17 + param_6) - fVar19));
      uVar8 = (uint)(fVar12 * ((fVar13 + param_6) - fVar15));
      if (-1 < (int)(uVar8 | uVar10)) {
        uVar5 = (uint)bVar3;
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if ((int)uVar5 <= (int)uVar10) {
          uVar10 = uVar5 - 1;
        }
        if ((int)(uint)bVar2 <= (int)uVar8) {
          uVar8 = bVar2 - 1;
        }
        if ((int)uVar6 <= (int)uVar8) {
          fVar20 = param_5[1];
          fVar16 = param_2[1];
          fVar18 = param_6 / param_3 + 0.5;
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar5 = uVar6 * uVar5;
          uVar9 = (ulong)uVar6;
          do {
            if ((int)uVar7 <= (int)uVar10) {
              fVar11 = ((float)(int)uVar9 + 0.5) - fVar12 * (fVar13 - fVar15);
              uVar4 = (ulong)uVar7;
              do {
                fVar14 = ((float)(int)uVar4 + 0.5) - fVar12 * (fVar17 - fVar19);
                if (((fVar11 * fVar11 + fVar14 * fVar14 <= fVar18 * fVar18) &&
                    (bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + (ulong)uVar5 + uVar4),
                    (int)((1.0 / param_4) * (fVar20 - fVar16)) <= (int)(uint)bVar2)) &&
                   ((int)(uint)bVar2 <= (int)((1.0 / param_4) * ((fVar20 + param_7) - fVar16)))) {
                  *(uchar *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 + uVar4) = param_8;
                }
                bVar1 = (long)uVar4 < (long)(int)uVar10;
                uVar4 = uVar4 + 1;
              } while (bVar1);
            }
            uVar5 = uVar5 + bVar3;
            bVar1 = (long)uVar9 < (long)(int)uVar8;
            uVar9 = uVar9 + 1;
          } while (bVar1);
        }
      }
    }
  }
  return 0x40000000;
}

