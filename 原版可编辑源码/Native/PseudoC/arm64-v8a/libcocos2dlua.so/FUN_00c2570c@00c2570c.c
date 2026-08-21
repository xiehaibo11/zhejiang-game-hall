
void FUN_00c2570c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = **(long **)(*(long *)(param_1 + 0x10) + 0x50);
  lVar1 = lVar4 + (ulong)param_2 * 0x18;
  uVar5 = *(uint *)(lVar4 + (ulong)param_2 * 0x18);
  uVar2 = *(uint *)(lVar1 + 4);
  switch(uVar5 >> 0x1c) {
  case 1:
  case 5:
    FUN_00c25690(param_1,param_2 + 0x70000000,0);
    uVar2 = *(uint *)(param_1 + 0x2c) & 0x3000000;
    if (uVar2 != 0) {
      FUN_00c25690(param_1,0x80010000,uVar2);
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfcffffff;
    }
    break;
  default:
    FUN_00c25690(param_1,*(uint *)(param_1 + 0x2c) & 0x3000000 | uVar5);
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfcffffff;
    break;
  case 3:
    if ((uVar5 & 0xc000000) != 0) {
      uVar5 = uVar5 | *(uint *)(param_1 + 0x2c) & 0x3000000;
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfcffffff;
    }
    FUN_00c2570c(param_1,(short)uVar5);
    FUN_00c25690(param_1,uVar5 & 0xffff0000,uVar2);
    *(undefined2 *)(param_1 + (ulong)*(uint *)(param_1 + 4) * 0x18 + 0x48) = 1;
    return;
  case 6:
    uVar3 = FUN_00c25690(param_1,uVar5);
    *(undefined2 *)(param_1 + (uVar3 & 0xffffffff) * 0x18 + 0x48) = *(undefined2 *)(lVar1 + 8);
    return;
  case 8:
    if ((uVar5 & 0xf0ff0000) == 0x80010000) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & (uVar2 ^ 0xffffffff);
    }
    FUN_00c2570c(param_1,(short)uVar5);
    FUN_00c25690(param_1,uVar5 & 0xffff0000,uVar2);
    return;
  }
  return;
}

