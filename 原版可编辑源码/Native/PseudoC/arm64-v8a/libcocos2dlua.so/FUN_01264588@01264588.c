
void FUN_01264588(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk("<",2);
  FUN_01258064(param_2,"<","expected <" + lVar1 + 9);
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = __strlen_chk(">",2);
  FUN_01258064(param_2,">","<Label | Tag = %d, Label = >" + lVar1 + 0x1b);
  return;
}

