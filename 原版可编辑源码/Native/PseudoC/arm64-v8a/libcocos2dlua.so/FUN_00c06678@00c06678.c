
undefined8 FUN_00c06678(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  ulong *puVar7;
  
  *(undefined4 *)(param_2 + 0xe) = 1;
  *(undefined4 *)((long)param_2 + 0x74) = 1;
  param_2[1] = param_1;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined4 *)((long)param_2 + 0x9c) = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *(undefined4 *)((long)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0x121;
  uVar3 = FUN_00c062d0(param_2);
  *(uint *)(param_2 + 6) = uVar3;
  bVar2 = false;
  if (uVar3 == 0xef) {
    pcVar5 = (char *)param_2[4];
    pcVar1 = pcVar5 + 2;
    if ((char *)param_2[5] < pcVar1) {
      return 0;
    }
    if (*pcVar5 != -0x45) {
      return 0;
    }
    if (pcVar5[1] != -0x41) {
      return 0;
    }
    param_2[4] = pcVar1;
    if (pcVar1 < (char *)param_2[5]) {
      param_2[4] = pcVar5 + 3;
      uVar3 = (uint)(byte)pcVar5[2];
    }
    else {
      uVar3 = FUN_00c062d0(param_2);
    }
    *(uint *)(param_2 + 6) = uVar3;
    bVar2 = true;
  }
  if (uVar3 == 0x23) {
    do {
      pbVar4 = (byte *)param_2[4];
      if (pbVar4 < (byte *)param_2[5]) {
        param_2[4] = pbVar4 + 1;
        uVar3 = (uint)*pbVar4;
        *(uint *)(param_2 + 6) = (uint)*pbVar4;
      }
      else {
        uVar3 = FUN_00c062d0(param_2);
        *(uint *)(param_2 + 6) = uVar3;
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
    } while ((uVar3 != 0xd) && (uVar3 != 10));
    FUN_00c065b0(param_2);
    if (*(int *)(param_2 + 6) != 0x1b) {
      return 0;
    }
  }
  else {
    if (uVar3 != 0x1b) {
      return 0;
    }
    if (!bVar2) {
      return 1;
    }
  }
  puVar7 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar7 + 1;
  uVar6 = FUN_00bfab64(param_1,0xb64);
  *puVar7 = uVar6 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
  FUN_00bfa980(param_1,3);
}

