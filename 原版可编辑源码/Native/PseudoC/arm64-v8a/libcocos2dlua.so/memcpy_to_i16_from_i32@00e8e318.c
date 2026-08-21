
void memcpy_to_i16_from_i32(undefined2 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0) {
    if (7 < param_3) {
      uVar4 = param_3 & 0xfffffffffffffff8;
      puVar5 = (undefined8 *)(param_1 + 4);
      param_1 = param_1 + uVar4;
      puVar6 = (undefined8 *)(param_2 + 0x10);
      uVar7 = uVar4;
      do {
        puVar1 = puVar6 + -2;
        puVar2 = puVar6 + -1;
        uVar9 = puVar6[1];
        uVar8 = *puVar6;
        uVar7 = uVar7 - 8;
        puVar6 = puVar6 + 4;
        puVar5[-1] = CONCAT26((short)((ulong)*puVar2 >> 0x30),
                              CONCAT24((short)((ulong)*puVar2 >> 0x10),
                                       CONCAT22((short)((ulong)*puVar1 >> 0x30),
                                                (short)((ulong)*puVar1 >> 0x10))));
        *puVar5 = CONCAT26((short)((ulong)uVar9 >> 0x30),
                           CONCAT24((short)((ulong)uVar9 >> 0x10),
                                    CONCAT22((short)((ulong)uVar8 >> 0x30),
                                             (short)((ulong)uVar8 >> 0x10))));
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      bVar3 = uVar4 == param_3;
      param_3 = param_3 - uVar4;
      param_2 = param_2 + uVar4 * 4;
      if (bVar3) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = *(undefined2 *)(param_2 + 2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}

