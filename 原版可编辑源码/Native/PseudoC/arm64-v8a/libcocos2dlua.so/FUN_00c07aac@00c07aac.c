
long * FUN_00c07aac(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1[0x12] + (ulong)*(uint *)(*(long *)(*param_1 + 0x18) + 8) * 0x18);
  while( true ) {
    if ((long *)(param_1[0x12] + (ulong)*(uint *)((long)param_1 + 0x9c) * 0x18) <= plVar1) {
      return (long *)0x0;
    }
    if ((param_2 == *plVar1) && ((*(byte *)((long)plVar1 + 0x11) >> 2 & 1) != 0)) break;
    plVar1 = plVar1 + 3;
  }
  return plVar1;
}

