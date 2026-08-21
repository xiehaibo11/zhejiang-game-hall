
long FUN_00c00864(long param_1,char *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  char *__s;
  char *pcVar8;
  undefined1 uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  char *local_28;
  char *local_20;
  char *local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  lVar15 = *(long *)(param_1 + 0x10);
  plVar1 = (long *)(lVar15 + 0x88);
  lVar7 = param_3[1];
  *(long *)(lVar15 + 0xa0) = param_1;
  piVar11 = (int *)*param_3;
  iVar13 = *(int *)(param_3 + 3);
  *(undefined8 *)(lVar15 + 0x88) = *(undefined8 *)(lVar15 + 0x98);
  sVar3 = strlen(param_2);
  iVar16 = *(int *)((long)param_3 + 0x1c);
  local_18 = param_2 + (sVar3 & 0xffffffff);
  local_28 = "(null)";
  local_20 = param_2;
LAB_00c008e8:
  uVar2 = FUN_00bff14c(&local_20);
  do {
    if (uVar2 == 0) {
      uVar5 = FUN_00bfba1c(param_1,*(undefined8 *)(lVar15 + 0x98),
                           (int)*(undefined8 *)(lVar15 + 0x88) - (int)*(undefined8 *)(lVar15 + 0x98)
                          );
      **(ulong **)(param_1 + 0x28) = uVar5 | 0xfffd800000000000;
      uVar10 = *(long *)(param_1 + 0x28) + 8;
      *(ulong *)(param_1 + 0x28) = uVar10;
      if (*(ulong *)(param_1 + 0x30) <= uVar10) {
        FUN_00bfe164(param_1);
      }
      return uVar5 + 0x18;
    }
    uVar10 = (ulong)(uVar2 & 0xf);
    switch(uVar2 & 0xf) {
    case 2:
      goto switchD_00c009ac_caseD_2;
    case 3:
      piVar6 = piVar11;
      if (iVar13 < 0) {
        iVar14 = iVar13 + 8;
        if (iVar14 < 1) {
          piVar6 = (int *)(lVar7 + iVar13);
          iVar13 = iVar14;
        }
        else {
          piVar11 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
          iVar13 = iVar14;
        }
      }
      else {
        piVar11 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
      }
      FUN_00bffbc4(plVar1,uVar2,(long)*piVar6);
      goto LAB_00c008e8;
    case 4:
      piVar6 = piVar11;
      if (iVar13 < 0) {
        iVar14 = iVar13 + 8;
        if (iVar14 < 1) {
          piVar6 = (int *)(lVar7 + iVar13);
          iVar13 = iVar14;
        }
        else {
          piVar11 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
          iVar13 = iVar14;
        }
      }
      else {
        piVar11 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
      }
      FUN_00bffbc4(plVar1,uVar2,*piVar6);
      goto LAB_00c008e8;
    case 5:
      piVar6 = piVar11;
      if (iVar16 < 0) {
        iVar14 = iVar16 + 0x10;
        if (iVar14 < 1) {
          piVar6 = (int *)(param_3[2] + (long)iVar16);
          iVar16 = iVar14;
        }
        else {
          piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
          iVar16 = iVar14;
        }
      }
      else {
        piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
      }
      FUN_00c030d0(*(undefined8 *)piVar6,plVar1,0xf000035);
      goto LAB_00c008e8;
    case 6:
      if (iVar13 < 0) {
        iVar14 = iVar13 + 8;
        if (iVar14 < 1) {
          piVar6 = (int *)(lVar7 + iVar13);
          goto LAB_00c009f0;
        }
        __s = *(char **)piVar11;
        iVar13 = iVar14;
        piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
      }
      else {
        piVar6 = piVar11;
        piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
        iVar14 = iVar13;
LAB_00c009f0:
        __s = *(char **)piVar6;
        iVar13 = iVar14;
      }
      pcVar8 = local_28;
      if (__s != (char *)0x0) {
        sVar3 = strlen(__s);
        uVar10 = sVar3 & 0xffffffff;
        pcVar8 = __s;
      }
      FUN_00c1a5d8(plVar1,pcVar8,uVar10);
      goto LAB_00c008e8;
    case 7:
      if (iVar13 < 0) {
        iVar14 = iVar13 + 8;
        if (iVar14 < 1) {
          piVar6 = (int *)(lVar7 + iVar13);
          piVar12 = piVar11;
          goto LAB_00c009c0;
        }
        piVar12 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
        puVar4 = (undefined1 *)*plVar1;
        uVar9 = (undefined1)*piVar11;
        iVar13 = iVar14;
        if ((int)*(undefined8 *)(lVar15 + 0x90) == (int)puVar4) goto LAB_00c00ae4;
      }
      else {
        piVar6 = piVar11;
        piVar12 = (int *)((long)piVar11 + 0xbU & 0xfffffffffffffff8);
        iVar14 = iVar13;
LAB_00c009c0:
        puVar4 = (undefined1 *)*plVar1;
        uVar9 = (undefined1)*piVar6;
        iVar13 = iVar14;
        if ((int)*(undefined8 *)(lVar15 + 0x90) == (int)puVar4) {
LAB_00c00ae4:
          puVar4 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
          iVar13 = iVar14;
        }
      }
      *puVar4 = uVar9;
      *plVar1 = (long)(puVar4 + 1);
      piVar11 = piVar12;
      goto LAB_00c008e8;
    case 8:
      piVar6 = piVar11;
      if (iVar13 < 0) {
        iVar14 = iVar13 + 8;
        if (iVar14 < 1) {
          piVar6 = (int *)(lVar7 + iVar13);
          iVar13 = iVar14;
        }
        else {
          piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
          iVar13 = iVar14;
        }
      }
      else {
        piVar11 = (int *)((long)piVar11 + 0xfU & 0xfffffffffffffff8);
      }
      FUN_00bff758(plVar1,*(undefined8 *)piVar6);
      goto LAB_00c008e8;
    default:
      puVar4 = (undefined1 *)*plVar1;
      if ((int)*(undefined8 *)(lVar15 + 0x90) == (int)puVar4) {
        puVar4 = (undefined1 *)FUN_00c1a4a8(plVar1,1);
      }
      *puVar4 = 0x3f;
      *plVar1 = (long)(puVar4 + 1);
      uVar2 = FUN_00bff14c(&local_20);
    }
  } while( true );
switchD_00c009ac_caseD_2:
  FUN_00c1a5d8(plVar1,local_10,local_8);
  goto LAB_00c008e8;
}

