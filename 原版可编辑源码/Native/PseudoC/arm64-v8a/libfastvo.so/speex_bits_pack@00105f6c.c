
long * speex_bits_pack(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  
  plVar4 = param_1;
  if (*(int *)((long)param_1 + 0xc) + ((int)param_1[2] + param_3 >> 3) <
      *(int *)((long)param_1 + 0x1c)) {
LAB_00105ff8:
    if (param_3 != 0) {
      uVar3 = param_3 - 1;
      do {
        *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)) =
             *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)) |
             (byte)((param_2 >> (ulong)(uVar3 & 0x1f) & 1) << (ulong)(7U - (int)param_1[2] & 0x1f));
        iVar1 = (int)param_1[2] + 1;
        *(int *)(param_1 + 2) = iVar1;
        if (iVar1 == 8) {
          lVar2 = (long)*(int *)((long)param_1 + 0xc) + 1;
          *(int *)((long)param_1 + 0xc) = (int)lVar2;
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined1 *)(*param_1 + lVar2) = 0;
        }
        uVar3 = uVar3 - 1;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      } while (uVar3 != 0xffffffff);
    }
    return plVar4;
  }
  fprintf((FILE *)0x14d168,"notification: %s\n","Buffer too small to pack bits");
  if (*(int *)((long)param_1 + 0x14) == 0) {
    pcVar5 = "Do not own input buffer: not packing";
  }
  else {
    uVar3 = *(int *)((long)param_1 + 0x1c) * 3 + 0xf;
    plVar4 = realloc((void *)*param_1,(long)((ulong)uVar3 << 0x20) >> 0x21);
    if (plVar4 != (long *)0x0) {
      *(int *)((long)param_1 + 0x1c) = (int)uVar3 >> 1;
      *param_1 = (long)plVar4;
      goto LAB_00105ff8;
    }
    pcVar5 = "Could not resize input buffer: not packing";
  }
  uVar3 = fprintf((FILE *)0x14d168,"warning: %s\n",pcVar5);
  return (long *)(ulong)uVar3;
}

