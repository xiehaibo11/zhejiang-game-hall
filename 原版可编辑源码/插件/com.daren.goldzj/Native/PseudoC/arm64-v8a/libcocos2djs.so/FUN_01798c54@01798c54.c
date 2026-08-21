
ulong FUN_01798c54(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  while( true ) {
    if (*(short *)(*param_1 + 0x10) != 0xde) {
      while (*(short *)(*param_2 + 0x10) == 0xde) {
        plVar2 = param_2 + 4;
        if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
          plVar2 = (long *)(*plVar2 + 0x10);
        }
        param_2 = (long *)*plVar2;
      }
      return (ulong)(param_1 == param_2);
    }
    if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) break;
    param_1 = (long *)param_1[4];
  }
  uVar1 = FUN_01798c50(param_1[4] + 0x10);
  return uVar1;
}

