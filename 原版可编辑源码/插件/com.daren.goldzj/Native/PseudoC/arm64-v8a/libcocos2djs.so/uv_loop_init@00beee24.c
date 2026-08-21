
ulong uv_loop_init(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uv__signal_global_once_init();
  uVar4 = *param_1;
  memset(param_1,0,0x350);
  *param_1 = uVar4;
  param_1[0xf] = param_1 + 0xf;
  param_1[0x10] = param_1 + 0xf;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[0x34] = param_1 + 0x34;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x36] = param_1 + 0x36;
  param_1[0x37] = param_1 + 0x36;
  param_1[0x32] = param_1 + 0x32;
  param_1[0x33] = param_1 + 0x32;
  param_1[0x30] = param_1 + 0x30;
  param_1[0x31] = param_1 + 0x30;
  uVar3 = uv__hrtime(1);
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x44] = uVar3 / 1000000;
  uVar3 = uv__platform_loop_init(param_1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar2 = uv_signal_init(param_1,param_1 + 0x4d);
  if (uVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar2 = uVar1;
    if ((uVar1 >> 0xd & 1) != 0) {
      uVar2 = uVar1 & 0xffffdfff;
      *(uint *)(param_1 + 0x58) = uVar2;
      if ((uVar1 & 0x4000) != 0) {
        *(int *)(param_1[0x4e] + 8) = *(int *)(param_1[0x4e] + 8) + -1;
      }
    }
    param_1[0x2e] = param_1 + 0x2e;
    *(uint *)(param_1 + 0x58) = uVar2 | 0x8000;
    param_1[0x2f] = param_1 + 0x2e;
    uVar2 = uv_rwlock_init(param_1 + 0x26);
    if (uVar2 == 0) {
      uVar2 = uv_mutex_init(param_1 + 0x11);
      if (uVar2 == 0) {
        uVar2 = uv_async_init(param_1,param_1 + 0x16,uv__work_done);
        if (uVar2 == 0) {
          uVar1 = *(uint *)(param_1 + 0x21);
          uVar2 = uVar1;
          if ((uVar1 >> 0xd & 1) != 0) {
            uVar2 = uVar1 & 0xffffdfff;
            *(uint *)(param_1 + 0x21) = uVar2;
            if ((uVar1 >> 0xe & 1) != 0) {
              *(int *)(param_1[0x17] + 8) = *(int *)(param_1[0x17] + 8) + -1;
            }
          }
          *(uint *)(param_1 + 0x21) = uVar2 | 0x8000;
          return 0;
        }
        uv_mutex_destroy(param_1 + 0x11);
      }
      uv_rwlock_destroy(param_1 + 0x26);
    }
    uv__signal_loop_cleanup(param_1);
  }
  uv__platform_loop_delete(param_1);
  return (ulong)uVar2;
}

