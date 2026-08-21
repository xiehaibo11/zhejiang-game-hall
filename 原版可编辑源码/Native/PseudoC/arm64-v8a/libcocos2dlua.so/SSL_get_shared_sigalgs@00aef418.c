
undefined4
SSL_get_shared_sigalgs
          (long param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined1 *param_6,undefined1 *param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x148) + 0x168);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 < *(int *)(*(long *)(param_1 + 0x148) + 0x170)) {
    lVar2 = (long)param_2;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + lVar2 * 0x10);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + lVar2 * 0x10 + 4);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar1 + lVar2 * 0x10 + 8);
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = *(undefined1 *)(lVar1 + lVar2 * 0x10 + 0xc);
    }
    if (param_7 != (undefined1 *)0x0) {
      *param_7 = *(undefined1 *)(lVar1 + lVar2 * 0x10 + 0xd);
    }
    return *(undefined4 *)(*(long *)(param_1 + 0x148) + 0x170);
  }
  return 0;
}

