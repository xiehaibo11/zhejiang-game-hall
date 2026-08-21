
void FUN_00124ba8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("operator ",10);
  FUN_0011bcc0(param_2,"operator ","::operator " + lVar1 + 2);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00124c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  return;
}

