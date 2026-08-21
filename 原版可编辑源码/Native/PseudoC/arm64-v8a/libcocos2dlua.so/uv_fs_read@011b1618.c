
undefined4
uv_fs_read(long param_1,long param_2,undefined4 param_3,void *param_4,uint param_5,
          undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  void *__dest;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0xffffffea;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(long *)(param_2 + 0x50) = param_7;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(long *)(param_2 + 0x48) = param_1;
    *(undefined4 *)(param_2 + 8) = 6;
    *(undefined4 *)(param_2 + 0x40) = 3;
    if ((param_4 != (void *)0x0) && (param_5 != 0)) {
      __dest = (void *)(param_2 + 0x178);
      *(undefined4 *)(param_2 + 0x118) = param_3;
      *(uint *)(param_2 + 0x124) = param_5;
      *(void **)(param_2 + 0x128) = __dest;
      if (4 < param_5) {
        __dest = malloc((ulong)param_5 << 4);
        *(void **)(param_2 + 0x128) = __dest;
        if (__dest == (void *)0x0) {
          return 0xfffffff4;
        }
      }
      memcpy(__dest,param_4,(ulong)param_5 << 4);
      *(undefined8 *)(param_2 + 0x130) = param_6;
      if (param_7 == 0) {
        FUN_011af9c4(param_2 + 0x150);
        uVar1 = *(undefined4 *)(param_2 + 0x58);
      }
      else {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_0119e4dc(param_1,param_2 + 0x150,FUN_011af9c4,FUN_011b09c0);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

