
void FUN_0121cd04(long param_1,long param_2,uint param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xffffffff;
  local_14 = *(undefined4 *)(param_1 + 0x28);
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined4 **)(param_2 + 8) = &local_18;
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_2,param_3 & 1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 8);
  return;
}

