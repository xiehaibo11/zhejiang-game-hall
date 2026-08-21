
void FUN_00df8760(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *param_3;
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x380);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x388) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00df8784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,iVar1 != -2);
    return;
  }
  return;
}

