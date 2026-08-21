
bool FUN_00a2d1e0(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(long **)(param_2 + 0x478) == (long *)0x0) {
    return false;
  }
  plVar1 = (long *)**(long **)(param_2 + 0x478);
  if (plVar1 != (long *)0x0) {
    return *plVar1 == param_1;
  }
  return false;
}

