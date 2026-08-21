
undefined8 uv_fs_event_stop(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    lVar3 = *(long *)(param_1 + 8);
    for (plVar2 = *(long **)(lVar3 + 0x340); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
      while (*(int *)(param_1 + 0x80) < (int)plVar2[8]) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_00bf7df4;
      }
      if (*(int *)(param_1 + 0x80) <= (int)plVar2[8]) break;
    }
LAB_00bf7df4:
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    }
    lVar3 = plVar2[6];
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
    if (((int)lVar3 == 0) && ((long *)plVar2[4] == plVar2 + 4)) {
      FUN_00bf71d0(plVar2,*(undefined8 *)(param_1 + 8));
    }
  }
  return 0;
}

