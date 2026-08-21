
void FUN_0126489c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(" vector[",9);
  FUN_01258064(param_2," vector[","pixel vector[" + lVar1 + 5);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      if (*(char *)((long)plVar2 + 9) != '\x01') {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      }
    }
    else {
      FUN_01258064(param_2,plVar2);
    }
  }
  lVar1 = __strlen_chk(&DAT_013c3898,2);
  FUN_01258064(param_2,&DAT_013c3898,&DAT_013c3898 + lVar1);
  return;
}

