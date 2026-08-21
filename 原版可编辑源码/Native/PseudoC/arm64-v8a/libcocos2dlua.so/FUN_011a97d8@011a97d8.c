
void FUN_011a97d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1 + 0x88;
  FUN_011a3868(*(undefined8 *)(param_1 + 8),lVar5);
  uVar4 = *(uint *)(param_1 + 0x58);
  if ((uVar4 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar4 & 0xffffefff;
    FUN_011a37d8(*(undefined8 *)(param_1 + 8),lVar5,1);
    iVar3 = FUN_011a393c(lVar5,4);
    uVar4 = *(uint *)(param_1 + 0x58);
    if ((iVar3 == 0) && ((uVar4 >> 2 & 1) != 0)) {
      uVar1 = uVar4 & 0xfffffffb;
      *(uint *)(param_1 + 0x58) = uVar1;
      uVar2 = uVar4 >> 3;
      uVar4 = uVar1;
      if ((uVar2 & 1) != 0) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (((uVar4 >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar4 & 0xfffffffb, (uVar4 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (*(int *)(param_1 + 0xb8) != -1) {
    if (2 < *(int *)(param_1 + 0xb8)) {
      FUN_011a2d5c();
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xec) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  }
  lVar5 = *(long *)(param_1 + 0xf0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 4) != 0) {
      uVar6 = 0;
      do {
        FUN_011a2d5c(*(undefined4 *)(lVar5 + 8 + uVar6 * 4));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(lVar5 + 4));
      lVar5 = *(long *)(param_1 + 0xf0);
    }
    FUN_0119f27c(lVar5);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}

