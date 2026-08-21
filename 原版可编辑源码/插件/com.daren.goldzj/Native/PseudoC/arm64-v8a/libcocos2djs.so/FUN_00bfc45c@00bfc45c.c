
ssize_t FUN_00bfc45c(long param_1)

{
  int __count;
  uint uVar1;
  ssize_t sVar2;
  int *piVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  __count = *(int *)(param_1 + 0x124);
  if (*(__off_t *)(param_1 + 0x130) < 0) {
    if (__count == 1) {
      sVar2 = write(*(int *)(param_1 + 0x118),(void *)**(undefined8 **)(param_1 + 0x128),
                    (*(undefined8 **)(param_1 + 0x128))[1]);
      return sVar2;
    }
    sVar2 = writev(*(int *)(param_1 + 0x118),*(iovec **)(param_1 + 0x128),__count);
    return (long)(int)sVar2;
  }
  if (__count == 1) {
    sVar2 = pwrite(*(int *)(param_1 + 0x118),(void *)**(undefined8 **)(param_1 + 0x128),
                   (*(undefined8 **)(param_1 + 0x128))[1],*(__off_t *)(param_1 + 0x130));
    return sVar2;
  }
  if (DAT_01d3be2c == 0) {
    lVar5 = uv__pwritev(*(undefined4 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
    if (lVar5 != -1) {
      return lVar5;
    }
    piVar3 = (int *)__errno();
    if (*piVar3 != 0x26) {
      return -1;
    }
    DAT_01d3be2c = 1;
  }
  lVar5 = 0;
  uVar4 = 1;
  lVar6 = 0;
  sVar2 = 0;
  do {
    __n = *(size_t *)(*(long *)(param_1 + 0x128) + lVar5 + 8);
    if (__n == 0) {
      uVar1 = *(uint *)(param_1 + 0x124);
joined_r0x00bfc4b0:
      if (uVar1 <= uVar4) goto LAB_00bfc4f8;
    }
    else {
      sVar2 = pwrite(*(int *)(param_1 + 0x118),*(void **)(*(long *)(param_1 + 0x128) + lVar5),__n,
                     lVar6 + *(long *)(param_1 + 0x130));
      if (0 < sVar2) {
        uVar1 = *(uint *)(param_1 + 0x124);
        lVar6 = lVar6 + sVar2;
        goto joined_r0x00bfc4b0;
      }
      if ((sVar2 < 0) || (*(uint *)(param_1 + 0x124) <= uVar4)) {
LAB_00bfc4f8:
        if (lVar6 == 0) {
          lVar6 = sVar2;
        }
        return lVar6;
      }
      sVar2 = 0;
    }
    lVar5 = lVar5 + 0x10;
    uVar4 = uVar4 + 1;
  } while( true );
}

