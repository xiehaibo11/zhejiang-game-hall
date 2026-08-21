
undefined4
ConvertUTF32toUTF16(undefined8 *param_1,uint *param_2,undefined8 *param_3,short *param_4,int param_5
                   )

{
  uint uVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  psVar3 = (short *)*param_3;
  if (puVar5 < param_2) {
    uVar2 = 0;
    do {
      if (param_4 <= psVar3) {
LAB_0101f51c:
        uVar2 = 2;
        break;
      }
      puVar6 = puVar5 + 1;
      uVar1 = *puVar5;
      if (uVar1 >> 0x10 == 0) {
        if (uVar1 >> 0xb == 0x1b) {
          if (param_5 == 0) {
            uVar2 = 3;
            break;
          }
LAB_0101f4d4:
          *psVar3 = -3;
          psVar4 = psVar3 + 1;
        }
        else {
          *psVar3 = (short)uVar1;
          psVar4 = psVar3 + 1;
        }
      }
      else if (uVar1 < 0x110000) {
        if (param_4 <= psVar3 + 1) goto LAB_0101f51c;
        psVar4 = psVar3 + 2;
        *psVar3 = (short)(uVar1 - 0x10000 >> 10) + -0x2800;
        psVar3[1] = (ushort)(uVar1 - 0x10000) & 0x3ff | 0xdc00;
      }
      else {
        if (param_5 != 0) goto LAB_0101f4d4;
        uVar2 = 3;
        psVar4 = psVar3;
      }
      psVar3 = psVar4;
      puVar5 = puVar6;
    } while (puVar6 < param_2);
  }
  else {
    uVar2 = 0;
  }
  *param_1 = puVar5;
  *param_3 = psVar3;
  return uVar2;
}

