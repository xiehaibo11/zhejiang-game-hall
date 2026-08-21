
undefined8 FUN_00a273bc(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
                    /* try { // try from 00a273c4 to 00b27433 has its CatchHandler @ 00a273c4
                       catch() { ... } // from try @ 00a273c4 with catch @ 00a273c4
                       catch() { ... } // from try @ 00a27444 with catch @ 00a273c4 */
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0x11cc] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xc] == 0) {
    return 0;
  }
  plVar6 = param_2 + 2;
  puVar4 = (undefined8 *)*plVar6;
  uVar1 = *(uint *)(param_2 + 3);
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 00a27540 to 00b2758b has its CatchHandler @ 00a274f0 */
    bVar2 = false;
  }
  else {
    bVar2 = (long *)*puVar4 == param_2;
                    /* try { // try from 00a27434 to 00b27443 has its CatchHandler @ 00a274d4 */
  }
  if (uVar1 < 0x11) {
                    /* try { // try from 00a27444 to 00b274ef has its CatchHandler @ 00a273c4 */
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    FUN_00a2770c(param_1);
    puVar4 = (undefined8 *)*plVar6;
  }
  if ((puVar4 != (undefined8 *)0x0) && ((int)param_2[3] - 10U < 7)) {
    FUN_00a26ce8(puVar4,2);
    bVar2 = true;
    *(long **)param_2[2] = param_2;
  }
  if ((param_2[0xc] != 0) && ((param_2[0x118a] != 0 || (param_2[0x118b] != 0)))) {
    lVar10 = param_2[0x1192];
    iVar3 = FUN_00a2bbf4(*(undefined8 *)(param_2[0xc] + 0x80),param_2 + 0x118c);
    if (iVar3 == 0) goto LAB_00a274ec;
    FUN_00a38740(param_2,"Internal error clearing splay node = %d\n",iVar3);
                    /* catch() { ... } // from try @ 00a27434 with catch @ 00a274d4 */
    lVar8 = *(long *)(lVar10 + 0x18);
    while (lVar8 != 0) {
      FUN_00a4aa5c(lVar10,*(undefined8 *)(lVar10 + 8),0);
LAB_00a274ec:
      lVar8 = *(long *)(lVar10 + 0x18);
                    /* try { // try from 00a274f0 to 00b2753b has its CatchHandler @ 00a274f0
                       catch() { ... } // from try @ 00a274f0 with catch @ 00a274f0
                       catch() { ... } // from try @ 00a27540 with catch @ 00a274f0 */
    }
    param_2[0x118a] = 0;
    param_2[0x118b] = 0;
  }
  if ((int)param_2[0xb] == 2) {
    param_2[10] = 0;
    *(undefined4 *)(param_2 + 0xb) = 0;
  }
  if (*plVar6 != 0) {
    if (bVar2) {
      FUN_00a2788c(plVar6,*(undefined4 *)((long)param_2 + 0x1c),uVar1 < 0x11);
    }
    else {
      FUN_00a401d8(param_2);
    }
  }
  FUN_00a4a454(param_2 + 0x11a6);
  lVar10 = param_2[0x1192];
  if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 00a2753c with catch @ 00a27578 */
    FUN_00a4ab10(lVar10,0);
    param_2[0x1192] = 0;
  }
                    /* try { // try from 00a2758c to 00b27777 has its CatchHandler @ 00a2758c
                       catch() { ... } // from try @ 00a2758c with catch @ 00a2758c
                       catch() { ... } // from try @ 00a277f8 with catch @ 00a2758c */
  param_2[0x15a] = 0;
  *(undefined4 *)(param_2 + 3) = 0x11;
  FUN_00a27b08(param_1,param_2);
  if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[2] = 0;
    *plVar6 = 0;
  }
  param_2[0xc] = 0;
  for (plVar6 = *(long **)param_1[4]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
    if (*(long **)(*plVar6 + 8) == param_2) {
      FUN_00a4aa5c((long *)param_1[4],plVar6,0);
      break;
    }
  }
  plVar6 = param_1 + 1;
  if ((long *)param_2[1] != (long *)0x0) {
    plVar6 = (long *)param_2[1];
  }
  *plVar6 = *param_2;
  plVar6 = param_1 + 2;
  if (*param_2 != 0) {
    plVar6 = (long *)(*param_2 + 8);
  }
  *plVar6 = param_2[1];
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if (param_1[0x2c] == 0) {
    return 0;
  }
  if (param_1[0x10] == 0) {
LAB_00a2768c:
    if ((param_1[0x2e] == 0) && (param_1[0x2f] == 0)) {
      return 0;
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    pcVar9 = (code *)param_1[0x2c];
    lVar10 = param_1[0x2d];
    lVar7 = -1;
  }
  else {
    auVar11 = FUN_00a2e828();
    lVar10 = auVar11._0_8_;
    lVar8 = FUN_00a2b908(0,0,param_1[0x10]);
    param_1[0x10] = lVar8;
    lVar5 = *(long *)(lVar8 + 0x18);
    lVar7 = 0;
    if (lVar10 <= lVar5) {
      if ((lVar10 < lVar5) || (auVar11._8_8_ < *(long *)(lVar8 + 0x20))) {
        lVar7 = FUN_00a2e888(lVar5,*(long *)(lVar8 + 0x20),lVar10,auVar11._8_8_);
        if (lVar7 == 0) {
          lVar7 = 1;
        }
        else if (lVar7 < 0) goto LAB_00a2768c;
      }
      else {
        lVar7 = 0;
      }
    }
    lVar10 = param_1[0x10];
    if ((*(long *)(lVar10 + 0x18) == param_1[0x2e]) && (*(long *)(lVar10 + 0x20) == param_1[0x2f]))
    {
      return 0;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    param_1[0x2f] = *(long *)(lVar10 + 0x20);
    param_1[0x2e] = lVar8;
    pcVar9 = (code *)param_1[0x2c];
    lVar10 = param_1[0x2d];
  }
  (*pcVar9)(param_1,lVar7,lVar10);
  return 0;
}

