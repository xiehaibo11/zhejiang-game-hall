
void FUN_00d9dacc(long *param_1)

{
  bool bVar1;
  uint uVar2;
  void *__s;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  lVar10 = param_1[0x4e];
  iVar4 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar4 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       (((int)param_1[0x44] < 0x40 && ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x7d;
      (**(code **)(lVar11 + 8))(param_1,0xffffffff);
    }
    *(code **)(lVar10 + 8) = FUN_00d9e4fc;
    iVar4 = (int)param_1[0x38];
    goto joined_r0x00d9db90;
  }
  iVar3 = (int)param_1[0x44];
  if (iVar4 == 0) {
    if (iVar3 == 0) goto LAB_00d9db24;
LAB_00d9db9c:
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x11;
    *(int *)((long)puVar7 + 0x2c) = iVar4;
    *(int *)(puVar7 + 6) = (int)param_1[0x44];
    *(undefined4 *)((long)puVar7 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(puVar7 + 7) = (int)param_1[0x45];
    (*(code *)*puVar7)(param_1);
  }
  else {
    if (((iVar3 < iVar4) || ((int)param_1[0x47] < iVar3)) || ((int)param_1[0x38] != 1))
    goto LAB_00d9db9c;
LAB_00d9db24:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar3 = (int)param_1[0x45];
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar3 != (int)param_1[0x45]) goto LAB_00d9db9c;
    }
    if (0xd < iVar3) goto LAB_00d9db9c;
  }
  iVar4 = (int)param_1[0x38];
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      lVar12 = param_1[0x18];
      iVar4 = *(int *)(param_1[lVar11 + 0x39] + 4);
      iVar3 = *(int *)((long)param_1 + 0x21c);
      if ((iVar3 != 0) && (*(int *)(lVar12 + (long)iVar4 * 0x100) < 0)) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x76;
        *(int *)(lVar5 + 0x2c) = iVar4;
        *(undefined4 *)(lVar5 + 0x30) = 0;
        (**(code **)(lVar5 + 8))(param_1,0xffffffff);
        iVar3 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar3 <= (int)param_1[0x44]) {
        lVar12 = lVar12 + (long)iVar4 * 0x100;
        lVar5 = (long)iVar3;
        do {
          uVar2 = *(uint *)(lVar12 + lVar5 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x76;
            *(int *)(lVar6 + 0x2c) = iVar4;
            *(int *)(lVar6 + 0x30) = (int)lVar5;
            (**(code **)(lVar6 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar12 + lVar5 * 4) = (int)param_1[0x45];
          bVar1 = lVar5 < (int)param_1[0x44];
          lVar5 = lVar5 + 1;
        } while (bVar1);
      }
      iVar4 = (int)param_1[0x38];
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  if (*(int *)((long)param_1 + 0x224) == 0) {
    pcVar8 = FUN_00d9e078;
    pcVar9 = FUN_00d9de4c;
  }
  else {
    pcVar8 = FUN_00d9e32c;
    pcVar9 = FUN_00d9e280;
  }
  if (*(int *)((long)param_1 + 0x21c) != 0) {
    pcVar9 = pcVar8;
  }
  *(code **)(lVar10 + 8) = pcVar9;
joined_r0x00d9db90:
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      lVar12 = param_1[lVar11 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_00d9dd04:
        uVar2 = *(uint *)(lVar12 + 0x14);
        if (0xf < uVar2) {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x32;
          *(uint *)((long)puVar7 + 0x2c) = uVar2;
          (*(code *)*puVar7)(param_1);
        }
        puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x50);
        puVar7 = (undefined8 *)*puVar14;
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar14 = puVar7;
        }
        lVar5 = lVar10 + lVar11 * 4;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(lVar5 + 0x2c) = 0;
        *(undefined4 *)(lVar5 + 0x3c) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar4 = (int)param_1[0x47];
        }
        else {
          iVar4 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar4 != 0) {
LAB_00d9dd84:
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (0xf < uVar2) {
            puVar7 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar7 + 5) = 0x32;
            *(uint *)((long)puVar7 + 0x2c) = uVar2;
            (*(code *)*puVar7)(param_1);
          }
          plVar13 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0xd0);
          __s = (void *)*plVar13;
          if (__s == (void *)0x0) {
            __s = (void *)(**(code **)param_1[1])(param_1,1,0x100);
            *plVar13 = (long)__s;
          }
          memset(__s,0,0x100);
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_00d9dd84;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_00d9dd04;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined4 *)(lVar10 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}

