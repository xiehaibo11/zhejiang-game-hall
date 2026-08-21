
void FUN_00befd08(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 >> 3 & 1) == 0) {
    uVar2 = param_3 & 1 | 2;
    if ((param_3 & 4) == 0) {
      uVar2 = param_3 & 1;
    }
    uVar1 = uVar2 | 4;
    if ((param_3 & 0x2000) == 0) {
      uVar1 = uVar2;
    }
    (**(code **)(param_2 + -8))(param_2 + -0x68,param_3 & 8,uVar1);
    return;
  }
  uv__io_stop(param_1,param_2,0x2005);
  uVar2 = *(uint *)(param_2 + -0x10);
  if (((uVar2 >> 0xe & 1) != 0) &&
     (*(uint *)(param_2 + -0x10) = uVar2 & 0xffffbfff, (uVar2 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_2 + -0x60) + 8) = *(int *)(*(long *)(param_2 + -0x60) + 8) + -1;
  }
  (**(code **)(param_2 + -8))(param_2 + -0x68,0xfffffff7,0);
  return;
}

