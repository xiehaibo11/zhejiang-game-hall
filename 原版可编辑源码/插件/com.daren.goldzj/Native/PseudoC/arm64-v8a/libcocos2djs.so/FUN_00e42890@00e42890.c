
void FUN_00e42890(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xf0) + 0x68);
  if (plVar1 != (long *)0x0) {
    local_20 = *param_2;
    local_18 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_20);
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x490) + 0x570) != 0) {
    return;
  }
  FUN_00e1d86c(*(undefined8 *)(*(long *)(param_1 + 0x490) + 0x538));
  return;
}

