
void FUN_00aa8588(void *param_1)

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
        thunk_FUN_00aa8a48(plVar3,0,"lws_free");
        pvVar7 = *(void **)(lVar10 + 0x838);
        goto joined_r0x00aa85ec;
      }
      plVar2 = (long *)*plVar3;
      plVar6 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  pvVar7 = *(void **)(lVar10 + 0x838);
joined_r0x00aa85ec:
  if (pvVar7 != (void *)0x0) {
    puVar9 = (undefined8 *)(lVar10 + 0x838);
    do {
      puVar1 = (undefined8 *)((long)pvVar7 + 0x158);
      if (pvVar7 == param_1) {
        *puVar9 = *puVar1;
        lVar8 = *(long *)((long)param_1 + 0x188);
        goto joined_r0x00aa8670;
      }
      pvVar7 = (void *)*puVar1;
      puVar9 = puVar1;
    } while (pvVar7 != (void *)0x0);
  }
  lVar8 = *(long *)((long)param_1 + 0x188);
joined_r0x00aa8670:
  if ((lVar8 != 0) && (iVar5 = *(int *)((long)param_1 + 0x1dc), 0 < iVar5)) {
    lVar8 = 0;
    do {
      if ((*(long *)((long)param_1 + 400) != 0) &&
         (lVar4 = *(long *)(*(long *)((long)param_1 + 400) + lVar8 * 8), lVar4 != 0)) {
        thunk_FUN_00aa8a48(lVar4,0,"lws_free");
        *(undefined8 *)(*(long *)((long)param_1 + 400) + lVar8 * 8) = 0;
        iVar5 = *(int *)((long)param_1 + 0x1dc);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  if (*(long *)((long)param_1 + 400) != 0) {
    thunk_FUN_00aa8a48(*(long *)((long)param_1 + 400),0,"lws_free");
  }
  FUN_00aad628(param_1);
  thunk_FUN_00aa8a48(*(undefined8 *)((long)param_1 + 0x1a8),0,"lws_free");
  if ((*(byte *)(lVar10 + 0xc79) >> 5 & 1) != 0) {
    thunk_FUN_00aa8a48(*(undefined8 *)((long)param_1 + 0x188),0,"lws_free");
  }
  memset(param_1,0,0x208);
  thunk_FUN_00aa8a48(param_1,0,"lws_free");
  return;
}

