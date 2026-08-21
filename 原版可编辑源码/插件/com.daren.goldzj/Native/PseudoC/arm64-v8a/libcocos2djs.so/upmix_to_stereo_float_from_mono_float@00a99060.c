
void upmix_to_stereo_float_from_mono_float(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 != 0) {
    if ((7 < param_3) && ((param_2 + param_3 <= param_1 || (param_1 + param_3 * 2 <= param_2)))) {
      uVar2 = param_3 & 0xfffffffffffffff8;
      puVar3 = (undefined8 *)(param_2 + 4);
      param_2 = param_2 + uVar2;
      puVar4 = param_1 + 8;
      uVar5 = uVar2;
      do {
        uVar8 = puVar3[-1];
        uVar7 = puVar3[-2];
        uVar10 = puVar3[1];
        uVar9 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 8;
        uVar6 = (undefined4)uVar7;
        puVar4[-8] = uVar6;
        puVar4[-7] = uVar6;
        uVar6 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar4[-6] = uVar6;
        puVar4[-5] = uVar6;
        uVar6 = (undefined4)uVar8;
        puVar4[-4] = uVar6;
        puVar4[-3] = uVar6;
        uVar6 = (undefined4)((ulong)uVar8 >> 0x20);
        puVar4[-2] = uVar6;
        puVar4[-1] = uVar6;
        uVar6 = (undefined4)uVar9;
        *puVar4 = uVar6;
        puVar4[1] = uVar6;
        uVar6 = (undefined4)((ulong)uVar9 >> 0x20);
        puVar4[2] = uVar6;
        puVar4[3] = uVar6;
        uVar6 = (undefined4)uVar10;
        puVar4[4] = uVar6;
        puVar4[5] = uVar6;
        uVar6 = (undefined4)((ulong)uVar10 >> 0x20);
        puVar4[6] = uVar6;
        puVar4[7] = uVar6;
        puVar4 = puVar4 + 0x10;
      } while (uVar5 != 0);
      bVar1 = uVar2 == param_3;
      param_1 = param_1 + uVar2 * 2;
      param_3 = param_3 - uVar2;
      if (bVar1) {
        return;
      }
    }
    do {
      uVar6 = *param_2;
      param_3 = param_3 - 1;
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_2 = param_2 + 1;
      param_1 = param_1 + 2;
    } while (param_3 != 0);
  }
  return;
}

