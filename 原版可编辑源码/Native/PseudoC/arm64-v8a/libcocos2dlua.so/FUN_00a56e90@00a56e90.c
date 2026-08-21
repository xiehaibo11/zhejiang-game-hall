
undefined8 FUN_00a56e90(undefined8 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  
  piVar1 = (int *)(param_1 + 0x9a);
  piVar2 = (int *)(param_1 + 0x96);
  piVar3 = piVar1;
  if ((param_2 & 1) == 0) {
    piVar3 = piVar2;
  }
  uVar5 = FUN_00a4a37c(&DAT_013c3aeb,param_3,4);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  pbVar7 = (byte *)(param_3 + 4);
  uVar6 = (uint)*pbVar7;
  if (*pbVar7 != 0) {
    do {
      iVar4 = isspace(uVar6);
      if (iVar4 == 0) {
        uVar5 = FUN_00a5bf70(*param_1,pbVar7,piVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        iVar4 = 2;
        goto LAB_00a56f50;
      }
      pbVar7 = pbVar7 + 1;
      uVar6 = (uint)*pbVar7;
    } while (uVar6 != 0);
  }
  iVar4 = *piVar3;
  if (iVar4 == 0) {
LAB_00a56f30:
    iVar4 = 1;
LAB_00a56f50:
    uVar5 = 0;
    *piVar3 = iVar4;
  }
  else {
    if (iVar4 == 3) {
      FUN_00a38740(*param_1,"NTLM handshake rejected\n");
      FUN_00a5c258(piVar2);
      FUN_00a5c258(piVar1);
      FUN_00a571c0(param_1);
      *piVar3 = 0;
    }
    else {
      if (iVar4 == 4) {
        FUN_00a38740(*param_1,"NTLM auth restarted\n");
        FUN_00a5c258(piVar2);
        FUN_00a5c258(piVar1);
        FUN_00a571c0(param_1);
        goto LAB_00a56f30;
      }
      FUN_00a38740(*param_1,"NTLM handshake failure (internal error)\n");
    }
    uVar5 = 9;
  }
  return uVar5;
}

