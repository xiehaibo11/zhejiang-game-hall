
void FUN_00bf1d90(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x200;
  uv__io_stop(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
  iVar2 = uv__io_active(param_1 + 0x88,4);
  if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) != 0)) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  (**(code **)(param_1 + 0x70))(param_1,0xfffffffffffff001,param_2);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffb;
  return;
}

