
void FUN_0104ad0c(void *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = *(long *)((long)param_1 + 0x150);
  if (*(long **)(lVar10 + 0x848) != (long *)0x0) {
    plVar2 = *(long **)(lVar10 + 0x848);
    plVar6 = (long *)(lVar10 + 0x848);
    do {
      plVar3 = plVar2;
      if ((void *)plVar3[2] == param_1) {
        *plVar6 = *plVar3;
        thunk_FUN_0104b1cc(plVar3,0,"lws_free");
        pvVar7 = *(void **)(lVar10 + 0x838);
        goto joined_r0x0104ad70;
      }
      plVar2 = (long *)*plVar3;
      plVar6 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  pvVar7 = *(void **)(lVar10 + 0x838);
joined_r0x0104ad70:
  if (pvVar7 != (void *)0x0) {
    puVar9 = (undefined8 *)(lVar10 + 0x838);
    do {
      puVar1 = (undefined8 *)((long)pvVar7 + 0x158);
      if (pvVar7 == param_1) {
        *puVar9 = *puVar1;
        lVar8 = *(long *)((long)param_1 + 0x188);
        goto joined_r0x0104adf4;
      }
      pvVar7 = (void *)*puVar1;
      puVar9 = puVar1;
    } while (pvVar7 != (void *)0x0);
  }
  lVar8 = *(long *)((long)param_1 + 0x188);
joined_r0x0104adf4:
  if ((lVar8 != 0) && (iVar5 = *(int *)((long)param_1 + 0x1dc), 0 < iVar5)) {
    lVar8 = 0;
    do {
      if ((*(long *)((long)param_1 + 400) != 0) &&
         (lVar4 = *(long *)(*(long *)((long)param_1 + 400) + lVar8 * 8), lVar4 != 0)) {
        thunk_FUN_0104b1cc(lVar4,0,"lws_free");
        *(undefined8 *)(*(long *)((long)param_1 + 400) + lVar8 * 8) = 0;
        iVar5 = *(int *)((long)param_1 + 0x1dc);
      }
      lVar8 = lVar8 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104ae38 with catch @ 0104addc
                       catch(type#1 @ 00000000) { ... } // from try @ 0104b004 with catch @ 0104addc
                        */
    } while (lVar8 < iVar5);
  }
  if (*(long *)((long)param_1 + 400) != 0) {
    thunk_FUN_0104b1cc(*(long *)((long)param_1 + 400),0,"lws_free");
  }
  FUN_0104fdac(param_1);
  thunk_FUN_0104b1cc(*(undefined8 *)((long)param_1 + 0x1a8),0,"lws_free");
                    /* try { // try from 0104ae30 to 0114ae37 has its CatchHandler @ 0104b110 */
  if ((*(byte *)(lVar10 + 0xc79) >> 5 & 1) != 0) {
                    /* try { // try from 0104ae38 to 0114af93 has its CatchHandler @ 0104addc */
    thunk_FUN_0104b1cc(*(undefined8 *)((long)param_1 + 0x188),0,"lws_free");
  }
  memset(param_1,0,0x208);
  thunk_FUN_0104b1cc(param_1,0,"lws_free");
  return;
}

