
void FUN_012611c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = __strlen_chk("(",2);
  FUN_01258064(param_2,"(","sizeof... (" + lVar1 + 10);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(&DAT_014a825b,3);
  FUN_01258064(param_2,&DAT_014a825b,&DAT_014a825b + lVar1);
  plVar2 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk(&DAT_013c3898,2);
  FUN_01258064(param_2,&DAT_013c3898,&DAT_013c3898 + lVar1);
  return;
}

