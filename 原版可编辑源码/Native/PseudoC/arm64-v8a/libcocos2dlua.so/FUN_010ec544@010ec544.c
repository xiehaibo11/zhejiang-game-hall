
void FUN_010ec544(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6)

{
  (**(code **)(*(long *)(param_1 + 0x280) + 0x18))
            (param_1,param_2,*param_3,param_5 + (ulong)*param_6 * 8);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}

