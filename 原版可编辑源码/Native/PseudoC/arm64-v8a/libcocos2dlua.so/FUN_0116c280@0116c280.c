
undefined1  [16] FUN_0116c280(float param_1,float param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((int)*(uint *)(param_3 + 0x8c) < 1) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    pfVar5 = (float *)(*(long *)(param_3 + 0x90) + 4);
    fVar6 = -INFINITY;
    do {
      pfVar1 = pfVar5 + -1;
      fVar7 = *pfVar5;
      pfVar5 = pfVar5 + 4;
      fVar7 = *pfVar1 * param_1 + param_2 * fVar7;
      uVar2 = (uint)uVar4;
      if (fVar7 <= fVar6) {
        uVar2 = (uint)uVar3;
      }
      uVar3 = (ulong)uVar2;
      uVar4 = uVar4 + 1;
      fVar6 = fVar7;
    } while (*(uint *)(param_3 + 0x8c) != uVar4);
  }
  auVar8._0_8_ = *(undefined8 *)
                  (*(long *)(param_3 + 0x90) + (-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4))
  ;
  auVar8._8_8_ = uVar3;
  return auVar8;
}

