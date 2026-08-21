
void uv_fs_req_cleanup(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_00bfe7fc:
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar1 = *(long *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x40) != 0x16) goto LAB_00bfe814;
LAB_00bfe854:
    if (lVar1 != 0) {
      uv__fs_scandir_cleanup(param_1);
      lVar1 = *(long *)(param_1 + 0x60);
      goto LAB_00bfe814;
    }
  }
  else {
    if (*(long *)(param_1 + 0x50) != 0) {
LAB_00bfe7f8:
      uv__free();
      goto LAB_00bfe7fc;
    }
    if (*(int *)(param_1 + 0x40) == 0x14) goto LAB_00bfe7f8;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar1 = *(long *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x40) == 0x16) goto LAB_00bfe854;
LAB_00bfe814:
    if (lVar1 == param_1 + 0x70) goto LAB_00bfe824;
  }
  uv__free();
LAB_00bfe824:
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

