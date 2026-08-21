
uint FUN_00e84208(char *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  cVar6 = *param_1;
  pcVar5 = param_1;
  if (cVar6 != 'u') goto LAB_00e84418;
  bVar1 = param_1[1];
  if ((bVar1 == 0x6e) && (param_1[2] == 'i')) {
    bVar2 = param_1[3];
    uVar4 = bVar2 - 0x30;
    if (9 < uVar4) {
      uVar4 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00e84348;
    }
    bVar2 = param_1[4];
    uVar8 = bVar2 - 0x30;
    if (uVar8 < 10) {
      iVar7 = uVar8 + uVar4 * 0x10;
      bVar2 = param_1[5];
      uVar4 = bVar2 - 0x30;
      if (uVar4 < 10) goto LAB_00e842a0;
LAB_00e842f4:
      uVar4 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00e84348;
      iVar7 = uVar4 + iVar7 * 0x10;
      uVar8 = (uint)(byte)param_1[6];
      uVar4 = uVar8 - 0x30;
      if (9 < uVar4) goto LAB_00e842b4;
LAB_00e84324:
      uVar4 = uVar4 + iVar7 * 0x10;
      cVar3 = param_1[7];
    }
    else {
      uVar8 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar8 = bVar2 - 0x37;
      }
      if (0xf < uVar8) goto LAB_00e84348;
      iVar7 = uVar8 + uVar4 * 0x10;
      bVar2 = param_1[5];
      uVar4 = bVar2 - 0x30;
      if (9 < uVar4) goto LAB_00e842f4;
LAB_00e842a0:
      iVar7 = uVar4 + iVar7 * 0x10;
      uVar8 = (uint)(byte)param_1[6];
      uVar4 = (byte)param_1[6] - 0x30;
      if (uVar4 < 10) goto LAB_00e84324;
LAB_00e842b4:
      uVar4 = 0x10;
      if (uVar8 - 0x41 < 6) {
        uVar4 = uVar8 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00e84348;
      uVar4 = uVar4 + iVar7 * 0x10;
      cVar3 = param_1[7];
    }
    if (cVar3 == '\0') {
      return uVar4;
    }
    if (cVar3 == '.') {
      return uVar4 | 0x80000000;
    }
  }
LAB_00e84348:
  uVar4 = bVar1 - 0x30;
  if (9 < uVar4) {
    uVar4 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar4 = bVar1 - 0x37;
    }
    if (0xf < uVar4) goto LAB_00e84418;
  }
  bVar1 = param_1[2];
  uVar8 = bVar1 - 0x30;
  if (uVar8 < 10) {
    iVar7 = uVar8 + uVar4 * 0x10;
    bVar1 = param_1[3];
    uVar4 = bVar1 - 0x30;
    if (uVar4 < 10) goto LAB_00e843b0;
LAB_00e843fc:
    uVar4 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar4 = bVar1 - 0x37;
    }
    if (0xf < uVar4) goto LAB_00e84418;
    iVar7 = uVar4 + iVar7 * 0x10;
    uVar8 = (uint)(byte)param_1[4];
    uVar4 = uVar8 - 0x30;
    if (9 < uVar4) goto LAB_00e843c4;
LAB_00e84440:
    uVar4 = uVar4 + iVar7 * 0x10;
  }
  else {
    uVar8 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar8 = bVar1 - 0x37;
    }
    if (0xf < uVar8) goto LAB_00e84418;
    iVar7 = uVar8 + uVar4 * 0x10;
    bVar1 = param_1[3];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) goto LAB_00e843fc;
LAB_00e843b0:
    iVar7 = uVar4 + iVar7 * 0x10;
    uVar8 = (uint)(byte)param_1[4];
    uVar4 = (byte)param_1[4] - 0x30;
    if (uVar4 < 10) goto LAB_00e84440;
LAB_00e843c4:
    uVar4 = 0x10;
    if (uVar8 - 0x41 < 6) {
      uVar4 = uVar8 - 0x37;
    }
    if (0xf < uVar4) {
LAB_00e84418:
      if (cVar6 != '.') goto LAB_00e84500;
      goto LAB_00e84508;
    }
    uVar4 = uVar4 + iVar7 * 0x10;
  }
  pbVar9 = (byte *)(param_1 + 5);
  bVar1 = *pbVar9;
  uVar8 = bVar1 - 0x30;
  if (uVar8 < 10) {
    uVar4 = uVar8 + uVar4 * 0x10;
LAB_00e84480:
    pbVar9 = (byte *)(param_1 + 6);
    bVar1 = *pbVar9;
    uVar8 = bVar1 - 0x30;
    if (uVar8 < 10) {
      uVar4 = uVar8 + uVar4 * 0x10;
      pbVar9 = (byte *)(param_1 + 7);
    }
    else {
      uVar8 = 0x10;
      if (bVar1 - 0x41 < 6) {
        uVar8 = bVar1 - 0x37;
      }
      if (uVar8 < 0x10) {
        uVar4 = uVar8 + uVar4 * 0x10;
        bVar1 = param_1[7];
        goto joined_r0x00e844bc;
      }
    }
  }
  else {
    uVar8 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar8 = bVar1 - 0x37;
    }
    if (uVar8 < 0x10) {
      uVar4 = uVar8 + uVar4 * 0x10;
      goto LAB_00e84480;
    }
  }
  bVar1 = *pbVar9;
joined_r0x00e844bc:
  if (bVar1 != 0) {
    if (bVar1 != 0x2e) {
      do {
        if (cVar6 == '.') {
LAB_00e84508:
          if (param_1 < pcVar5) {
            uVar4 = FUN_00e84ec0();
            return uVar4 | 0x80000000;
          }
        }
        else {
LAB_00e84500:
          if (cVar6 == '\0') {
            uVar4 = FUN_00e84ec0();
            return uVar4;
          }
        }
        pcVar5 = pcVar5 + 1;
        cVar6 = *pcVar5;
      } while( true );
    }
    uVar4 = uVar4 | 0x80000000;
  }
  return uVar4;
}

