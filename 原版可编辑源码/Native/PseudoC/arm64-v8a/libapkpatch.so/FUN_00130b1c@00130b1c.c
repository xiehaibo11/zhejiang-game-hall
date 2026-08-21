
bool FUN_00130b1c(long param_1)

{
  long *plVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)))) {
    return 0x1f < (int)plVar1[1] - 0x3f34U;
  }
  return true;
}

