
long * speex_bits_read_whole_bytes(long *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  plVar2 = param_1;
  if (*(int *)((long)param_1 + 0x1c) < (int)(param_3 + ((int)param_1[1] + 7 >> 3))) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      uVar1 = fprintf((FILE *)0x14d168,"warning: %s\n",
                      "Do not own input buffer: truncating oversize input");
      plVar2 = (long *)(ulong)uVar1;
      param_3 = *(uint *)((long)param_1 + 0x1c);
    }
    else {
      plVar2 = realloc((void *)*param_1,(long)(int)(param_3 + 1 + ((int)param_1[1] >> 3)));
      if (plVar2 == (long *)0x0) {
        param_3 = *(int *)((long)param_1 + 0x1c) + ((int)param_1[1] >> 3 ^ 0xffffffffU);
        uVar1 = fprintf((FILE *)0x14d168,"warning: %s\n",
                        "Could not resize input buffer: truncating oversize input");
        plVar2 = (long *)(ulong)uVar1;
      }
      else {
        *param_1 = (long)plVar2;
        *(uint *)((long)param_1 + 0x1c) = param_3 + 1 + ((int)param_1[1] >> 3);
      }
    }
  }
  iVar3 = *(int *)((long)param_1 + 0xc);
  if (0 < iVar3) {
    plVar2 = memmove((void *)*param_1,(void *)(*param_1 + (long)iVar3),
                     (long)(((int)param_1[1] + 7 >> 3) - iVar3));
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  uVar1 = (int)param_1[1] + iVar3 * -8;
  *(uint *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (0 < (int)param_3) {
    lVar4 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    uVar5 = (ulong)param_3;
    do {
      uVar5 = uVar5 - 1;
      *(undefined1 *)(*param_1 + lVar4) = *param_2;
      lVar4 = lVar4 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 + param_3 * 8;
  return plVar2;
}

