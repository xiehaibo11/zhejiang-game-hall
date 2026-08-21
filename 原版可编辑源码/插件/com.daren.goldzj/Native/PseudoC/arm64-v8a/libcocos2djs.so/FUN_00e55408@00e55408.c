
uint * FUN_00e55408(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int local_34;
  
  uVar7 = *(ulong *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x18);
  iVar6 = (int)uVar7;
  uVar1 = iVar6 + 1;
  local_34 = 0;
  if (*(uint *)(param_1 + 0x30) < uVar1) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar2 = (uint *)FUN_00e13bcc(param_2,4,*(uint *)(param_1 + 0x30),uVar1,
                                  *(undefined8 *)(param_1 + 0x38),&local_34);
    *(uint **)(param_1 + 0x38) = puVar2;
    if (local_34 != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x30) = uVar1;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x38);
  }
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar7 & 0xffffffff;
    pbVar3 = (byte *)(lVar8 + 10);
    uVar4 = uVar7;
    puVar5 = puVar2;
    do {
      uVar4 = uVar4 - 1;
      *puVar5 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
      pbVar3 = pbVar3 + 0xb;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  puVar2[uVar7] = 0;
  return puVar2;
}

