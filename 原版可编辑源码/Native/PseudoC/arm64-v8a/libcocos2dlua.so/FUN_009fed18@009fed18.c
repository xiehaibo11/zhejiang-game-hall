
ulong FUN_009fed18(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  ulong uVar3;
  size_t __size;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  void *local_48;
  
  local_48 = (void *)param_1[3];
  local_50 = param_1[2];
  uVar5 = *param_1;
  uVar6 = (ulong)(uint)param_1[2] & 0x7fffffff;
  uVar4 = 0;
  if (((uint)param_1[2] & 0x7fffffff) != 0) {
    uVar4 = 0xffffffffffffff9b / uVar6;
  }
  uVar1 = 8;
  do {
    uVar3 = uVar1;
    if (param_2 <= uVar3) break;
    uVar1 = uVar3 << 1;
  } while (uVar3 < uVar4);
  if (param_2 <= uVar3) {
    __size = uVar3 * (local_50 & 0x7fffffff);
    local_60 = uVar3;
    uStack_58 = __size;
    local_48 = malloc(__size);
    if (local_48 != (void *)0x0) {
      uVar5 = uVar5 * uVar6;
      memset(local_48,0,__size);
      __ptr = (void *)param_1[3];
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          lVar2 = FUN_009feb68(&local_60,*(undefined8 *)((long)__ptr + uVar4 + 8));
          if (0x10 < (uint)(local_50 & 0x7fffffff)) {
            memcpy((void *)(lVar2 + 0x10),(void *)((long)__ptr + uVar4 + 0x10),
                   (local_50 & 0x7fffffff) - 0x10);
          }
          __ptr = (void *)param_1[3];
          uVar4 = uVar4 + ((ulong)(uint)param_1[2] & 0x7fffffff);
        } while (uVar4 < uVar5);
      }
      free(__ptr);
      param_1[1] = uStack_58;
      *param_1 = local_60;
      param_1[3] = (ulong)local_48;
      param_1[2] = local_50;
      return uVar3;
    }
  }
  return 0;
}

