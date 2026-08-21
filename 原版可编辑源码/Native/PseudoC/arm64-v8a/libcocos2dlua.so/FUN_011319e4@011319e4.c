
undefined8 FUN_011319e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char acStack_4c [20];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)TIFFFindCODEC(*(undefined2 *)(param_1 + 0xf));
  pcVar3 = acStack_4c;
  sprintf(acStack_4c,"%d",(ulong)*(ushort *)(param_1 + 0xf));
  if (plVar2 != (long *)0x0) {
    pcVar3 = (char *)*plVar2;
  }
  TIFFErrorExt(param_1[0x77],*param_1,"%s compression support is not configured",pcVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

