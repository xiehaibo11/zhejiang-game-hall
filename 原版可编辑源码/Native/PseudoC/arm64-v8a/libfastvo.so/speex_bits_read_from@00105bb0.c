
long * speex_bits_read_from(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_1;
  if (*(int *)((long)param_1 + 0x1c) < (int)param_3) {
    fprintf((FILE *)0x14d168,"notification: %s\n","Packet is larger than allocated buffer");
    if (*(int *)((long)param_1 + 0x14) == 0) {
      uVar1 = fprintf((FILE *)0x14d168,"warning: %s\n",
                      "Do not own input buffer: truncating oversize input");
      param_3 = *(uint *)((long)param_1 + 0x1c);
      plVar2 = (long *)(ulong)uVar1;
    }
    else {
      plVar2 = realloc((void *)*param_1,(long)(int)param_3);
      if (plVar2 == (long *)0x0) {
        param_3 = *(uint *)((long)param_1 + 0x1c);
        uVar1 = fprintf((FILE *)0x14d168,"warning: %s\n",
                        "Could not resize input buffer: truncating input");
        plVar2 = (long *)(ulong)uVar1;
      }
      else {
        *(uint *)((long)param_1 + 0x1c) = param_3;
        *param_1 = (long)plVar2;
      }
    }
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 1) = param_3 << 3;
  *(undefined4 *)(param_1 + 3) = 0;
  return plVar2;
}

