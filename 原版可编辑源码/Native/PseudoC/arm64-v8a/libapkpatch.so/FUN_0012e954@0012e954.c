
undefined8 FUN_0012e954(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar2 = FUN_0012e6a0();
  if (iVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    iVar2 = *(int *)(lVar5 + 0x30);
    *(undefined4 *)(param_1 + 0x58) = 2;
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      *(int *)(lVar5 + 0x30) = iVar2;
    }
    uVar4 = 0x71;
    if (iVar2 != 0) {
      uVar4 = 0x2a;
    }
    uVar1 = 0x39;
    if (iVar2 != 2) {
      uVar1 = uVar4;
    }
    *(undefined4 *)(lVar5 + 8) = uVar1;
    if (iVar2 != 2) {
      uVar3 = FUN_00132b28(0,0,0);
    }
    else {
      uVar3 = FUN_0012e2ac();
    }
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(lVar5 + 0x4c) = 0;
    FUN_00132b30(lVar5);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

