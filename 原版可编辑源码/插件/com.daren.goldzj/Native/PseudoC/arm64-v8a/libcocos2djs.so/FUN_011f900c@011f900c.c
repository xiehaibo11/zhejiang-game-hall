
void FUN_011f900c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 local_18;
  
  plVar1 = *(long **)(param_2 + 0x50);
  local_18 = param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

