
void uv__process_close(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
  if (((uVar1 >> 0xe & 1) == 0) ||
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 8);
    if (*(long *)(lVar2 + 0x170) == lVar2 + 0x170) {
LAB_00bf0ad4:
      uv_signal_stop(lVar2 + 0x268);
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    if (*(long *)(lVar2 + 0x170) == lVar2 + 0x170) goto LAB_00bf0ad4;
  }
  return;
}

