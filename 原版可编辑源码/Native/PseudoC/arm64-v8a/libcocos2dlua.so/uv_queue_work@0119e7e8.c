
undefined8 uv_queue_work(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    *(undefined4 *)(param_2 + 8) = 7;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(long *)(param_2 + 0x40) = param_1;
    *(long *)(param_2 + 0x48) = param_3;
    *(undefined8 *)(param_2 + 0x50) = param_4;
    uv_once(&DAT_01793234,FUN_0119e570);
    *(code **)(param_2 + 0x60) = FUN_0119e8c4;
    *(long *)(param_2 + 0x68) = param_1;
    *(code **)(param_2 + 0x58) = FUN_0119e8b8;
    uv_mutex_lock(&DAT_01793278);
    puVar1 = (undefined8 *)(param_2 + 0x70);
    *puVar1 = &DAT_01793220;
    *(undefined8 **)(param_2 + 0x78) = DAT_01793228;
    *DAT_01793228 = puVar1;
    DAT_01793228 = puVar1;
    if (DAT_01793238 != 0) {
      uv_cond_signal(&DAT_017932a0);
    }
    uv_mutex_unlock(&DAT_01793278);
    return 0;
  }
  return 0xffffffea;
}

