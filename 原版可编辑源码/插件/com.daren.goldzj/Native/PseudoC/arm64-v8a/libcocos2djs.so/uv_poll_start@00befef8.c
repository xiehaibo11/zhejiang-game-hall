
undefined8 uv_poll_start(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00befdb8();
  if (param_2 != 0) {
    uVar2 = param_2 & 1 | 4;
    if ((param_2 & 2) == 0) {
      uVar2 = param_2 & 1;
    }
    uVar1 = uVar2 | 0x2000;
    if ((param_2 & 4) == 0) {
      uVar1 = uVar2;
    }
    uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x68,uVar1);
    uVar2 = *(uint *)(param_1 + 0x58);
    if (((uVar2 >> 0xe & 1) == 0) &&
       (*(uint *)(param_1 + 0x58) = uVar2 | 0x4000, (uVar2 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
    }
    *(undefined8 *)(param_1 + 0x60) = param_3;
  }
  return 0;
}

