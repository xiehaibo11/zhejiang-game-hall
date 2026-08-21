
long * FUN_00c18d50(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  bVar1 = *(byte *)(param_1 + 0x30);
  for (; (plVar2 != (long *)0x0 && (param_3 != 0)); param_3 = param_3 + -1) {
    if (*(char *)((long)plVar2 + 9) == '\x06') {
      FUN_00c18d50(param_1,plVar2 + 8,0xffffffff);
    }
    if ((byte)((bVar1 ^ 3) & (*(byte *)(plVar2 + 1) ^ 3)) == 0) {
      *param_2 = *plVar2;
      if ((long *)*(long *)(param_1 + 0x38) == plVar2) {
        *(long *)(param_1 + 0x38) = *plVar2;
      }
      (*(code *)(&PTR_FUN_01697440)[*(byte *)((long)plVar2 + 9) - 4])(param_1,plVar2);
    }
    else {
      *(byte *)(plVar2 + 1) = *(byte *)(param_1 + 0x30) & 3 | *(byte *)(plVar2 + 1) & 0xf8;
      param_2 = plVar2;
    }
    plVar2 = (long *)*param_2;
  }
  return param_2;
}

