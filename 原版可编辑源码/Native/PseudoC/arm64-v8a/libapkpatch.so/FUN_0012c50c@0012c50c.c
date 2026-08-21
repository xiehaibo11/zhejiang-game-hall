
undefined8 FUN_0012c50c(char *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (4 < param_3) {
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 < 0x1001) {
      uVar1 = 0x1000;
    }
    *(uint *)(param_1 + 4) = uVar1;
    bVar2 = *param_2;
    if (bVar2 < 0xe1) {
      uVar3 = (uint)bVar2 * 0x6d;
      uVar1 = bVar2 / 9;
      *param_1 = bVar2 - ((char)uVar1 * '\b' + bVar2 / 9);
      param_1[2] = (char)(((uint)bVar2 - (uVar3 >> 8) >> 1 & 0x7f) + (uVar3 >> 8) >> 5);
      param_1[1] = (char)uVar1 - ((char)(uVar1 / 5) * '\x04' + (char)(uVar1 / 5));
      return 0;
    }
  }
  return 4;
}

