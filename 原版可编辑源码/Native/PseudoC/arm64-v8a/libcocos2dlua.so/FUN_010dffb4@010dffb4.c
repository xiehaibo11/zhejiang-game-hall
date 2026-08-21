
void FUN_010dffb4(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  iVar5 = *(int *)((long)param_1 + 0x5c);
  if (iVar5 < 1) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar14 = 0;
    puVar15 = (undefined4 *)(param_1[0xd] + 0x10);
    do {
                    /* catch() { ... } // from try @ 010dfef0 with catch @ 010dffe8 */
      iVar4 = FUN_010e1c78(param_1,*puVar15);
      iVar5 = *(int *)((long)param_1 + 0x5c);
      iVar14 = iVar14 + 1;
                    /* catch() { ... } // from try @ 010dfed4 with catch @ 010dfff8 */
      iVar13 = iVar4 + iVar13;
      puVar15 = puVar15 + 0x18;
    } while (iVar14 < iVar5);
  }
  iVar14 = *(int *)((long)param_1 + 0x15c);
                    /* catch() { ... } // from try @ 010dff90 with catch @ 010e0014 */
  if (*(int *)((long)param_1 + 0x124) == 0) {
    if (iVar14 == 0) {
      if (((int)param_1[0xb] == 8) && (*(int *)((long)param_1 + 0x1dc) == 8)) {
        if (iVar5 < 1) {
          bVar3 = true;
        }
        else {
          iVar14 = 0;
          piVar12 = (int *)(param_1[0xd] + 0x18);
          bVar3 = true;
          do {
            if ((1 < piVar12[-1]) || (1 < *piVar12)) {
              bVar3 = false;
            }
            iVar14 = iVar14 + 1;
            piVar12 = piVar12 + 0x18;
          } while (iVar14 < iVar5);
        }
        if ((iVar13 == 0) || (!bVar3)) {
          if (bVar3) {
            uVar6 = 0xc0;
            goto LAB_010e00e4;
          }
        }
        else {
          lVar10 = *param_1;
          *(undefined4 *)(lVar10 + 0x28) = 0x4d;
          (**(code **)(lVar10 + 8))(param_1,0);
          iVar14 = *(int *)((long)param_1 + 0x15c);
          if (*(int *)((long)param_1 + 0x124) != 0) goto joined_r0x010e00c4;
          if (iVar14 != 0) goto LAB_010e0028;
        }
      }
      uVar6 = 0xc1;
    }
    else {
LAB_010e0028:
      uVar6 = 0xc2;
    }
  }
  else {
joined_r0x010e00c4:
    if (iVar14 == 0) {
      uVar6 = 0xc9;
    }
    else {
      uVar6 = 0xca;
    }
  }
LAB_010e00e4:
  FUN_010e2004(param_1,uVar6);
  if (*(int *)((long)param_1 + 0x154) != 0) {
    if ((*(int *)((long)param_1 + 0x154) != 1) || (*(int *)((long)param_1 + 0x5c) < 3)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x1c;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xff;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xf8;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0x18;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xd;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
                    /* try { // try from 010e0294 to 011e02d3 has its CatchHandler @ 010e0294
                       catch() { ... } // from try @ 010e0294 with catch @ 010e0294
                       catch() { ... } // from try @ 010e0360 with catch @ 010e0294
                       catch() { ... } // from try @ 010e03b0 with catch @ 010e0294 */
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
                    /* try { // try from 010e02d4 to 011e02eb has its CatchHandler @ 010e042c */
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
                    /* try { // try from 010e02f8 to 011e02ff has its CatchHandler @ 010e0424 */
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xff;
    lVar10 = puVar7[1];
                    /* try { // try from 010e0318 to 011e0327 has its CatchHandler @ 010e0420 */
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
                    /* try { // try from 010e0354 to 011e035f has its CatchHandler @ 010e03dc */
    *puVar7 = puVar9 + 1;
    *puVar9 = 3;
                    /* try { // try from 010e0360 to 011e039b has its CatchHandler @ 010e0294 */
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    plVar8 = (long *)param_1[5];
                    /* try { // try from 010e039c to 011e03af has its CatchHandler @ 010e0434 */
    puVar9 = (undefined1 *)*plVar8;
    uVar1 = *(undefined4 *)(param_1[0xd] + 0x60);
    *plVar8 = (long)(puVar9 + 1);
                    /* try { // try from 010e03b0 to 011e0457 has its CatchHandler @ 010e0294 */
    *puVar9 = (char)uVar1;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)plVar8[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010e0354 with catch @ 010e03dc */
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar9 = (undefined1 *)*plVar8;
    uVar1 = *(undefined4 *)param_1[0xd];
    *plVar8 = (long)(puVar9 + 1);
    *puVar9 = (char)uVar1;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
                    /* catch() { ... } // from try @ 010e0318 with catch @ 010e0420 */
                    /* catch() { ... } // from try @ 010e02f8 with catch @ 010e0424 */
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)plVar8[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010e02d4 with catch @ 010e042c */
                    /* catch() { ... } // from try @ 010e039c with catch @ 010e0434 */
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar9 = (undefined1 *)*plVar8;
    uVar1 = *(undefined4 *)(param_1[0xd] + 0xc0);
    *plVar8 = (long)(puVar9 + 1);
    *puVar9 = (char)uVar1;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)plVar8[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0x80;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
                    /* try { // try from 010e05e4 to 011e060b has its CatchHandler @ 010e062c */
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010e05e4 with catch @ 010e062c
                        */
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 1;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 1;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
      iVar5 = *(int *)((long)param_1 + 0x15c);
      goto joined_r0x010e0900;
    }
  }
  iVar5 = *(int *)((long)param_1 + 0x15c);
joined_r0x010e0900:
  if ((iVar5 != 0) && (*(int *)((long)param_1 + 0x1dc) != 8)) {
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xff;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0xda;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 6;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    plVar8 = (long *)param_1[5];
    pcVar11 = (char *)*plVar8;
    cVar2 = (char)*(undefined4 *)((long)param_1 + 0x1dc);
    *plVar8 = (long)(pcVar11 + 1);
    *pcVar11 = cVar2 * cVar2 + -1;
    lVar10 = plVar8[1];
    plVar8[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)plVar8[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
      (*(code *)*puVar7)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar9 = (undefined1 *)*puVar7;
    *puVar7 = puVar9 + 1;
    *puVar9 = 0;
    lVar10 = puVar7[1];
    puVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (iVar5 = (*(code *)puVar7[3])(param_1), iVar5 == 0)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010e0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(param_1);
      return;
    }
  }
  return;
}

