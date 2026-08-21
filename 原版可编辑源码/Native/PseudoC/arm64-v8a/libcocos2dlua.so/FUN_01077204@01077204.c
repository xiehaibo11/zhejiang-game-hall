
void FUN_01077204(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((long)*(short *)(param_1 + 0x21e) != 0) {
    lVar1 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x21e),*(undefined8 *)(param_1 + 0x3c8));
    uVar3 = (ulong)(param_3 & 0xffff);
    *(long *)(*(long *)(param_2 + 0x18) + uVar3 * 0x10) =
         *(long *)(*(long *)(param_2 + 0x18) + uVar3 * 0x10) + lVar1;
    *(byte *)(*(long *)(param_2 + 0x28) + uVar3) = *(byte *)(*(long *)(param_2 + 0x28) + uVar3) | 8;
  }
  if ((long)*(short *)(param_1 + 0x220) != 0) {
    lVar2 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x3c8));
    uVar3 = (ulong)(param_3 & 0xffff);
    lVar1 = *(long *)(param_2 + 0x18) + uVar3 * 0x10;
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + lVar2;
    *(byte *)(*(long *)(param_2 + 0x28) + uVar3) =
         *(byte *)(*(long *)(param_2 + 0x28) + uVar3) | 0x10;
  }
  return;
}

