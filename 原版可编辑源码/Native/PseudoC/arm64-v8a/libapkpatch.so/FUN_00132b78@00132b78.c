
void FUN_00132b78(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  lVar1 = 0;
  do {
    if (uVar2 < 0x11e) {
      *(undefined2 *)(param_1 + lVar1 + 0xd4) = 0;
    }
    if (uVar3 < 0x11e) {
      *(undefined2 *)(param_1 + lVar1 + 0xd8) = 0;
    }
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 + 2;
    uVar3 = uVar3 + 2;
  } while (lVar1 != 0x478);
  uVar3 = 1;
  uVar2 = 0;
  lVar1 = 0;
  do {
    if (uVar2 < 0x1e) {
      *(undefined2 *)(param_1 + lVar1 + 0x9c8) = 0;
    }
    if (uVar3 < 0x1e) {
      *(undefined2 *)(param_1 + lVar1 + 0x9cc) = 0;
    }
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 + 2;
    uVar3 = uVar3 + 2;
  } while (lVar1 != 0x78);
  uVar3 = 1;
  uVar2 = 0;
  lVar1 = 0;
  do {
    if (uVar2 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xabc) = 0;
    }
    if (uVar3 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xac0) = 0;
    }
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 + 2;
    uVar3 = uVar3 + 2;
  } while (lVar1 != 0x50);
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined2 *)(param_1 + 0x4d4) = 1;
  *(undefined8 *)(param_1 + 0x1720) = 0;
  *(undefined8 *)(param_1 + 0x1718) = 0;
  *(undefined4 *)(param_1 + 0x1728) = 0;
  return;
}

