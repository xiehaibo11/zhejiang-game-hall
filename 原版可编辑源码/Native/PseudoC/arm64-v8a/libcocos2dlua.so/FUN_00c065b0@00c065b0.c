
void FUN_00c065b0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x30);
  if (pbVar5 < *(byte **)(param_1 + 0x28)) {
    *(byte **)(param_1 + 0x20) = pbVar5 + 1;
    uVar3 = (uint)*pbVar5;
  }
  else {
    uVar3 = FUN_00c062d0();
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if ((uVar3 == 0xd || uVar3 == 10) && (uVar2 != uVar3)) {
    pbVar5 = *(byte **)(param_1 + 0x20);
    if (pbVar5 < *(byte **)(param_1 + 0x28)) {
      *(byte **)(param_1 + 0x20) = pbVar5 + 1;
      *(uint *)(param_1 + 0x30) = (uint)*pbVar5;
    }
    else {
      uVar4 = FUN_00c062d0(param_1);
      *(undefined4 *)(param_1 + 0x30) = uVar4;
    }
  }
  iVar1 = *(int *)(param_1 + 0x70) + 1;
  *(int *)(param_1 + 0x70) = iVar1;
  if (iVar1 < 0x7fffff00) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c064c4(param_1,*(undefined4 *)(param_1 + 0x34),0x84a);
}

