
void FUN_010772b0(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if ((long)*(short *)(param_1 + 0x21e) != 0) {
    lVar1 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x21e),*(undefined8 *)(param_1 + 0x3c8));
    lVar2 = (ulong)(param_3 & 0xffff) * 0x10;
    *(long *)(*(long *)(param_2 + 0x10) + lVar2) =
         *(long *)(*(long *)(param_2 + 0x10) + lVar2) + lVar1;
  }
  if ((long)*(short *)(param_1 + 0x220) != 0) {
    lVar2 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x3c8));
    lVar1 = *(long *)(param_2 + 0x10) + (ulong)(param_3 & 0xffff) * 0x10;
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + lVar2;
  }
  return;
}

