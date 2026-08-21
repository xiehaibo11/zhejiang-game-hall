
void FUN_00e81ba4(long param_1,long param_2,undefined8 param_3,int *param_4,char *param_5,
                 int param_6)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  piVar5 = *(int **)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  uVar2 = (ulong)(lVar4 - (long)piVar5) >> 3;
  uVar9 = (uint)uVar2 & 1;
  uVar8 = (uint)((ulong)(lVar4 - (long)piVar5) >> 3);
  if (((*(char *)(param_1 + 0xc) == '\0') && ((uVar2 & 1) != 0)) && (*param_5 == '\0')) {
    if (uVar8 == 0) {
      piVar7 = *(int **)(param_2 + 8);
      if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
        iVar6 = 0;
      }
      else {
        *piVar7 = 0x82;
        iVar6 = 0;
      }
    }
    else if (piVar5[1] == 1) {
      iVar6 = *piVar5;
      if (iVar6 < 0) {
        iVar6 = -(0x2000 - iVar6 >> 0xe);
      }
      else {
        iVar6 = iVar6 + 0x2000 >> 0xe;
      }
    }
    else if (piVar5[1] == 2) {
      iVar6 = *piVar5 << 0x10;
    }
    else {
      iVar6 = *piVar5;
    }
    *param_4 = iVar6 + *(int *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x420) + 0x408) * 0x10000;
    cVar1 = *(char *)(*(long *)(param_1 + 0xf0) + 0x438);
  }
  else {
    cVar1 = *(char *)(*(long *)(param_1 + 0xf0) + 0x438);
  }
  if (cVar1 != '\0') goto LAB_00e81e24;
  if (uVar9 < uVar8) {
    uVar9 = uVar9 + 1;
    do {
      uVar3 = (uint)((ulong)(lVar4 - (long)piVar5) >> 3);
      if (uVar9 - 1 < uVar3) {
        piVar7 = piVar5 + (ulong)(uVar9 - 1) * 2;
        if (piVar7[1] == 1) {
          iVar6 = *piVar7;
          if (iVar6 < 0) {
            local_64 = -(0x2000 - iVar6 >> 0xe);
          }
          else {
            local_64 = iVar6 + 0x2000 >> 0xe;
          }
        }
        else {
          if (piVar7[1] == 2) {
            local_64 = *piVar7 * 0x10000 + param_6;
            goto joined_r0x00e81d2c;
          }
          local_64 = *piVar7;
        }
        local_64 = local_64 + param_6;
joined_r0x00e81c88:
        if (uVar9 < uVar3) goto LAB_00e81c8c;
LAB_00e81cd0:
        piVar5 = *(int **)(param_2 + 8);
        if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
          param_6 = 0;
        }
        else {
          *piVar5 = 0x82;
          param_6 = 0;
        }
      }
      else {
        piVar7 = *(int **)(param_2 + 8);
        local_64 = param_6;
        if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) goto joined_r0x00e81c88;
        *piVar7 = 0x82;
joined_r0x00e81d2c:
        if (uVar3 <= uVar9) goto LAB_00e81cd0;
LAB_00e81c8c:
        piVar5 = piVar5 + (ulong)uVar9 * 2;
        if (piVar5[1] == 1) {
          iVar6 = *piVar5;
          if (iVar6 < 0) {
            param_6 = -(0x2000 - iVar6 >> 0xe);
          }
          else {
            param_6 = iVar6 + 0x2000 >> 0xe;
          }
        }
        else if (piVar5[1] == 2) {
          param_6 = *piVar5 << 0x10;
        }
        else {
          param_6 = *piVar5;
        }
      }
      param_6 = param_6 + local_64;
      uStack_5c = 0;
      local_68[0] = 0;
      local_58 = 0;
      local_60 = param_6;
      FUN_00e831c0(param_3,local_68);
      if (uVar8 <= uVar9 + 1) goto code_r0x00e81d88;
      piVar5 = *(int **)(param_2 + 0x10);
      lVar4 = *(long *)(param_2 + 0x18);
      uVar9 = uVar9 + 2;
    } while( true );
  }
LAB_00e81d8c:
  *(int **)(param_2 + 0x18) = piVar5;
LAB_00e81e24:
  *param_5 = '\x01';
  return;
code_r0x00e81d88:
  piVar5 = *(int **)(param_2 + 0x10);
  goto LAB_00e81d8c;
}

