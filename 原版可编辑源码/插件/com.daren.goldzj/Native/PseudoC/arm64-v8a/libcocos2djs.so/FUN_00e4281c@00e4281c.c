
void FUN_00e4281c(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 local_30;
  int local_28;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_30);
    *param_3 = local_30;
    *param_4 = (long)local_28;
    return;
  }
  FUN_00e428e8(*(long *)(param_1 + 0x490) + 0x538,param_2,param_3,param_4);
  return;
}

