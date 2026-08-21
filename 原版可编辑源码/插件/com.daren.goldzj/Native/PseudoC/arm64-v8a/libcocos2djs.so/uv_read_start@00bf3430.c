
uint uv_read_start(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x58) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
    *(undefined8 *)(param_1 + 0x68) = param_2;
    uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    uVar1 = *(uint *)(param_1 + 0x58);
    if (((uVar1 >> 0xe & 1) == 0) &&
       (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar1 & 0x4000;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

