
undefined8 FUN_00a668f0(long *param_1,ulong param_2,int param_3)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  
  lVar5 = *param_1;
  lVar9 = *(long *)(lVar5 + 0x218);
  if (param_3 - 0xdU < 2) {
    puVar11 = (undefined8 *)(lVar5 + 1000);
  }
  else if (param_3 == 0xf) {
    puVar11 = (undefined8 *)(lVar5 + 0x3e0);
  }
  else {
    puVar11 = (undefined8 *)(lVar5 + 0x3d8);
  }
  puVar11 = (undefined8 *)*puVar11;
  plVar2 = param_1 + 0xc3;
  if ((param_2 & 1) == 0) {
    iVar12 = *(int *)((long)param_1 + 0x6bc) + 1;
    *(int *)((long)param_1 + 0x6bc) = iVar12;
  }
  else {
    iVar12 = 0;
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (iVar12 < 1) {
LAB_00a66970:
      pcVar10 = (char *)*puVar11;
      pcVar4 = pcVar10 + 1;
      if (*pcVar10 != '*') {
        pcVar4 = pcVar10;
      }
      *(uint *)(param_1 + 0xd8) = (uint)(*pcVar10 == '*');
      uVar6 = FUN_00a54d8c(plVar2,"%s",pcVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(int *)(param_1 + 0xd9) = param_3;
      return uVar6;
    }
    iVar14 = 1;
    do {
      puVar11 = (undefined8 *)puVar11[1];
      if (puVar11 == (undefined8 *)0x0) break;
      bVar1 = iVar14 < iVar12;
      iVar14 = iVar14 + 1;
    } while (bVar1);
    if (puVar11 != (undefined8 *)0x0) goto LAB_00a66970;
  }
  if (param_3 == 0xd) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0xd9) = 0;
      return 0;
    }
    if (param_1[0xdc] != -1) {
      FUN_00a30eac();
      uVar6 = FUN_00a66efc(param_1,param_1[0xdc]);
      return uVar6;
    }
    if (*(char *)(lVar5 + 0x63f) == '\0') {
      uVar6 = FUN_00a54d8c(plVar2,"SIZE %s",param_1[0xd4]);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar8 = 0x18;
    }
    else {
      uVar6 = FUN_00a54d8c(plVar2,"RETR %s",param_1[0xd4]);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar8 = 0x20;
    }
    goto LAB_00a66bc4;
  }
  if (param_3 == 0xe) {
    uVar6 = FUN_00a67080(param_1,0);
    return uVar6;
  }
  if (param_3 == 0xf) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x6aa) == '\0') {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(uint *)((long)param_1 + 0x6c4) = (uint)(*(int *)(lVar5 + 0x5fc) == 2);
    if ((*(char *)((long)param_1 + 0x3ba) == '\0') || (lVar7 = param_1[0xd1], lVar7 == 0)) {
      if ((int)param_1[0xd3] == 0) goto LAB_00a66a08;
      *(undefined4 *)((long)param_1 + 0x6bc) = 1;
      lVar7 = *(long *)param_1[0xd2];
    }
    else {
      *(undefined4 *)((long)param_1 + 0x6bc) = 0;
    }
    uVar6 = FUN_00a54d8c(plVar2,"CWD %s",lVar7);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar8 = 0x10;
    goto LAB_00a66bc4;
  }
LAB_00a66a08:
  if (((*(char *)(lVar5 + 0x611) != '\0') || (*(int *)(lVar5 + 0x420) != 0)) && (param_1[0xd4] != 0)
     ) {
    uVar6 = FUN_00a54d8c(param_1 + 0xc3,"MDTM %s");
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar8 = 0x12;
    goto LAB_00a66bc4;
  }
  if ((*(char *)(lVar5 + 0x620) == '\0') || (param_1[0xd4] == 0)) {
LAB_00a66abc:
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_00a66b60:
      uVar6 = FUN_00a67274(param_1);
      return uVar6;
    }
    if ((*(int *)(lVar9 + 0x18) != 1) || (param_1[0xd4] == 0)) {
      if (param_1[0xd4] == 0) goto LAB_00a66b60;
      uVar6 = FUN_00a54d8c(param_1 + 0xc3,"REST %d",0);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar8 = 0x1a;
      goto LAB_00a66bc4;
    }
  }
  else {
    lVar7 = param_1[0xd7];
    cVar13 = 'A';
    cVar3 = cVar13;
    if (*(char *)(lVar5 + 0x613) == '\0') {
      cVar3 = 'I';
    }
    if (cVar3 == (char)lVar7) goto LAB_00a66abc;
    if (*(char *)(lVar5 + 0x613) == '\0') {
      cVar13 = 'I';
    }
    *(undefined4 *)(lVar9 + 0x18) = 1;
    if ((char)lVar7 != cVar13) {
      uVar6 = FUN_00a54d8c(param_1 + 0xc3,"TYPE %c",cVar13);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(undefined4 *)(param_1 + 0xd9) = 0x13;
      *(char *)(param_1 + 0xd7) = cVar13;
      return uVar6;
    }
    *(undefined4 *)(param_1 + 0xd9) = 0x13;
  }
  uVar6 = FUN_00a54d8c(param_1 + 0xc3,"SIZE %s");
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar8 = 0x17;
LAB_00a66bc4:
  *(undefined4 *)(param_1 + 0xd9) = uVar8;
  return uVar6;
}

