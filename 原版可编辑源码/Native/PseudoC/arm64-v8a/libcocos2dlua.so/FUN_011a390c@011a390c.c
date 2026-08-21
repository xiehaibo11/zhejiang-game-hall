
void FUN_011a390c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_2 + 8);
  if (plVar1 != (long *)*plVar1) {
    return;
  }
  *(long *)(param_2 + 8) = param_1 + 0x48;
  plVar2 = *(long **)(param_1 + 0x50);
  *(long **)(param_2 + 0x10) = plVar2;
  *plVar2 = (long)plVar1;
  *(long **)(param_1 + 0x50) = plVar1;
  return;
}

