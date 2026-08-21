
undefined4 FUN_01165df4(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if ((((*(long *)(param_2 + 0x60) == 0) || (*(long *)(param_2 + 0x60) != *(long *)(param_1 + 4)))
      && ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 6) >> 0x20) != 0)) &&
     ((((*(ulong *)(param_1 + 6) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0 &&
       (cpShapePointQuery(*param_1,param_1[1],param_2,&local_50), local_50 != 0)) &&
      (local_40 < (float)param_1[2])))) {
    (**(code **)(param_1 + 8))(local_48,uStack_44,local_40,local_3c,uStack_38,param_2,param_4);
  }
  return param_3;
}

