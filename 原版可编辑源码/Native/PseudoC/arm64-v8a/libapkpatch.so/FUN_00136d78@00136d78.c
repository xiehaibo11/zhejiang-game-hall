
bool FUN_00136d78(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if ((plVar1[1] - *plVar1 == plVar1[4] - plVar1[5]) &&
     (plVar1 = *(long **)(param_1 + 0x40), plVar1[1] - *plVar1 == plVar1[4] - plVar1[5])) {
    plVar1 = *(long **)(param_1 + 0x38);
    return plVar1[1] - *plVar1 == plVar1[4] - plVar1[5];
  }
  return false;
}

