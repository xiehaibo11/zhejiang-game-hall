
void FUN_001269bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk(&DAT_0012f45a,6);
  FUN_0011bcc0(param_2,&DAT_0012f45a,&DAT_0012f45a + lVar1);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00126a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  return;
}

