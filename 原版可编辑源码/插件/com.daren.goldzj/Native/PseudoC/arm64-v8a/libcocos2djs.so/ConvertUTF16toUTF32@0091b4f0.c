
undefined4
ConvertUTF16toUTF32(undefined8 *param_1,ushort *param_2,undefined8 *param_3,uint *param_4,
                   int param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  
  puVar6 = (ushort *)*param_1;
  puVar4 = (uint *)*param_3;
  if (puVar6 < param_2) {
    do {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      uVar8 = (uint)uVar2;
      uVar1 = uVar2 & 0xfc00;
      if (uVar1 == 0xd800) {
        if (param_2 <= puVar7) {
          uVar3 = 1;
          goto LAB_0091b5a8;
        }
        if (*puVar7 >> 10 == 0x37) {
          uVar8 = (uint)*puVar7 + (uint)uVar2 * 0x400 + 0xfca02400;
          puVar7 = puVar6 + 2;
        }
        else if (param_5 == 0) goto LAB_0091b580;
      }
      else if ((param_5 == 0) && (uVar1 == 0xdc00)) {
LAB_0091b580:
        uVar3 = 3;
        goto LAB_0091b5a8;
      }
      if (param_4 <= puVar4) {
        uVar3 = 2;
        goto LAB_0091b5a8;
      }
      puVar5 = puVar4 + 1;
      *puVar4 = uVar8;
      puVar4 = puVar5;
      puVar6 = puVar7;
    } while (puVar7 < param_2);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_0091b5a8:
  *param_1 = puVar6;
  *param_3 = puVar4;
  return uVar3;
}

