
undefined8 FUN_00130a90(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_00130b1c();
  if (iVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(uint *)(lVar4 + 0x10) != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)*(uint *)(lVar4 + 0x10) & 1;
    }
    *(undefined4 *)(lVar4 + 0x1c) = 0x8000;
    lVar1 = lVar4 + 0x558;
    *(long *)(lVar4 + 0x90) = lVar1;
    *(long *)(lVar4 + 0x68) = lVar1;
    *(long *)(lVar4 + 0x70) = lVar1;
    *(undefined8 *)(lVar4 + 8) = 0x3f34;
    uVar3 = 0;
    *(undefined4 *)(lVar4 + 0x14) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined4 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x1be8) = 0xffffffff00000001;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

