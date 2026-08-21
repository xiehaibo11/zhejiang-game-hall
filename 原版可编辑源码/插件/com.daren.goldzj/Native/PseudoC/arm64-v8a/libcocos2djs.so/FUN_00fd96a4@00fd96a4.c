
bool FUN_00fd96a4(undefined8 param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) && (uVar5 = uVar4 & 0xfffffffffffc0000, (*(byte *)(uVar5 + 8) & 0x18) != 0)
     ) {
    puVar1 = (uint *)(*(long *)(uVar5 + 0x108) + (uVar4 - uVar5 >> 7 & 0x1ffffff) * 4);
    bVar3 = true;
    uVar2 = 1 << (ulong)((uint)(uVar4 - uVar5 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) != 0) {
      uVar2 = uVar2 << 1;
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = 1;
      }
      bVar3 = (puVar1[bVar3] & uVar2) != 0;
    }
    return bVar3;
  }
  return false;
}

