
void FUN_011b42ec(float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                 float param_6,float param_7,float param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_x11;
  ulong in_x12;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_x14;
  ulong uVar9;
  long in_x15;
  uint uVar10;
  long unaff_x19;
  float *unaff_x20;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s16;
  float in_s17;
  float in_s19;
  float in_s21;
  float in_s22;
  float in_s25;
  
  uVar1 = (uint)in_x14;
  uVar10 = uVar1 * 4;
  uVar6 = -(in_x12 >> 0x1f & 1) & 0xfffffffc00000000 | (in_x12 & 0xffffffff) << 2;
  lVar7 = in_x14 * 0x10;
  fVar15 = in_s22 + in_s25;
  param_1 = param_1 + param_3;
  param_2 = param_2 + in_s21;
  fVar12 = in_s17 + in_s19;
  param_4 = param_4 + param_6;
  fVar13 = param_7 + param_8 + in_s16;
  uVar4 = -(ulong)((uVar1 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)(uVar10 | 1) << 2;
  uVar9 = -(ulong)((uVar1 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)(uVar10 | 2) << 2;
  *(float *)(in_x15 + uVar6) = fVar15;
  *(float *)(in_x15 + uVar6 + 4) = param_2;
  *(float *)(in_x15 + uVar6 + 8) = param_4;
  *(float *)(in_x15 + lVar7) = param_1;
  *(float *)(in_x15 + uVar4) = fVar12;
  *(float *)(in_x15 + uVar9) = fVar13;
  *(float *)(in_x11 + uVar6) = -fVar15;
  *(float *)(in_x11 + uVar6 + 4) = -param_2;
  *(float *)(in_x11 + uVar6 + 8) = -param_4;
  *(float *)(in_x11 + lVar7) = -param_1;
  *(float *)(in_x11 + uVar4) = -fVar12;
  *(float *)(in_x11 + uVar9) = -fVar13;
  lVar5 = *(long *)(unaff_x20 + 0xc);
  fVar14 = *unaff_x20 * *(float *)(unaff_x19 + 0x1cc);
  *(float *)(lVar5 + uVar6) =
       fVar14 * (fVar15 * *(float *)(unaff_x19 + 0x1e4) + param_2 * *(float *)(unaff_x19 + 0x1e8) +
                param_4 * *(float *)(unaff_x19 + 0x1ec));
  *(float *)(lVar5 + lVar7) =
       fVar14 * (param_1 * *(float *)(unaff_x19 + 0x1e4) + fVar12 * *(float *)(unaff_x19 + 0x1e8) +
                fVar13 * *(float *)(unaff_x19 + 0x1ec));
  lVar3 = *(long *)(unaff_x20 + 0x10);
  *(undefined4 *)(lVar3 + uVar6) = 0xff7fffff;
  lVar2 = *(long *)(unaff_x20 + 0x12);
  *(undefined4 *)(lVar2 + uVar6) = 0x7f7fffff;
  *(undefined4 *)(lVar3 + lVar7) = 0xff7fffff;
  fVar12 = unaff_x20[10];
  *(undefined4 *)(lVar2 + in_x14 * 0x10) = 0x7f7fffff;
  uVar10 = (int)fVar12 + uVar10;
  if (*(char *)(unaff_x19 + 0x225) != '\0') {
    fVar13 = *(float *)(unaff_x19 + 0x1cc);
    lVar7 = *(long *)(unaff_x20 + 4);
    lVar8 = *(long *)(unaff_x20 + 8);
    uVar4 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
    fVar12 = *(float *)(unaff_x19 + 500) * fVar13;
    fVar14 = fVar13 * *(float *)(unaff_x19 + 0x1f8);
    fVar15 = fVar13 * *(float *)(unaff_x19 + 0x1fc);
    *(float *)(lVar7 + uVar4) = fVar13 * fVar12;
    *(float *)(lVar7 + uVar4 + 4) = fVar13 * fVar14;
    *(float *)(lVar7 + uVar4 + 8) = fVar13 * fVar15;
    *(float *)(lVar8 + uVar4) = -(fVar13 * fVar12);
    *(float *)(lVar8 + uVar4 + 4) = -(fVar13 * fVar14);
    *(float *)(lVar8 + uVar4 + 8) = -(fVar13 * fVar15);
    *(float *)(lVar5 + uVar4) =
         *unaff_x20 * *(float *)(unaff_x19 + 0x1c8) * *(float *)(unaff_x19 + 0x214);
    lVar5 = (long)(int)uVar10;
    if ((*(byte *)(unaff_x19 + 0x268) >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(unaff_x20 + 0xe) + lVar5 * 4) = *(undefined4 *)(unaff_x19 + 0x274);
    }
    if (*(float *)(unaff_x19 + 0x1dc) <= 0.0) {
      uVar11 = 0x7f7fffff;
      *(undefined4 *)(lVar3 + lVar5 * 4) = 0xff7fffff;
    }
    else if (*(float *)(unaff_x19 + 0x214) <= 0.0) {
      *(undefined4 *)(lVar3 + lVar5 * 4) = 0xff7fffff;
      uVar11 = 0;
    }
    else {
      uVar11 = 0x7f7fffff;
      *(undefined4 *)(lVar3 + lVar5 * 4) = 0;
    }
    *(undefined4 *)(lVar2 + lVar5 * 4) = uVar11;
  }
  return;
}

