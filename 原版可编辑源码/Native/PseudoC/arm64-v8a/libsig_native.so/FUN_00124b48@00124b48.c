
void FUN_00124b48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __strlen_chk("~",2);
  FUN_0011bcc0(param_2,"~","operator~" + lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00124ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2);
  return;
}

