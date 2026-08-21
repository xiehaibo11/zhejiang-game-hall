
long FUN_00c1c6dc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = (ulong)(*(uint *)(param_2 + 0x34) & *(uint *)(param_3 + 0xc)) * 0x18 +
          *(long *)(param_2 + 0x28);
  while( true ) {
    if (((int)((long)*(ulong *)(lVar1 + 8) >> 0x2f) == -5) &&
       (param_3 == (*(ulong *)(lVar1 + 8) & 0x7fffffffffff))) break;
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      lVar1 = FUN_00c1c458();
      return lVar1;
    }
  }
  return lVar1;
}

