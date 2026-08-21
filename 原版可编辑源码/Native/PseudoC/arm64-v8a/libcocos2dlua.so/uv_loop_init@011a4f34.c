
int uv_loop_init(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  memset(param_1,0,0x350);
  param_1[0xf] = param_1 + 0xf;
  param_1[0x10] = param_1 + 0xf;
  param_1[0x34] = param_1 + 0x34;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x36] = param_1 + 0x36;
  param_1[0x37] = param_1 + 0x36;
  param_1[0x32] = param_1 + 0x32;
  param_1[0x33] = param_1 + 0x32;
  param_1[0x30] = param_1 + 0x30;
  param_1[0x31] = param_1 + 0x30;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  *param_1 = uVar5;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[0x2d] = 0;
  uVar3 = FUN_011ac764(1);
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  param_1[0x45] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  param_1[0x44] = uVar3 / 1000000;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar2 = FUN_011abdf8(param_1);
  if (iVar2 == 0) {
    FUN_011a6cfc();
    iVar2 = uv_signal_init(param_1,param_1 + 0x4d);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar4 = uVar1;
      if ((uVar1 >> 3 & 1) != 0) {
        uVar4 = uVar1 & 0xfffffff7;
        *(uint *)(param_1 + 0x58) = uVar4;
        if ((uVar1 & 5) == 4) {
          *(int *)(param_1[0x4e] + 8) = *(int *)(param_1[0x4e] + 8) + -1;
        }
      }
      *(uint *)(param_1 + 0x58) = uVar4 | 0x10;
      param_1[0x2e] = param_1 + 0x2e;
      param_1[0x2f] = param_1 + 0x2e;
      iVar2 = uv_rwlock_init(param_1 + 0x26);
      if (iVar2 == 0) {
        iVar2 = uv_mutex_init(param_1 + 0x11);
        if (iVar2 == 0) {
          iVar2 = uv_async_init(param_1,param_1 + 0x16,FUN_0119e70c);
          if (iVar2 == 0) {
            uVar1 = *(uint *)(param_1 + 0x21);
            uVar4 = uVar1;
            if ((uVar1 >> 3 & 1) != 0) {
              uVar4 = uVar1 & 0xfffffff7;
              *(uint *)(param_1 + 0x21) = uVar4;
              if ((uVar1 & 5) == 4) {
                *(int *)(param_1[0x17] + 8) = *(int *)(param_1[0x17] + 8) + -1;
              }
            }
            *(uint *)(param_1 + 0x21) = uVar4 | 0x10;
            return 0;
          }
          uv_mutex_destroy(param_1 + 0x11);
        }
        uv_rwlock_destroy(param_1 + 0x26);
      }
      FUN_011a6de4(param_1);
    }
    FUN_011abf94(param_1);
  }
  return iVar2;
}

