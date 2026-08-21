
void FUN_0126208c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("__uuidof(",10);
  FUN_01258064(param_2,"__uuidof(","__uuidof(" + lVar1);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar1);
  return;
}

