
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
                    /* catch() { ... } // from try @ 00aa8198 with catch @ 00aa8260 */
                FUN_00a9f034(lVar2,9999);
                uVar4 = *(uint *)(lVar5 + 0x7c8);
                uVar7 = (ulong)((int)uVar7 - 1);
              }
              uVar1 = (int)uVar7 + 1;
              uVar7 = (ulong)uVar1;
            } while (uVar1 < uVar4);
          }
        } while ((int)lVar6 != 0);
      }
      FUN_00ab4058(param_1,0,2,0,0);
      FUN_00ab4058(param_1,0,3,0,0);
      if ((*(byte *)(param_1 + 0xc94) >> 4 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x830);
        while (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x158);
          FUN_00aa8754();
        }
      }
      if (0 < *(short *)(param_1 + 0xca6)) {
        uVar7 = 0;
        do {
          lVar6 = param_1 + uVar7 * 0x6f8;
          FUN_00ab5210(param_1,uVar7 & 0xffffffff);
          thunk_FUN_00aa8a48(*(undefined8 *)(lVar6 + 0x7b8),0,"free");
          *(undefined8 *)(lVar6 + 0x7b8) = 0;
          if (*(long *)(lVar6 + 0x110) != 0) {
            do {
              FUN_00aa4ea4(lVar6 + 0xe0);
            } while (*(long *)(lVar6 + 0x110) != 0);
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)*(short *)(param_1 + 0xca6));
      }
      lws_plat_context_early_destroy(param_1);
      if (*(long *)(param_1 + 0xe0) != 0) {
        thunk_FUN_00aa8a48(*(long *)(param_1 + 0xe0),0,"free");
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

