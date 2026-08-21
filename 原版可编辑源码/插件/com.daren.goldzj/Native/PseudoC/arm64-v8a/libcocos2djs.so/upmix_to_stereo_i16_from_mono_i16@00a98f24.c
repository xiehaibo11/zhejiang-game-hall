
void upmix_to_stereo_i16_from_mono_i16(undefined2 *param_1,undefined2 *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined2 uVar7;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 != 0) {
    if ((0xf < param_3) && ((param_2 + param_3 <= param_1 || (param_1 + param_3 * 2 <= param_2)))) {
      uVar2 = param_3 & 0xfffffffffffffff0;
      puVar3 = (undefined8 *)(param_2 + 8);
      param_2 = param_2 + uVar2;
      puVar4 = param_1 + 0x10;
      uVar5 = uVar2;
      do {
        uVar8 = puVar3[-1];
        uVar6 = puVar3[-2];
        uVar10 = puVar3[1];
        uVar9 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 0x10;
        puVar4[-0x10] = (short)uVar6;
        puVar4[-0xf] = (short)uVar6;
        uVar7 = (undefined2)((ulong)uVar6 >> 0x10);
        puVar4[-0xe] = uVar7;
        puVar4[-0xd] = uVar7;
        uVar7 = (undefined2)((ulong)uVar6 >> 0x20);
        puVar4[-0xc] = uVar7;
        puVar4[-0xb] = uVar7;
        uVar7 = (undefined2)((ulong)uVar6 >> 0x30);
        puVar4[-10] = uVar7;
        puVar4[-9] = uVar7;
        puVar4[-8] = (short)uVar8;
        puVar4[-7] = (short)uVar8;
        uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
        puVar4[-6] = uVar7;
        puVar4[-5] = uVar7;
        uVar7 = (undefined2)((ulong)uVar8 >> 0x20);
        puVar4[-4] = uVar7;
        puVar4[-3] = uVar7;
        uVar7 = (undefined2)((ulong)uVar8 >> 0x30);
        puVar4[-2] = uVar7;
        puVar4[-1] = uVar7;
        *puVar4 = (short)uVar9;
        puVar4[1] = (short)uVar9;
        uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
        puVar4[2] = uVar7;
        puVar4[3] = uVar7;
        uVar7 = (undefined2)((ulong)uVar9 >> 0x20);
        puVar4[4] = uVar7;
        puVar4[5] = uVar7;
        uVar7 = (undefined2)((ulong)uVar9 >> 0x30);
        puVar4[6] = uVar7;
        puVar4[7] = uVar7;
        puVar4[8] = (short)uVar10;
        puVar4[9] = (short)uVar10;
        uVar7 = (undefined2)((ulong)uVar10 >> 0x10);
        puVar4[10] = uVar7;
        puVar4[0xb] = uVar7;
        uVar7 = (undefined2)((ulong)uVar10 >> 0x20);
        puVar4[0xc] = uVar7;
        puVar4[0xd] = uVar7;
        uVar7 = (undefined2)((ulong)uVar10 >> 0x30);
        puVar4[0xe] = uVar7;
        puVar4[0xf] = uVar7;
        puVar4 = puVar4 + 0x20;
      } while (uVar5 != 0);
      bVar1 = uVar2 == param_3;
      param_1 = param_1 + uVar2 * 2;
      param_3 = param_3 - uVar2;
      if (bVar1) {
        return;
      }
    }
    do {
      uVar7 = *param_2;
      param_3 = param_3 - 1;
      *param_1 = uVar7;
      param_1[1] = uVar7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 2;
    } while (param_3 != 0);
  }
  return;
}

