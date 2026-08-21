
void FUN_00aa68f8(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x106);
  if ((uVar1 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x106) = uVar1 & 0xffffbfff;
    plVar2 = (long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0xe8)
    ;
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      if (lVar3 == param_1) {
        *plVar2 = *(long *)(param_1 + 0x48);
        break;
      }
      plVar2 = (long *)(lVar3 + 0x48);
      lVar3 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

