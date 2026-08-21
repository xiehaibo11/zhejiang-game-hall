
undefined4 FUN_01166410(float *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  if (((((*(long *)(param_2 + 0x60) == 0) || (*(long *)(param_2 + 0x60) != *(long *)(param_1 + 4)))
       && ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 6) >> 0x20) != 0)) &&
      (((*(ulong *)(param_1 + 6) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0 &&
       (*param_1 <= *(float *)(param_2 + 0x34))))) &&
     ((*(float *)(param_2 + 0x30) <= param_1[3] &&
      ((*(float *)(param_2 + 0x2c) <= param_1[2] && (param_1[1] <= *(float *)(param_2 + 0x38)))))))
  {
    (**(code **)(param_1 + 8))(param_2,param_4);
  }
  return param_3;
}

