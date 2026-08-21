
ulong mbedtls_entropy_add_source
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = (*pcRam0000000000000000)(param_1 + 0x400);
  if ((int)uVar2 == 0) {
    if (*(int *)(param_1 + 0xd8) < 0x14) {
      lVar4 = param_1 + (long)*(int *)(param_1 + 0xd8) * 0x28;
      *(undefined8 *)(lVar4 + 0xe0) = param_2;
      *(undefined8 *)(lVar4 + 0xe8) = param_3;
      *(undefined8 *)(lVar4 + 0xf8) = param_4;
      *(undefined4 *)(lVar4 + 0x100) = param_5;
      uVar3 = 0;
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    }
    else {
      uVar3 = 0xffffffc2;
    }
    iVar1 = (*pcRam0000000000000000)(param_1 + 0x400);
    if (iVar1 != 0) {
      uVar3 = 0xffffffe2;
    }
    uVar2 = (ulong)uVar3;
  }
  return uVar2;
}

