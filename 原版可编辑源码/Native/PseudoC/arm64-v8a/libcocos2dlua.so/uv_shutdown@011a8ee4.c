
undefined8 uv_shutdown(long param_1,long param_2,undefined8 param_3)

{
  if ((*(uint *)(param_2 + 0x58) & 0x8303) == 0x8000) {
    *(undefined4 *)(param_1 + 8) = 4;
    *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + 1;
    *(long *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x48) = param_3;
    *(long *)(param_2 + 0x80) = param_1;
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x100;
    FUN_011a3688(*(undefined8 *)(param_2 + 8),param_2 + 0x88,4);
    return 0;
  }
  return 0xffffff95;
}

