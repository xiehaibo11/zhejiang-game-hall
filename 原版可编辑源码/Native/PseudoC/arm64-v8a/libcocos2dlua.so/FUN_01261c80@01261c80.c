
void FUN_01261c80(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  plVar1 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}

