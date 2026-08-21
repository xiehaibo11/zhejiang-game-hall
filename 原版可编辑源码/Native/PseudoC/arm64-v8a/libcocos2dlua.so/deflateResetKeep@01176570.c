
undefined8 deflateResetKeep(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) ||
      (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x58) = 2;
    iVar1 = *(int *)(lVar4 + 0x2c);
    *(undefined4 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      *(int *)(lVar4 + 0x2c) = iVar1;
    }
    uVar3 = 0x2a;
    if (iVar1 == 0) {
      uVar3 = 0x71;
    }
    *(undefined4 *)(lVar4 + 8) = uVar3;
    if (iVar1 == 2) {
      uVar2 = crc32();
    }
    else {
      uVar2 = adler32(0,0,0);
    }
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0;
    FUN_0117bde0(lVar4);
    uVar2 = 0;
  }
  return uVar2;
}

