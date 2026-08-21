
ulong FUN_01798c50(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  do {
    plVar1 = (long *)*param_1;
    if (*(short *)(*plVar1 + 0x10) != 0xde) {
      while (*(short *)(*param_3 + 0x10) == 0xde) {
        plVar3 = param_3 + 4;
        if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
          plVar3 = (long *)(*plVar3 + 0x10);
        }
        param_3 = (long *)*plVar3;
      }
      return (ulong)(plVar1 == param_3);
    }
    param_1 = plVar1 + 4;
  } while ((~*(uint *)((long)plVar1 + 0x14) & 0xf000000) != 0);
  uVar2 = FUN_01798c50(*param_1 + 0x10);
  return uVar2;
}

