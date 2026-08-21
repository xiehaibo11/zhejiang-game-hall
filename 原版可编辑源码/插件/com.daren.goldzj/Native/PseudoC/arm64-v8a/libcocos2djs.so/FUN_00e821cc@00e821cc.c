
void FUN_00e821cc(long param_1,int *param_2,int *param_3,undefined8 param_4,char *param_5,
                 char param_6)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  int local_74 [6];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar2 = *param_2;
  cVar3 = param_5[9];
  uVar7 = 0;
  piVar8 = local_74 + 1;
  lVar9 = 8;
  if (cVar3 != '\0') {
    lVar9 = 9;
  }
  local_74[1] = iVar2;
  cVar4 = *param_5;
  pcVar1 = param_5;
  while( true ) {
    if (cVar4 != '\0') {
      if ((uint)uVar7 < (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3))
      {
        piVar10 = (int *)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        if (piVar10[1] == 1) {
          iVar5 = *piVar10;
          if (iVar5 < 0) {
            iVar5 = -(0x2000 - iVar5 >> 0xe);
          }
          else {
            iVar5 = iVar5 + 0x2000 >> 0xe;
          }
        }
        else if (piVar10[1] == 2) {
          iVar5 = *piVar10 << 0x10;
        }
        else {
          iVar5 = *piVar10;
        }
      }
      else {
        piVar10 = *(int **)(param_1 + 8);
        if ((piVar10 == (int *)0x0) || (*piVar10 != 0)) {
          iVar5 = 0;
        }
        else {
          *piVar10 = 0x82;
          iVar5 = 0;
        }
      }
      *piVar8 = iVar5 + iVar2;
      uVar7 = (ulong)((uint)uVar7 + 1);
    }
    if (lVar9 == 0) break;
    iVar2 = piVar8[-1];
    piVar8 = piVar8 + 1;
    pcVar1 = pcVar1 + 1;
    lVar9 = lVar9 + -1;
    *piVar8 = iVar2;
    cVar4 = *pcVar1;
  }
  uVar6 = (uint)uVar7;
  if (cVar3 == '\0') {
    local_4c = *param_3;
    if (param_6 != '\0') goto LAB_00e822f0;
LAB_00e8235c:
    if (param_5[10] == '\0') {
      local_48 = *param_2;
      cVar3 = param_5[0xb];
    }
    else {
      if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3)) {
        piVar8 = (int *)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        if (piVar8[1] == 1) {
          iVar2 = *piVar8;
          if (iVar2 < 0) {
            local_48 = -(0x2000 - iVar2 >> 0xe);
          }
          else {
            local_48 = iVar2 + 0x2000 >> 0xe;
          }
        }
        else if (piVar8[1] == 2) {
          local_48 = *piVar8 << 0x10;
        }
        else {
          local_48 = *piVar8;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 8);
        if ((piVar8 == (int *)0x0) || (*piVar8 != 0)) {
          local_48 = 0;
        }
        else {
          *piVar8 = 0x82;
          local_48 = 0;
        }
      }
      local_48 = local_48 + local_50;
      uVar7 = (ulong)(uVar6 + 1);
      cVar3 = param_5[0xb];
    }
    if (cVar3 != '\0') {
      if ((uint)uVar7 < (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3))
      {
        piVar8 = (int *)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        if (piVar8[1] == 1) {
          iVar2 = *piVar8;
          if (iVar2 < 0) {
            iVar11 = -(0x2000 - iVar2 >> 0xe);
          }
          else {
            iVar11 = iVar2 + 0x2000 >> 0xe;
          }
        }
        else if (piVar8[1] == 2) {
          iVar11 = *piVar8 << 0x10;
        }
        else {
          iVar11 = *piVar8;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 8);
        iVar11 = 0;
        if (piVar8 != (int *)0x0) {
          if (*piVar8 == 0) {
            *piVar8 = 0x82;
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
          }
        }
      }
      iVar11 = iVar11 + local_4c;
      goto LAB_00e82544;
    }
  }
  else {
    if (param_6 == '\0') goto LAB_00e8235c;
LAB_00e822f0:
    iVar5 = local_50 - *param_2;
    iVar2 = -iVar5;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    iVar11 = local_4c - *param_3;
    iVar5 = -iVar11;
    if (-1 < iVar11) {
      iVar5 = iVar11;
    }
    if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3)) {
      piVar8 = (int *)(*(long *)(param_1 + 0x10) + uVar7 * 8);
      if (piVar8[1] == 1) {
        iVar11 = *piVar8;
        if (iVar11 < 0) {
          iVar11 = -(0x2000 - iVar11 >> 0xe);
        }
        else {
          iVar11 = iVar11 + 0x2000 >> 0xe;
        }
      }
      else if (piVar8[1] == 2) {
        iVar11 = *piVar8 << 0x10;
      }
      else {
        iVar11 = *piVar8;
      }
joined_r0x00e823bc:
      if (iVar2 <= iVar5) {
LAB_00e82428:
        local_48 = *param_2;
        iVar11 = local_4c + iVar11;
        goto LAB_00e82544;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 8);
      if ((piVar8 == (int *)0x0) || (*piVar8 != 0)) {
        iVar11 = 0;
        goto joined_r0x00e823bc;
      }
      *piVar8 = 0x82;
      iVar11 = 0;
      if (iVar2 <= iVar5) {
        iVar11 = 0;
        goto LAB_00e82428;
      }
    }
    local_48 = local_50 + iVar11;
  }
  iVar11 = *param_3;
LAB_00e82544:
  iVar2 = local_48;
  local_44 = iVar11;
  FUN_00e81fd0(param_4,local_74[1],local_74[2],local_74[3],local_74[4],local_74[5],uStack_5c);
  FUN_00e81fd0(param_4,local_58,uStack_54,local_50,local_4c,iVar2,iVar11);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = iVar2;
  *param_3 = iVar11;
  return;
}

