
undefined8 FUN_01047830(long *param_1,undefined4 param_2)

{
  short *psVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_60 [16];
  
                    /* try { // try from 0104783c to 011478af has its CatchHandler @ 01047650 */
  lVar6 = *param_1;
  if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 010476b4 with catch @ 01047894 */
    lVar6 = param_1[0x44];
    uVar10 = (ulong)*(byte *)((long)param_1 + 0x304);
    lVar11 = lVar6 + uVar10 * 0x6f8;
                    /* try { // try from 010478b0 to 011478ef has its CatchHandler @ 010478b0
                       catch() { ... } // from try @ 010478b0 with catch @ 010478b0
                       catch() { ... } // from try @ 01047928 with catch @ 010478b0 */
    if (*(short *)(lVar11 + 2000) == *(short *)(lVar6 + 0xca4)) {
      lVar11 = lVar6 + uVar10 * 0x6f8;
      plVar7 = *(long **)(lVar11 + 0x118);
      for (plVar9 = plVar7; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (plVar9 == param_1) goto LAB_01047a6c;
      }
      param_1[1] = (long)plVar7;
      *(long **)(lVar11 + 0x118) = param_1;
                    /* try { // try from 010478f0 to 01147907 has its CatchHandler @ 01047a18 */
      lVar6 = lVar6 + uVar10 * 0x6f8;
    }
    else {
      lVar8 = lVar6 + uVar10 * 0x6f8;
      plVar9 = *(long **)(lVar8 + 0x118);
      if (plVar9 != (long *)0x0) {
        plVar7 = (long *)(lVar8 + 0x118);
        do {
                    /* try { // try from 01047910 to 01147927 has its CatchHandler @ 010479ac */
          if (plVar9 == param_1) {
            *plVar7 = param_1[1];
            param_1[1] = 0;
            lVar8 = lVar6 + uVar10 * 0x6f8;
            *(int *)(lVar8 + 0x120) = *(int *)(lVar8 + 0x120) + -1;
            break;
          }
          plVar7 = plVar9 + 1;
          plVar9 = (long *)*plVar7;
        } while (plVar9 != (long *)0x0);
      }
      uVar2 = *(undefined4 *)(lVar6 + 0xc88);
      puVar5 = (undefined8 *)FUN_0104b1fc(0xb90,"ah struct");
      if (puVar5 != (undefined8 *)0x0) {
        lVar8 = thunk_FUN_0104b1cc(0,uVar2,"ah data");
        puVar5[2] = lVar8;
        if (lVar8 != 0) {
          lVar6 = lVar6 + uVar10 * 0x6f8;
          *puVar5 = *(undefined8 *)(lVar6 + 0x110);
          *(undefined8 **)(lVar6 + 0x110) = puVar5;
          *(undefined4 *)(puVar5 + 3) = uVar2;
                    /* catch() { ... } // from try @ 01047910 with catch @ 010479ac */
          *(int *)(lVar6 + 0x7cc) = *(int *)(lVar6 + 0x7cc) + 1;
          *param_1 = (long)puVar5;
          *(undefined1 *)((long)puVar5 + 0xb8a) = 1;
          psVar1 = (short *)(lVar11 + 2000);
          *(long **)(*param_1 + 8) = param_1;
          *psVar1 = *psVar1 + 1;
          FUN_01045e00(param_1,0,1,auStack_60);
          lVar6 = *param_1;
          goto LAB_0104785c;
        }
        thunk_FUN_0104b1cc(puVar5,0,"lws_free");
      }
      lVar6 = param_1[0x44];
      bVar3 = *(byte *)((long)param_1 + 0x304);
      *param_1 = 0;
      lVar11 = lVar6 + (ulong)bVar3 * 0x6f8;
                    /* catch() { ... } // from try @ 010478f0 with catch @ 01047a18 */
      plVar7 = *(long **)(lVar11 + 0x118);
      for (plVar9 = plVar7; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (plVar9 == param_1) goto LAB_01047a6c;
      }
                    /* try { // try from 01047a34 to 01147a77 has its CatchHandler @ 01047a34
                       catch() { ... } // from try @ 01047a34 with catch @ 01047a34
                       catch() { ... } // from try @ 01047a94 with catch @ 01047a34
                       catch() { ... } // from try @ 01047b88 with catch @ 01047a34 */
      param_1[1] = (long)plVar7;
      *(long **)(lVar11 + 0x118) = param_1;
      lVar6 = lVar6 + (ulong)bVar3 * 0x6f8;
    }
    *(int *)(lVar6 + 0x120) = *(int *)(lVar6 + 0x120) + 1;
    FUN_01045e00(param_1,1,0,auStack_60);
LAB_01047a6c:
    uVar4 = 1;
  }
  else {
LAB_0104785c:
    *(undefined2 *)(lVar6 + 0xb5c) = 0;
    *(undefined2 *)(*param_1 + 0xb5e) = 0;
    FUN_01047710(param_1,param_2);
    if ((*(char *)((long)param_1 + 0x2ff) == '\a') && (lVar6 = FUN_0104e528(param_1), lVar6 == 0)) {
      uVar4 = 0xffffffff;
                    /* try { // try from 01047928 to 01147a33 has its CatchHandler @ 010478b0 */
    }
    else {
      uVar4 = 0;
    }
  }
                    /* try { // try from 01047a78 to 01147a93 has its CatchHandler @ 01047c18 */
  return uVar4;
}

