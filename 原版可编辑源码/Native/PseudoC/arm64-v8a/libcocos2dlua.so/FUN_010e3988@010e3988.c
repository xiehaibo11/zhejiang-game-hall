
void FUN_010e3988(long param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 010e3b58 with catch @ 010e3998 */
  lVar2 = *(long *)(param_1 + 0x1f0);
  (**(code **)(*(long *)(param_1 + 0x230) + 0x10))();
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x128) != 0) {
      *(undefined4 *)(lVar2 + 0x20) = 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x20) = 2;
      goto LAB_010e39fc;
    }
    if ((iVar1 != 0) || (*(undefined4 *)(lVar2 + 0x20) = 2, *(int *)(param_1 + 0x128) != 0))
    goto LAB_010e39fc;
  }
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
LAB_010e39fc:
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
  return;
}

