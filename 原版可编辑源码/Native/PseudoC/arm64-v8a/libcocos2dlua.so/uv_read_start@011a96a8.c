
undefined8 uv_read_start(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 0xe & 1) == 0) {
      return 0xffffff95;
    }
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(uint *)(param_1 + 0x58) = uVar1 | 0x1000;
    FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((uVar1 >> 2 & 1) != 0) {
      return 0;
    }
    uVar2 = 0;
    *(uint *)(param_1 + 0x58) = uVar1 | 4;
    if ((uVar1 >> 3 & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar2;
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

