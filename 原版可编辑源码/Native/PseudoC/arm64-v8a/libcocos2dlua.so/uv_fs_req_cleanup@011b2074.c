
void uv_fs_req_cleanup(long param_1)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       ((*(long *)(param_1 + 0x50) != 0 || (*(int *)(param_1 + 0x40) == 0x14)))) {
      FUN_0119f27c();
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if ((*(int *)(param_1 + 0x40) == 0x16) && (*(long *)(param_1 + 0x60) != 0)) {
      FUN_011a1bf4(param_1);
    }
    if (*(long *)(param_1 + 0x128) != param_1 + 0x178) {
      FUN_0119f27c();
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (*(long *)(param_1 + 0x60) != param_1 + 0x70) {
      FUN_0119f27c();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}

