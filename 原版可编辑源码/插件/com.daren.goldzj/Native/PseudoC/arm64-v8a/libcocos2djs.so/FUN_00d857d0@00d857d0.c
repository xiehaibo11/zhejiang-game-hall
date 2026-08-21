
char FUN_00d857d0(long *param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  
  lVar13 = param_1[(long)param_2 + 0xe];
  if (lVar13 == 0) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x36;
    *(int *)((long)puVar6 + 0x2c) = param_2;
    (*(code *)*puVar6)(param_1);
    iVar4 = (int)param_1[0x3d];
  }
  else {
    iVar4 = (int)param_1[0x3d];
  }
  if (iVar4 < 0) {
    cVar12 = '\0';
    iVar4 = *(int *)(lVar13 + 0x80);
  }
  else {
    cVar12 = '\0';
    lVar9 = 0;
    do {
      if (0xff < *(ushort *)(lVar13 + (long)*(int *)(param_1[0x3c] + lVar9 * 4) * 2)) {
        cVar12 = '\x01';
      }
      bVar1 = lVar9 < iVar4;
      lVar9 = lVar9 + 1;
    } while (bVar1);
    iVar4 = *(int *)(lVar13 + 0x80);
  }
  if (iVar4 == 0) {
    puVar6 = (undefined8 *)param_1[5];
    puVar8 = (undefined1 *)*puVar6;
    *puVar6 = puVar8 + 1;
    *puVar8 = 0xff;
    lVar9 = puVar6[1];
    puVar6[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (iVar4 = (*(code *)puVar6[3])(param_1), iVar4 == 0)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)param_1[5];
    puVar8 = (undefined1 *)*puVar6;
    *puVar6 = puVar8 + 1;
    *puVar8 = 0xdb;
    lVar9 = puVar6[1];
    puVar6[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (iVar4 = (*(code *)puVar6[3])(param_1), iVar4 == 0)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    puVar8 = (undefined1 *)*plVar7;
    iVar4 = (int)param_1[0x3d] * 2 + 2;
    if (cVar12 == '\0') {
      iVar4 = (int)param_1[0x3d] + 1;
    }
    *plVar7 = (long)(puVar8 + 1);
    *puVar8 = (char)((uint)(iVar4 + 3) >> 8);
    lVar9 = plVar7[1];
    plVar7[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (iVar5 = (*(code *)plVar7[3])(param_1), iVar5 == 0)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    puVar8 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar8 + 1);
    *puVar8 = (char)(iVar4 + 3);
    lVar9 = plVar7[1];
    plVar7[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (iVar4 = (*(code *)plVar7[3])(param_1), iVar4 == 0)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    pcVar10 = (char *)*plVar7;
    *plVar7 = (long)(pcVar10 + 1);
    *pcVar10 = (char)param_2 + cVar12 * '\x10';
    lVar9 = plVar7[1];
    plVar7[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (iVar4 = (*(code *)plVar7[3])(param_1), iVar4 == 0)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    if (-1 < (int)param_1[0x3d]) {
      if (cVar12 == '\0') {
        lVar9 = 0;
        do {
          plVar7 = (long *)param_1[5];
          puVar8 = (undefined1 *)*plVar7;
          uVar2 = *(undefined1 *)(lVar13 + (long)*(int *)(param_1[0x3c] + lVar9 * 4) * 2);
          *plVar7 = (long)(puVar8 + 1);
          *puVar8 = uVar2;
          lVar11 = plVar7[1];
          plVar7[1] = lVar11 + -1;
          if ((lVar11 + -1 == 0) && (iVar4 = (*(code *)plVar7[3])(param_1), iVar4 == 0)) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          bVar1 = lVar9 < (int)param_1[0x3d];
          lVar9 = lVar9 + 1;
        } while (bVar1);
      }
      else {
        lVar9 = 0;
        do {
          plVar7 = (long *)param_1[5];
          puVar8 = (undefined1 *)*plVar7;
          uVar3 = *(undefined2 *)(lVar13 + (long)*(int *)(param_1[0x3c] + lVar9 * 4) * 2);
          *plVar7 = (long)(puVar8 + 1);
          *puVar8 = (char)((ushort)uVar3 >> 8);
          lVar11 = plVar7[1];
          plVar7[1] = lVar11 + -1;
          if ((lVar11 + -1 == 0) && (iVar4 = (*(code *)plVar7[3])(param_1), iVar4 == 0)) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          plVar7 = (long *)param_1[5];
          puVar8 = (undefined1 *)*plVar7;
          *plVar7 = (long)(puVar8 + 1);
          *puVar8 = (char)uVar3;
          lVar11 = plVar7[1];
          plVar7[1] = lVar11 + -1;
          if ((lVar11 + -1 == 0) && (iVar4 = (*(code *)plVar7[3])(param_1), iVar4 == 0)) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          bVar1 = lVar9 < (int)param_1[0x3d];
          lVar9 = lVar9 + 1;
        } while (bVar1);
      }
    }
    *(undefined4 *)(lVar13 + 0x80) = 1;
  }
  return cVar12;
}

