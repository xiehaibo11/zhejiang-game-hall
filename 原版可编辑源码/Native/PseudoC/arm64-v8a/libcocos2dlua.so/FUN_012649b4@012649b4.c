
void FUN_012649b4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2[1] == 0) || (*(char *)(param_2[1] + *param_2 + -1) != ']')) {
    lVar2 = __strlen_chk(" ",2);
    FUN_01258064(param_2," ",
                 "%s has wrong number of arguments: %d, was expecting 0~2\n " + lVar2 + 0x38);
  }
  lVar2 = __strlen_chk("[",2);
  FUN_01258064(param_2,"[","Cannot open file [" + lVar2 + 0x11);
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) == 0) {
    if ((plVar1 != (long *)0x0) &&
       ((**(code **)(*plVar1 + 0x20))(plVar1,param_2), *(char *)((long)plVar1 + 9) != '\x01')) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    }
  }
  else if (plVar1 != (long *)0x0) {
    FUN_01258064(param_2,plVar1);
  }
  lVar2 = __strlen_chk(&DAT_013c3898,2);
  FUN_01258064(param_2,&DAT_013c3898,&DAT_013c3898 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x01264ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}

