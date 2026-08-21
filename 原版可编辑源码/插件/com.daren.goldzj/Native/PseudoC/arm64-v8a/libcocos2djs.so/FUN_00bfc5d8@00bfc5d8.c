
ssize_t FUN_00bfc5d8(long param_1)

{
  int __count;
  ssize_t sVar1;
  int *piVar2;
  size_t __nbytes;
  ulong uVar3;
  long lVar4;
  
  __count = *(int *)(param_1 + 0x124);
  if (*(__off_t *)(param_1 + 0x130) < 0) {
    if (__count != 1) {
      sVar1 = readv(*(int *)(param_1 + 0x118),*(iovec **)(param_1 + 0x128),__count);
      return (long)(int)sVar1;
    }
    sVar1 = read(*(int *)(param_1 + 0x118),(void *)**(undefined8 **)(param_1 + 0x128),
                 (*(undefined8 **)(param_1 + 0x128))[1]);
    return sVar1;
  }
  if (__count == 1) {
    sVar1 = pread(*(int *)(param_1 + 0x118),(void *)**(undefined8 **)(param_1 + 0x128),
                  (*(undefined8 **)(param_1 + 0x128))[1],*(__off_t *)(param_1 + 0x130));
    return sVar1;
  }
  if (DAT_01d3be30 == 0) {
    lVar4 = uv__preadv(*(undefined4 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
    if (lVar4 != -1) {
      return lVar4;
    }
    piVar2 = (int *)__errno();
    if (*piVar2 != 0x26) {
      return -1;
    }
    DAT_01d3be30 = 1;
  }
  uVar3 = 0;
  sVar1 = 1;
  lVar4 = 0;
  do {
    while( true ) {
      __nbytes = *(size_t *)(*(long *)(param_1 + 0x128) + uVar3 * 0x10 + 8);
      if (__nbytes == 0) break;
      sVar1 = pread(*(int *)(param_1 + 0x118),*(void **)(*(long *)(param_1 + 0x128) + uVar3 * 0x10),
                    __nbytes,lVar4 + *(long *)(param_1 + 0x130));
      if (sVar1 < 1) goto LAB_00bfc670;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + sVar1;
      if (*(uint *)(param_1 + 0x124) <= uVar3) goto LAB_00bfc670;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x124));
LAB_00bfc670:
  if (lVar4 == 0) {
    lVar4 = sVar1;
  }
  return lVar4;
}

