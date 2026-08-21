
int FUN_00aa5364(long *param_1,undefined4 param_2)

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
  
                    /* try { // try from 00aa536c to 00ba537b has its CatchHandler @ 00aa53f4 */
                    /* try { // try from 00aa537c to 00ba546b has its CatchHandler @ 00aa51a8 */
  lVar8 = param_1[0x44];
  uVar9 = (ulong)*(byte *)((long)param_1 + 0x304);
  plVar7 = (long *)*param_1;
  lVar1 = lVar8 + uVar9 * 0x6f8;
  plVar4 = (long *)(lVar1 + 0x118);
  plVar5 = *(long **)(lVar1 + 0x118);
  plVar6 = plVar4;
  while (plVar5 != (long *)0x0) {
    if (plVar5 == param_1) {
      *plVar6 = param_1[1];
      param_1[1] = 0;
      lVar1 = lVar8 + uVar9 * 0x6f8;
                    /* try { // try from 00aa546c to 00ba54e7 has its CatchHandler @ 00aa546c
                       catch() { ... } // from try @ 00aa546c with catch @ 00aa546c
                       catch() { ... } // from try @ 00aa54f4 with catch @ 00aa546c */
      *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + -1;
      break;
    }
    plVar6 = plVar5 + 1;
                    /* catch() { ... } // from try @ 00aa52dc with catch @ 00aa53b8 */
    plVar5 = (long *)*plVar6;
  }
  if (plVar7 != (long *)0x0) {
    if (param_1[2] != 0) {
      thunk_FUN_00aa8a48(param_1[2],0,"free");
      param_1[2] = 0;
    }
                    /* catch() { ... } // from try @ 00aa51f8 with catch @ 00aa53e0 */
    lVar1 = *param_1;
                    /* catch() { ... } // from try @ 00aa52ac with catch @ 00aa53f4
                       catch() { ... } // from try @ 00aa536c with catch @ 00aa53f4 */
    if (((lVar1 == 0) || (*(short *)(lVar1 + 0xb5c) != *(short *)(lVar1 + 0xb5e))) ||
       ((*(byte *)((long)param_1 + 0x2f4) & 1) == 0)) {
                    /* catch() { ... } // from try @ 00aa52d0 with catch @ 00aa5404
                       catch() { ... } // from try @ 00aa5300 with catch @ 00aa5404 */
      _lws_log(1,"%s: %p: CANNOT DETACH rxpos:%d, rxlen:%d, wsi->hdr_parsing_completed = %d\n",
               "lws_header_table_detach",param_1,(long)*(short *)((long)plVar7 + 0xb5c),
               (long)*(short *)((long)plVar7 + 0xb5e),*(uint *)((long)param_1 + 0x2f4) & 1);
    }
    else {
      time(&tStack_48);
      plVar7[0x5f] = 0;
      *param_1 = 0;
      plVar7[1] = 0;
      puVar3 = (undefined8 *)*plVar4;
      if ((undefined8 *)*plVar4 == (undefined8 *)0x0) {
        lVar1 = lVar8 + uVar9 * 0x6f8;
        plVar4 = *(long **)(lVar1 + 0x110);
        if (plVar4 != (long *)0x0) {
          plVar6 = (long *)(lVar1 + 0x110);
          do {
            plVar5 = plVar4;
                    /* catch() { ... } // from try @ 00aa54e8 with catch @ 00aa553c */
            if (plVar5 == plVar7) {
              *plVar6 = *plVar7;
              lVar1 = lVar8 + uVar9 * 0x6f8;
              *(int *)(lVar1 + 0x7cc) = *(int *)(lVar1 + 0x7cc) + -1;
              if (plVar7[2] != 0) {
                    /* catch() { ... } // from try @ 00aa55f0 with catch @ 00aa5578 */
                thunk_FUN_00aa8a48(plVar7[2],0,"lws_free");
              }
              thunk_FUN_00aa8a48(plVar7,0,"lws_free");
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
        plVar6 = plVar4;
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
        plVar4 = puVar2 + 1;
      } while (puVar3 != (undefined8 *)0x0);
      *puVar2 = plVar7;
      plVar7[1] = (long)puVar2;
      *(undefined4 *)((long)plVar7 + 0xb5c) = 0;
      FUN_00aa4f8c(puVar2,param_2);
      if (*(int *)((long)puVar2 + 0x2d4) != -1) {
        FUN_00aa367c(puVar2,0,1,auStack_60);
      }
                    /* try { // try from 00aa54e8 to 00ba54f3 has its CatchHandler @ 00aa553c */
      *plVar6 = puVar2[1];
      puVar2[1] = 0;
                    /* try { // try from 00aa54f4 to 00ba5577 has its CatchHandler @ 00aa546c */
      lVar8 = lVar8 + uVar9 * 0x6f8;
      *(int *)(lVar8 + 0x120) = *(int *)(lVar8 + 0x120) + -1;
      if (*(char *)((long)puVar2 + 0x2ff) == '\a') {
        lVar1 = FUN_00aabda4(puVar2);
        return -(uint)(lVar1 == 0);
      }
    }
  }
  return 0;
}

