
void FUN_00128610(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2[1] == 0) || (*(char *)(param_2[1] + *param_2 + -1) != ']')) {
    lVar2 = __strlen_chk(" ",2);
    FUN_0011bcc0(param_2," ","operator\"\" " + lVar2 + 10);
  }
  lVar2 = __strlen_chk(&DAT_0012f267,2);
  FUN_0011bcc0(param_2,&DAT_0012f267,&DAT_0012f267 + lVar2);
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) == 0) {
    if ((plVar1 != (long *)0x0) &&
       ((**(code **)(*plVar1 + 0x20))(plVar1,param_2), *(char *)((long)plVar1 + 9) != '\x01')) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    }
  }
  else if (plVar1 != (long *)0x0) {
    FUN_0011bcc0(param_2,plVar1);
  }
  lVar2 = __strlen_chk("]",2);
  FUN_0011bcc0(param_2,"]","operator delete[]" + lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00128724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}

