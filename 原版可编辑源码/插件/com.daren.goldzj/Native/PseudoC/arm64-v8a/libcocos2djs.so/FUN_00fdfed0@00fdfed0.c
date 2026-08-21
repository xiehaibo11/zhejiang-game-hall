
ulong FUN_00fdfed0(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = param_2 & 0xfffffffffffc0000;
  if ((*(byte *)(uVar4 + 8) & 0x18) != 0) {
    puVar1 = (uint *)(*(long *)(uVar4 + 0x108) + (param_2 - uVar4 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(param_2 - uVar4 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) != 0) {
      uVar2 = uVar2 << 1;
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = 1;
      }
      if ((puVar1[bVar3] & uVar2) == 0) {
        return param_2;
      }
    }
    param_2 = 0;
  }
  return param_2;
}

