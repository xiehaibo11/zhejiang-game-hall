
void lws_context_destroy(long param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    pcVar3 = "%s: ctx %p\n";
                    /* try { // try from 0104ab10 to 0114ab17 has its CatchHandler @ 0104ac8c */
                    /* try { // try from 0104ab18 to 0114ac8f has its CatchHandler @ 0104aac4 */
    param_1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0xc94) >> 2 & 1) == 0) {
      lVar6 = (long)*(short *)(param_1 + 0xca6);
      *(byte *)(param_1 + 0xc94) = *(byte *)(param_1 + 0xc94) | 6;
      if (lVar6 != 0) {
        do {
          lVar6 = lVar6 + -1;
          lVar5 = param_1 + lVar6 * 0x6f8;
          uVar4 = *(uint *)(lVar5 + 0x7c8);
          if (uVar4 != 0) {
            uVar7 = 0;
            do {
              lVar2 = *(long *)(*(long *)(param_1 + 0x828) +
                               (long)*(int *)(*(long *)(param_1 + lVar6 * 0x6f8 + 0xe0) +
                                             (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) *
                               8);
              if (lVar2 != 0) {
                FUN_010417b8(lVar2,9999);
                uVar4 = *(uint *)(lVar5 + 0x7c8);
                uVar7 = (ulong)((int)uVar7 - 1);
              }
              uVar1 = (int)uVar7 + 1;
              uVar7 = (ulong)uVar1;
            } while (uVar1 < uVar4);
          }
        } while ((int)lVar6 != 0);
      }
      FUN_010567dc(param_1,0,2,0,0);
      FUN_010567dc(param_1,0,3,0,0);
      if ((*(byte *)(param_1 + 0xc94) >> 4 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x830);
        while (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x158);
          FUN_0104aed8();
        }
      }
      if (0 < *(short *)(param_1 + 0xca6)) {
        uVar7 = 0;
        do {
          lVar6 = param_1 + uVar7 * 0x6f8;
          FUN_01057994(param_1,uVar7 & 0xffffffff);
          thunk_FUN_0104b1cc(*(undefined8 *)(lVar6 + 0x7b8),0,"free");
          *(undefined8 *)(lVar6 + 0x7b8) = 0;
          if (*(long *)(lVar6 + 0x110) != 0) {
            do {
              FUN_01047628(lVar6 + 0xe0);
            } while (*(long *)(lVar6 + 0x110) != 0);
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)*(short *)(param_1 + 0xca6));
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104ab18 with catch @ 0104aac4
                        */
      lws_plat_context_early_destroy(param_1);
      if (*(long *)(param_1 + 0xe0) != 0) {
        thunk_FUN_0104b1cc(*(long *)(param_1 + 0xe0),0,"free");
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
      if ((*(byte *)(param_1 + 0xc79) >> 2 & 1) == 0) {
        lws_context_destroy2(param_1);
        return;
      }
      return;
    }
    pcVar3 = "%s: ctx %p: already being destroyed\n";
  }
  _lws_log(4,pcVar3,"lws_context_destroy",param_1);
  return;
}

