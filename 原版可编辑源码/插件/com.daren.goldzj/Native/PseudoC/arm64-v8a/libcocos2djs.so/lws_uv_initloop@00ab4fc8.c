
undefined8 lws_uv_initloop(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = param_1 + (long)param_3 * 0x6f8;
  lVar7 = *(long *)(param_1 + 0x830);
  lVar9 = (long)param_3;
  plVar1 = (long *)(lVar5 + 0x130);
  if (*(long *)(lVar5 + 0x130) == 0) {
    if (param_2 == 0) {
      param_2 = thunk_FUN_00aa8a48(0,0x350,"libuv loop");
      if (param_2 == 0) {
        _lws_log(1,"OOM\n");
        return 0xffffffff;
      }
      uv_loop_init(param_2);
      lVar5 = param_1 + lVar9 * 0x6f8;
      bVar6 = *(byte *)(lVar5 + 0x7a8) & 0xfe;
    }
    else {
      _lws_log(4," Using foreign event loop...\n");
      lVar5 = param_1 + lVar9 * 0x6f8;
      bVar6 = *(byte *)(lVar5 + 0x7a8) | 1;
    }
    *(byte *)(lVar5 + 0x7a8) = bVar6;
    lVar5 = param_1 + lVar9 * 0x6f8;
    *plVar1 = param_2;
    uv_idle_init(param_2,lVar5 + 0x690);
    if (*(int *)(*(long *)(lVar5 + 0x100) + 0xc5c) != 0) {
      puVar8 = (undefined8 *)(param_1 + lVar9 * 0x6f8 + 0x138);
      lVar10 = 0;
      lVar2 = 5;
      if ((*(byte *)(param_1 + 0xc7a) & 4) != 0) {
        lVar2 = 2;
      }
      do {
        uv_signal_init(param_2,puVar8);
        *puVar8 = *(undefined8 *)(lVar5 + 0x100);
        uv_signal_start(puVar8,*(undefined8 *)(param_1 + 0x880),(&DAT_018a1c04)[lVar10]);
        lVar10 = lVar10 + 1;
        puVar8 = puVar8 + 0x13;
      } while (lVar10 < lVar2);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  while( true ) {
    if (lVar7 == 0) {
      if (bVar3) {
        lVar7 = param_1 + lVar9 * 0x6f8 + 0x5f8;
        uv_timer_init(*plVar1,lVar7);
        uv_timer_start(lVar7,FUN_00ab51a0,10,1000);
      }
      return 0;
    }
    uVar4 = FUN_00ab4d74(lVar7,*(undefined8 *)(lVar7 + 0x168));
    if ((int)uVar4 == -1) break;
    lVar7 = *(long *)(lVar7 + 0x158);
  }
  return uVar4;
}

