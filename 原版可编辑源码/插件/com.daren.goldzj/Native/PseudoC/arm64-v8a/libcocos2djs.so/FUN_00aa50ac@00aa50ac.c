
undefined8 FUN_00aa50ac(long *param_1,undefined4 param_2)

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
  
                    /* try { // try from 00aa50c8 to 00ba50db has its CatchHandler @ 00aa516c */
  lVar6 = *param_1;
  if (lVar6 == 0) {
    lVar6 = param_1[0x44];
    uVar10 = (ulong)*(byte *)((long)param_1 + 0x304);
    lVar11 = lVar6 + uVar10 * 0x6f8;
    if (*(short *)(lVar11 + 2000) == *(short *)(lVar6 + 0xca4)) {
      lVar11 = lVar6 + uVar10 * 0x6f8;
      plVar7 = *(long **)(lVar11 + 0x118);
      for (plVar9 = plVar7; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (plVar9 == param_1) goto LAB_00aa52e8;
      }
      param_1[1] = (long)plVar7;
      *(long **)(lVar11 + 0x118) = param_1;
                    /* catch() { ... } // from try @ 00aa50c8 with catch @ 00aa516c */
      lVar6 = lVar6 + uVar10 * 0x6f8;
    }
    else {
      lVar8 = lVar6 + uVar10 * 0x6f8;
      plVar9 = *(long **)(lVar8 + 0x118);
      if (plVar9 != (long *)0x0) {
        plVar7 = (long *)(lVar8 + 0x118);
        do {
          if (plVar9 == param_1) {
                    /* catch() { ... } // from try @ 00aa537c with catch @ 00aa51a8 */
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
      puVar5 = (undefined8 *)FUN_00aa8a78(0xb90,"ah struct");
      if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00aa51f8 to 00ba520f has its CatchHandler @ 00aa53e0 */
        lVar8 = thunk_FUN_00aa8a48(0,uVar2,"ah data");
        puVar5[2] = lVar8;
        if (lVar8 != 0) {
          lVar6 = lVar6 + uVar10 * 0x6f8;
          *puVar5 = *(undefined8 *)(lVar6 + 0x110);
          *(undefined8 **)(lVar6 + 0x110) = puVar5;
          *(undefined4 *)(puVar5 + 3) = uVar2;
                    /* try { // try from 00aa5228 to 00ba523b has its CatchHandler @ 00aa53c0 */
          *(int *)(lVar6 + 0x7cc) = *(int *)(lVar6 + 0x7cc) + 1;
          *param_1 = (long)puVar5;
          *(undefined1 *)((long)puVar5 + 0xb8a) = 1;
          psVar1 = (short *)(lVar11 + 2000);
          *(long **)(*param_1 + 8) = param_1;
          *psVar1 = *psVar1 + 1;
          FUN_00aa367c(param_1,0,1,auStack_60);
          lVar6 = *param_1;
          goto LAB_00aa50d8;
        }
        thunk_FUN_00aa8a48(puVar5,0,"lws_free");
      }
      lVar6 = param_1[0x44];
      bVar3 = *(byte *)((long)param_1 + 0x304);
      *param_1 = 0;
      lVar11 = lVar6 + (ulong)bVar3 * 0x6f8;
      plVar7 = *(long **)(lVar11 + 0x118);
      for (plVar9 = plVar7; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (plVar9 == param_1) goto LAB_00aa52e8;
                    /* try { // try from 00aa52ac to 00ba52b3 has its CatchHandler @ 00aa53f4 */
      }
      param_1[1] = (long)plVar7;
      *(long **)(lVar11 + 0x118) = param_1;
      lVar6 = lVar6 + (ulong)bVar3 * 0x6f8;
    }
                    /* try { // try from 00aa52d0 to 00ba52d7 has its CatchHandler @ 00aa5404 */
                    /* try { // try from 00aa52dc to 00ba52e3 has its CatchHandler @ 00aa53b8 */
    *(int *)(lVar6 + 0x120) = *(int *)(lVar6 + 0x120) + 1;
    FUN_00aa367c(param_1,1,0,auStack_60);
LAB_00aa52e8:
    uVar4 = 1;
  }
  else {
LAB_00aa50d8:
    *(undefined2 *)(lVar6 + 0xb5c) = 0;
                    /* try { // try from 00aa50dc to 00ba51a7 has its CatchHandler @ 00aa5048 */
    *(undefined2 *)(*param_1 + 0xb5e) = 0;
    FUN_00aa4f8c(param_1,param_2);
    if ((*(char *)((long)param_1 + 0x2ff) == '\a') && (lVar6 = FUN_00aabda4(param_1), lVar6 == 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = 0;
    }
  }
                    /* try { // try from 00aa5300 to 00ba5323 has its CatchHandler @ 00aa5404 */
  return uVar4;
}

