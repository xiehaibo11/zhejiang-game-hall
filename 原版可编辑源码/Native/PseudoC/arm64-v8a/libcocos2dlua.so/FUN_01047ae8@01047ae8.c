
int FUN_01047ae8(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_60 [16];
  time_t tStack_48;
  
  lVar8 = param_1[0x44];
  uVar9 = (ulong)*(byte *)((long)param_1 + 0x304);
  plVar7 = (long *)*param_1;
                    /* try { // try from 01047b18 to 01147b3b has its CatchHandler @ 01047c44 */
  lVar1 = lVar8 + uVar9 * 0x6f8;
  plVar4 = (long *)(lVar1 + 0x118);
  plVar5 = *(long **)(lVar1 + 0x118);
  plVar6 = plVar4;
  while (plVar5 != (long *)0x0) {
    if (plVar5 == param_1) {
      *plVar6 = param_1[1];
      param_1[1] = 0;
      lVar1 = lVar8 + uVar9 * 0x6f8;
      *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + -1;
      break;
    }
    plVar6 = plVar5 + 1;
    plVar5 = (long *)*plVar6;
  }
  if (plVar7 != (long *)0x0) {
    if (param_1[2] != 0) {
                    /* try { // try from 01047b54 to 01147b5f has its CatchHandler @ 01047c2c */
      thunk_FUN_0104b1cc(param_1[2],0,"free");
      param_1[2] = 0;
    }
    lVar1 = *param_1;
                    /* try { // try from 01047b7c to 01147b87 has its CatchHandler @ 01047c40 */
    if (((lVar1 == 0) || (*(short *)(lVar1 + 0xb5c) != *(short *)(lVar1 + 0xb5e))) ||
       ((*(byte *)((long)param_1 + 0x2f4) & 1) == 0)) {
                    /* try { // try from 01047b88 to 01147ca3 has its CatchHandler @ 01047a34 */
      _lws_log(1,"%s: %p: CANNOT DETACH rxpos:%d, rxlen:%d, wsi->hdr_parsing_completed = %d\n",
               "lws_header_table_detach",param_1,(long)*(short *)((long)plVar7 + 0xb5c),
               (long)*(short *)((long)plVar7 + 0xb5e),*(uint *)((long)param_1 + 0x2f4) & 1);
    }
    else {
      time(&tStack_48);
      plVar7[0x5f] = 0;
      *param_1 = 0;
      plVar7[1] = 0;
                    /* catch() { ... } // from try @ 01047ac8 with catch @ 01047c14 */
      puVar3 = (undefined8 *)*plVar4;
      if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
        lVar1 = lVar8 + uVar9 * 0x6f8;
        plVar4 = *(long **)(lVar1 + 0x110);
        if (plVar4 != (long *)0x0) {
          plVar6 = (long *)(lVar1 + 0x110);
          do {
            plVar5 = plVar4;
            if (plVar5 == plVar7) {
              *plVar6 = *plVar7;
              lVar1 = lVar8 + uVar9 * 0x6f8;
              *(int *)(lVar1 + 0x7cc) = *(int *)(lVar1 + 0x7cc) + -1;
              if (plVar7[2] != 0) {
                thunk_FUN_0104b1cc(plVar7[2],0,"lws_free");
              }
              thunk_FUN_0104b1cc(plVar7,0,"lws_free");
              break;
            }
            plVar4 = (long *)*plVar5;
            plVar6 = plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        lVar8 = lVar8 + uVar9 * 0x6f8;
        *(short *)(lVar8 + 2000) = *(short *)(lVar8 + 2000) + -1;
        return 0;
      }
      do {
                    /* catch() { ... } // from try @ 01047a78 with catch @ 01047c18 */
        plVar6 = plVar4;
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
        plVar4 = puVar2 + 1;
      } while (puVar3 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 01047b54 with catch @ 01047c2c */
      *puVar2 = plVar7;
      plVar7[1] = (long)puVar2;
      *(undefined4 *)((long)plVar7 + 0xb5c) = 0;
                    /* catch() { ... } // from try @ 01047b7c with catch @ 01047c40 */
      FUN_01047710(puVar2,param_2);
                    /* catch() { ... } // from try @ 01047b18 with catch @ 01047c44 */
      if (*(int *)((long)puVar2 + 0x2d4) != -1) {
        FUN_01045e00(puVar2,0,1,auStack_60);
      }
      *plVar6 = puVar2[1];
      puVar2[1] = 0;
      lVar8 = lVar8 + uVar9 * 0x6f8;
      *(int *)(lVar8 + 0x120) = *(int *)(lVar8 + 0x120) + -1;
      if (*(char *)((long)puVar2 + 0x2ff) == '\a') {
        lVar1 = FUN_0104e528(puVar2);
        return -(uint)(lVar1 == 0);
      }
    }
  }
  return 0;
}

