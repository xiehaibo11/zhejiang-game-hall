
void png_calculate_crc(long param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  bVar1 = (*(uint *)(param_1 + 0x168) & 0x800) == 0;
  if ((*(byte *)(param_1 + 0x253) & 0x20) != 0) {
    bVar1 = ((*(uint *)(param_1 + 0x168) ^ 0xffffffff) & 0x300) != 0;
  }
  if ((param_3 != 0) && (bVar1)) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x294);
    do {
      uVar3 = (uint)param_3;
      if (uVar3 == 0) {
        uVar3 = 0xffffffff;
      }
      uVar4 = (ulong)uVar3;
      uVar2 = crc32(uVar2,param_2,uVar4);
      param_3 = param_3 - uVar4;
      param_2 = param_2 + uVar4;
    } while (param_3 != 0);
    *(int *)(param_1 + 0x294) = (int)uVar2;
  }
  return;
}

