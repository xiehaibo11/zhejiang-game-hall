
int FUN_00d4e804(long *param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pbVar6 = (byte *)*param_1;
  pbVar8 = pbVar6;
  if (pbVar6 == param_2) {
    pbVar7 = (byte *)0x0;
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      pbVar9 = pbVar8;
      if (*pbVar8 == 10) break;
      pbVar8 = pbVar8 + 1;
      *param_1 = (long)pbVar8;
      pbVar9 = param_2;
    } while (param_2 != pbVar8);
    iVar2 = isspace((uint)*pbVar6);
    pbVar8 = pbVar9;
    if ((iVar2 == 0) || (pbVar9 <= pbVar6)) {
LAB_00d4e8a8:
      pbVar5 = pbVar9;
      pbVar7 = pbVar6;
      if (pbVar6 != pbVar9) {
        do {
          pbVar8 = pbVar5;
          pbVar5 = pbVar8 + -1;
          iVar2 = isspace((uint)*pbVar5);
          if (pbVar5 < pbVar6) break;
        } while (iVar2 != 0);
      }
    }
    else {
      do {
        pbVar5 = pbVar6 + 1;
        iVar2 = isspace((uint)*pbVar5);
        if (iVar2 == 0) {
          pbVar6 = pbVar6 + 1;
          goto LAB_00d4e8a8;
        }
        pbVar6 = pbVar5;
        pbVar7 = pbVar9;
      } while (pbVar9 != pbVar5);
    }
    if (pbVar9 != param_2) {
      *param_1 = (long)(pbVar9 + 1);
    }
  }
  pbVar6 = (byte *)0x0;
  pbVar9 = pbVar8 + -(long)pbVar7;
  do {
    if (pbVar9 == pbVar6) {
      return 0;
    }
    pbVar5 = pbVar7 + (long)pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (*pbVar5 != 0x3a);
  pbVar5 = pbVar7 + (long)pbVar6;
  *param_3 = (long)pbVar5;
  do {
    if (pbVar9 == pbVar6) {
      uVar4 = 0;
      goto LAB_00d4eb14;
    }
    pbVar1 = pbVar7 + (long)pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (*pbVar1 != 0x2c);
  pbVar1 = pbVar7 + (long)pbVar6;
  param_3[1] = (long)(pbVar1 + -2);
  iVar2 = isspace((uint)*pbVar5);
  while ((iVar2 != 0 && (pbVar10 = pbVar5 + 1, pbVar5 < pbVar1 + -2))) {
    *param_3 = (long)pbVar10;
    iVar2 = isspace((uint)*pbVar10);
    pbVar5 = pbVar10;
  }
  if (pbVar5 + (2 - (long)pbVar7) != pbVar6) {
    pbVar10 = pbVar1 + -3;
    do {
      pbVar11 = pbVar10;
      param_3[1] = (long)pbVar11;
      iVar2 = isspace((uint)*pbVar11);
      if (pbVar11 < pbVar5) break;
      pbVar10 = pbVar11 + -1;
    } while (iVar2 != 0);
    param_3[1] = (long)(pbVar11 + 1);
  }
  param_3[2] = (long)pbVar1;
  do {
    if (pbVar9 == pbVar6) {
      uVar4 = 1;
      pbVar5 = pbVar1;
      goto LAB_00d4eb14;
    }
    pbVar5 = pbVar7 + (long)pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (*pbVar5 != 0x2c);
  pbVar5 = pbVar7 + (long)pbVar6;
  pbVar9 = pbVar5 + -2;
  param_3[3] = (long)pbVar9;
  iVar2 = isspace((uint)*pbVar1);
  pbVar10 = pbVar8 + (-(long)pbVar6 - (long)pbVar7);
  while ((iVar2 != 0 && (pbVar11 = pbVar1 + 1, pbVar1 < pbVar9))) {
    param_3[2] = (long)pbVar11;
    iVar2 = isspace((uint)*pbVar11);
    pbVar1 = pbVar11;
  }
  if (pbVar1 + (2 - (long)pbVar7) != pbVar6) {
    pbVar6 = pbVar5 + -3;
    do {
      pbVar7 = pbVar6;
      param_3[3] = (long)pbVar7;
      iVar2 = isspace((uint)*pbVar7);
      if (pbVar7 < pbVar1) break;
      pbVar6 = pbVar7 + -1;
    } while (iVar2 != 0);
    param_3[3] = (long)(pbVar7 + 1);
  }
  param_3[4] = (long)pbVar5;
  pbVar6 = pbVar5;
  do {
    pbVar7 = pbVar6;
    if (pbVar10 == (byte *)0x0) {
      uVar4 = 2;
      goto LAB_00d4eb14;
    }
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + -1;
    pbVar6 = pbVar7 + 1;
  } while (*pbVar7 != 0x2c);
  param_3[5] = (long)(pbVar7 + -1);
  iVar2 = isspace((uint)*pbVar5);
  while ((iVar2 != 0 && (pbVar6 = pbVar5 + 1, pbVar5 < pbVar7 + -1))) {
    param_3[4] = (long)pbVar6;
    iVar2 = isspace((uint)*pbVar6);
    pbVar5 = pbVar6;
  }
  if (pbVar5 != pbVar9) {
    pbVar6 = pbVar7 + -2;
    do {
      pbVar9 = pbVar6;
      param_3[5] = (long)pbVar9;
      iVar2 = isspace((uint)*pbVar9);
      if (pbVar9 < pbVar5) break;
      pbVar6 = pbVar9 + -1;
    } while (iVar2 != 0);
    param_3[5] = (long)(pbVar9 + 1);
  }
  uVar4 = 3;
  pbVar5 = pbVar7 + 1;
LAB_00d4eb14:
  param_3 = param_3 + (ulong)uVar4 * 2;
  *param_3 = (long)pbVar5;
  plVar3 = param_3 + 1;
  *plVar3 = (long)pbVar8;
  iVar2 = isspace((uint)*pbVar5);
  while ((iVar2 != 0 && (pbVar6 = pbVar5 + 1, pbVar5 < pbVar8))) {
    *param_3 = (long)pbVar6;
    iVar2 = isspace((uint)*pbVar6);
    pbVar5 = pbVar6;
  }
  if (pbVar5 != pbVar8) {
    do {
      pbVar6 = pbVar8;
      pbVar8 = pbVar6 + -1;
      *plVar3 = (long)pbVar8;
      iVar2 = isspace((uint)*pbVar8);
      if (pbVar8 < pbVar5) break;
    } while (iVar2 != 0);
    *plVar3 = (long)pbVar6;
  }
  return uVar4 + 1;
}

