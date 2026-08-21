
int * __register_frame_info_bases
                (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_01795de8);
    param_2[5] = DAT_01795e10;
    DAT_01795e10 = param_2;
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01795de8);
    return (int *)(ulong)uVar1;
  }
  return param_1;
}

