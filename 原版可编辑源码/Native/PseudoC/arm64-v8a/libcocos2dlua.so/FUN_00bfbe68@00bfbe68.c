
void FUN_00bfbe68(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00c1a314(param_1,((ulong)param_2 + 6) * 8);
  *(char *)(lVar1 + 0xb) = (char)param_2;
  *(undefined1 *)(lVar1 + 9) = 8;
  *(undefined1 *)(lVar1 + 10) = 1;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(long *)(lVar1 + 0x20) = lVar2 + 0x154;
  return;
}

