
void FUN_00c6e844(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c6e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  return;
}

