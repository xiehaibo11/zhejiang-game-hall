
/* spine::Atlas::readTuple(char const**, char const*, spine::Atlas::Str*) */

int spine::Atlas::readTuple(char **param_1,char *param_2,Str *param_3)

{
  byte *pbVar1;
  Str *pSVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  Str *pSVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pbVar11 = (byte *)*param_1;
  pbVar6 = pbVar11;
  if (pbVar11 == (byte *)param_2) {
    pbVar6 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
  }
  else {
    do {
      pbVar10 = pbVar6;
      if (*pbVar6 == 10) break;
      pbVar6 = pbVar6 + 1;
      *param_1 = (char *)pbVar6;
      pbVar10 = (byte *)param_2;
    } while ((byte *)param_2 != pbVar6);
    iVar3 = isspace((uint)*pbVar11);
    while ((iVar3 != 0 && (pbVar11 < pbVar10))) {
      pbVar11 = pbVar11 + 1;
      iVar3 = isspace((uint)*pbVar11);
    }
    pbVar6 = pbVar10;
    pbVar4 = pbVar10;
    if (pbVar11 != pbVar10) {
      do {
        pbVar6 = pbVar4;
        pbVar4 = pbVar6 + -1;
        if (pbVar4 < pbVar11) break;
      } while (*pbVar4 == 0xd);
    }
    if (pbVar10 != (byte *)param_2) {
      *param_1 = (char *)(pbVar10 + 1);
    }
  }
  pbVar10 = (byte *)0x0;
  pbVar4 = pbVar6 + -(long)pbVar11;
  do {
    if (pbVar4 == pbVar10) {
      return 0;
    }
    pbVar8 = pbVar11 + (long)pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (*pbVar8 != 0x3a);
  pbVar8 = pbVar11 + (long)pbVar10;
  *(byte **)param_3 = pbVar8;
  do {
    if (pbVar4 == pbVar10) {
      uVar9 = 0;
      goto LAB_00ce2f4c;
    }
    pbVar1 = pbVar11 + (long)pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (*pbVar1 != 0x2c);
  pbVar1 = pbVar11 + (long)pbVar10;
  *(byte **)(param_3 + 8) = pbVar1 + -2;
  iVar3 = isspace((uint)*pbVar8);
  while ((iVar3 != 0 && (pbVar12 = pbVar8 + 1, pbVar8 < pbVar1 + -2))) {
    *(byte **)param_3 = pbVar12;
    iVar3 = isspace((uint)*pbVar12);
    pbVar8 = pbVar12;
  }
  if (pbVar8 + (2 - (long)pbVar11) != pbVar10) {
    pbVar12 = pbVar1 + -3;
    do {
      pbVar5 = pbVar12;
      *(byte **)(param_3 + 8) = pbVar5;
      if (pbVar5 < pbVar8) break;
      pbVar12 = pbVar5 + -1;
    } while (*pbVar5 == 0xd);
    *(byte **)(param_3 + 8) = pbVar5 + 1;
  }
  *(byte **)(param_3 + 0x10) = pbVar1;
  do {
    if (pbVar4 == pbVar10) {
      uVar9 = 1;
      pbVar8 = pbVar1;
      goto LAB_00ce2f4c;
    }
    pbVar8 = pbVar11 + (long)pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (*pbVar8 != 0x2c);
  pbVar8 = pbVar11 + (long)pbVar10;
  pbVar4 = pbVar8 + -2;
  *(byte **)(param_3 + 0x18) = pbVar4;
  iVar3 = isspace((uint)*pbVar1);
  while ((iVar3 != 0 && (pbVar12 = pbVar1 + 1, pbVar1 < pbVar4))) {
    *(byte **)(param_3 + 0x10) = pbVar12;
    iVar3 = isspace((uint)*pbVar12);
    pbVar1 = pbVar12;
  }
  pbVar12 = pbVar6 + (-(long)pbVar10 - (long)pbVar11);
  if (pbVar1 + (2 - (long)pbVar11) != pbVar10) {
    pbVar11 = pbVar8 + -3;
    do {
      pbVar10 = pbVar11;
      *(byte **)(param_3 + 0x18) = pbVar10;
      if (pbVar10 < pbVar1) break;
      pbVar11 = pbVar10 + -1;
    } while (*pbVar10 == 0xd);
    *(byte **)(param_3 + 0x18) = pbVar10 + 1;
  }
  *(byte **)(param_3 + 0x20) = pbVar8;
  pbVar11 = pbVar8;
  do {
    pbVar10 = pbVar11;
    if (pbVar12 == (byte *)0x0) {
      uVar9 = 2;
      goto LAB_00ce2f4c;
    }
    pbVar4 = pbVar4 + 1;
    pbVar12 = pbVar12 + -1;
    pbVar11 = pbVar10 + 1;
  } while (*pbVar10 != 0x2c);
  *(byte **)(param_3 + 0x28) = pbVar10 + -1;
  iVar3 = isspace((uint)*pbVar8);
  while ((iVar3 != 0 && (pbVar11 = pbVar8 + 1, pbVar8 < pbVar10 + -1))) {
    *(byte **)(param_3 + 0x20) = pbVar11;
    iVar3 = isspace((uint)*pbVar11);
    pbVar8 = pbVar11;
  }
  if (pbVar8 != pbVar4) {
    pbVar11 = pbVar10 + -2;
    do {
      pbVar4 = pbVar11;
      *(byte **)(param_3 + 0x28) = pbVar4;
      if (pbVar4 < pbVar8) break;
      pbVar11 = pbVar4 + -1;
    } while (*pbVar4 == 0xd);
    *(byte **)(param_3 + 0x28) = pbVar4 + 1;
  }
  uVar9 = 3;
  pbVar8 = pbVar10 + 1;
LAB_00ce2f4c:
  pSVar2 = param_3 + (ulong)uVar9 * 0x10;
  *(byte **)pSVar2 = pbVar8;
  pSVar7 = pSVar2 + 8;
  *(byte **)pSVar7 = pbVar6;
  iVar3 = isspace((uint)*pbVar8);
  while ((iVar3 != 0 && (pbVar11 = pbVar8 + 1, pbVar8 < pbVar6))) {
    *(byte **)pSVar2 = pbVar11;
    iVar3 = isspace((uint)*pbVar11);
    pbVar8 = pbVar11;
  }
  if (pbVar8 != pbVar6) {
    do {
      pbVar11 = pbVar6;
      pbVar6 = pbVar11 + -1;
      *(byte **)pSVar7 = pbVar6;
      if (pbVar6 < pbVar8) break;
    } while (*pbVar6 == 0xd);
    *(byte **)pSVar7 = pbVar11;
  }
  return uVar9 + 1;
}

