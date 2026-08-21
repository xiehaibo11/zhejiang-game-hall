
void FUN_00c6ea08(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c6ea40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  return;
}

