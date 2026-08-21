
void FUN_010f9f74(long *param_1)

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
                    /* try { // try from 010fa024 to 011fa027 has its CatchHandler @ 010fa038 */
    *(code **)(lVar10 + 8) = FUN_010fa9a4;
    iVar4 = (int)param_1[0x38];
    goto joined_r0x010fa038;
  }
  iVar3 = (int)param_1[0x44];
  if (iVar4 == 0) {
    if (iVar3 == 0) goto LAB_010f9fcc;
LAB_010fa044:
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
    goto LAB_010fa044;
LAB_010f9fcc:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar3 = (int)param_1[0x45];
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x224) + -1;
      if (iVar3 != (int)param_1[0x45]) goto LAB_010fa044;
    }
    if (0xd < iVar3) goto LAB_010fa044;
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
    pcVar8 = FUN_010fa520;
    pcVar9 = FUN_010fa2f4;
  }
  else {
    pcVar8 = FUN_010fa7d4;
    pcVar9 = FUN_010fa728;
  }
  if (*(int *)((long)param_1 + 0x21c) != 0) {
    pcVar9 = pcVar8;
  }
  *(code **)(lVar10 + 8) = pcVar9;
joined_r0x010fa038:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010fa024 with catch @ 010fa038
                        */
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      lVar12 = param_1[lVar11 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_010fa1ac:
        uVar2 = *(uint *)(lVar12 + 0x14);
        if (0xf < uVar2) {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x32;
          *(uint *)((long)puVar7 + 0x2c) = uVar2;
          (*(code *)*puVar7)(param_1);
        }
                    /* try { // try from 010fa1d4 to 011fa1db has its CatchHandler @ 010fa1ec */
        puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x50);
        puVar7 = (undefined8 *)*puVar14;
        if (puVar7 == (undefined8 *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010fa1d4 with catch @ 010fa1ec
                        */
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
                    /* try { // try from 010fa228 to 011fa22b has its CatchHandler @ 010fa244 */
        if (iVar4 != 0) {
LAB_010fa22c:
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (0xf < uVar2) {
            puVar7 = (undefined8 *)*param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010fa228 with catch @ 010fa244
                        */
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
                    /* try { // try from 010fa280 to 011fa287 has its CatchHandler @ 010fa2a0 */
          memset(__s,0,0x100);
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_010fa22c;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_010fa1ac;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined4 *)(lVar10 + 0x28) = 0xfffffff0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010fa280 with catch @ 010fa2a0
                        */
  *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}

