
undefined4 FUN_01141c94(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (iVar3 = (**(code **)(param_2 + 0x48))(param_2), iVar3 == 0)) {
    FUN_01143c94(param_1,6,"Frame setup failed");
    return *param_1;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar3 = param_1[0x2da];
    uVar5 = (uint)(byte)(&DAT_014985e4)[iVar3];
    if (iVar3 != 2) goto LAB_01141cfc;
    iVar3 = 2;
    param_1[0x68] = 0;
  }
  else {
    uVar5 = 0;
    iVar3 = 0;
    param_1[0x2da] = 0;
LAB_01141cfc:
    iVar9 = (int)(*(int *)(param_2 + 0x78) - uVar5) >> 4;
    param_1[0x68] = iVar9;
    iVar1 = (int)(*(int *)(param_2 + 0x80) - uVar5) >> 4;
    param_1[0x69] = iVar1;
    if (iVar9 < 0) {
      param_1[0x68] = 0;
    }
    if (-1 < iVar1) goto LAB_01141d54;
  }
  param_1[0x69] = 0;
LAB_01141d54:
  iVar9 = (int)(uVar5 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
  param_1[0x6b] = iVar9;
  iVar1 = (int)(uVar5 + 0xf + *(int *)(param_2 + 0x7c)) >> 4;
  iVar8 = param_1[0x66];
  if (iVar1 <= (int)param_1[0x66]) {
    iVar8 = iVar1;
  }
  param_1[0x6a] = iVar8;
  if ((int)param_1[0x67] < iVar9) {
    param_1[0x6b] = param_1[0x67];
  }
  if (0 < iVar3) {
    lVar4 = 0;
    puVar6 = (undefined1 *)((long)param_1 + 0xb73);
    do {
      if (param_1[0x20] == 0) {
        iVar3 = param_1[0x15];
      }
      else {
        iVar3 = (int)*(char *)((long)param_1 + lVar4 + 0x90);
        if (param_1[0x22] == 0) {
          iVar3 = param_1[0x15] + iVar3;
        }
      }
      iVar9 = iVar3;
      if (param_1[0x17] != 0) {
        iVar9 = param_1[0x18] + iVar3;
      }
      iVar1 = iVar9;
      if (0x3e < iVar9) {
        iVar1 = 0x3f;
      }
      if (iVar9 < 1) {
        puVar6[-7] = 0;
      }
      else {
        iVar8 = param_1[0x16];
        iVar9 = iVar1;
        if (0 < iVar8) {
          iVar7 = 1;
          if (4 < iVar8) {
            iVar7 = 2;
          }
          iVar9 = 9 - iVar8;
          if (iVar1 >> iVar7 <= 9 - iVar8) {
            iVar9 = iVar1 >> iVar7;
          }
        }
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        puVar6[-6] = (char)iVar9;
        uVar2 = 2;
        if (iVar1 < 0x28) {
          uVar2 = 0xe < iVar1;
        }
        puVar6[-7] = (char)iVar9 + (char)(iVar1 << 1);
        puVar6[-4] = uVar2;
      }
      puVar6[-5] = 0;
      if (param_1[0x17] != 0) {
        iVar3 = param_1[0x18] + iVar3 + param_1[0x1c];
      }
      iVar9 = iVar3;
      if (0x3e < iVar3) {
        iVar9 = 0x3f;
      }
      iVar1 = iVar9;
      if (iVar3 < 1) {
        iVar1 = 0;
      }
      iVar8 = 1;
      if (iVar3 < 1) {
        puVar6[-3] = 0;
      }
      else {
        iVar3 = param_1[0x16];
        if (0 < iVar3) {
          if (4 < iVar3) {
            iVar8 = 2;
          }
          iVar9 = 9 - iVar3;
          if (iVar1 >> iVar8 <= 9 - iVar3) {
            iVar9 = iVar1 >> iVar8;
          }
        }
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        puVar6[-2] = (char)iVar9;
        uVar2 = 2;
        if (iVar1 < 0x28) {
          uVar2 = 0xe < iVar1;
        }
        puVar6[-3] = (char)iVar9 + (char)(iVar1 << 1);
        *puVar6 = uVar2;
      }
      lVar4 = lVar4 + 1;
      puVar6[-1] = 1;
      puVar6 = puVar6 + 8;
    } while (lVar4 != 4);
  }
  return 0;
}

