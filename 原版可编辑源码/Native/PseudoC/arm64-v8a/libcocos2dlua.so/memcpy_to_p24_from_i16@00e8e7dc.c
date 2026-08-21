
void memcpy_to_p24_from_i16(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    if ((7 < param_3) &&
       (((undefined1 *)((long)param_2 + param_3 * 2) <= param_1 ||
        (param_1 + param_3 * 3 <= param_2)))) {
      uVar4 = param_3 & 0xfffffffffffffff8;
      puVar1 = param_1 + uVar4 * 3;
      puVar3 = param_2;
      uVar5 = uVar4;
      do {
        uVar7 = puVar3[1];
        uVar6 = *puVar3;
        uVar5 = uVar5 - 8;
        *param_1 = 0;
        param_1[1] = (char)uVar6;
        param_1[2] = (char)((ulong)uVar6 >> 8);
        param_1[3] = 0;
        param_1[4] = (char)((ulong)uVar6 >> 0x10);
        param_1[5] = (char)((ulong)uVar6 >> 0x18);
        param_1[6] = 0;
        param_1[7] = (char)((ulong)uVar6 >> 0x20);
        param_1[8] = (char)((ulong)uVar6 >> 0x28);
        param_1[9] = 0;
        param_1[10] = (char)((ulong)uVar6 >> 0x30);
        param_1[0xb] = (char)((ulong)uVar6 >> 0x38);
        param_1[0xc] = 0;
        param_1[0xd] = (char)uVar7;
        param_1[0xe] = (char)((ulong)uVar7 >> 8);
        param_1[0xf] = 0;
        param_1[0x10] = (char)((ulong)uVar7 >> 0x10);
        param_1[0x11] = (char)((ulong)uVar7 >> 0x18);
        param_1[0x12] = 0;
        param_1[0x13] = (char)((ulong)uVar7 >> 0x20);
        param_1[0x14] = (char)((ulong)uVar7 >> 0x28);
        param_1[0x15] = 0;
        param_1[0x16] = (char)((ulong)uVar7 >> 0x30);
        param_1[0x17] = (char)((ulong)uVar7 >> 0x38);
        param_1 = param_1 + 0x18;
        puVar3 = puVar3 + 2;
      } while (uVar5 != 0);
      bVar2 = uVar4 == param_3;
      param_3 = param_3 - uVar4;
      param_2 = (undefined8 *)((long)param_2 + uVar4 * 2);
      param_1 = puVar1;
      if (bVar2) {
        return;
      }
    }
    do {
      *param_1 = 0;
      param_3 = param_3 - 1;
      param_1[1] = *(undefined1 *)param_2;
      param_1[2] = *(undefined1 *)((long)param_2 + 1);
      param_2 = (undefined8 *)((long)param_2 + 2);
      param_1 = param_1 + 3;
    } while (param_3 != 0);
  }
  return;
}

