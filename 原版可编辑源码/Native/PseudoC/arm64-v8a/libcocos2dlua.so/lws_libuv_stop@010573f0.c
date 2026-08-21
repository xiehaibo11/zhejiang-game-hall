
void lws_libuv_stop(long param_1)

{
  uint uVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  if ((*(byte *)(param_1 + 0xc94) >> 3 & 1) == 0) {
    lVar6 = (long)*(short *)(param_1 + 0xca6);
    *(byte *)(param_1 + 0xc94) = *(byte *)(param_1 + 0xc94) | 10;
    if (lVar6 != 0) {
      do {
        lVar6 = lVar6 + -1;
        lVar5 = param_1 + lVar6 * 0x6f8;
        uVar4 = *(uint *)(lVar5 + 0x7c8);
        if (uVar4 != 0) {
          uVar8 = 0;
          do {
            lVar2 = *(long *)(*(long *)(param_1 + 0x828) +
                             (long)*(int *)(*(long *)(param_1 + lVar6 * 0x6f8 + 0xe0) +
                                           (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3)) * 8
                             );
            if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 010574a4 with catch @ 01057460 */
              FUN_010417b8(lVar2,9999);
              uVar4 = *(uint *)(lVar5 + 0x7c8);
              uVar8 = (ulong)((int)uVar8 - 1);
            }
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar1;
          } while (uVar1 < uVar4);
        }
      } while ((int)lVar6 != 0);
    }
    if ((*(int *)(param_1 + 0xc70) == 0) && (sVar3 = *(short *)(param_1 + 0xca6), 0 < sVar3)) {
      lVar6 = 0;
      plVar7 = (long *)(param_1 + 0x130);
      do {
                    /* try { // try from 0105749c to 011574a3 has its CatchHandler @ 01057530 */
                    /* try { // try from 010574a4 to 0115754b has its CatchHandler @ 01057460 */
        if ((*plVar7 != 0) && ((*(byte *)(param_1 + 0xc79) >> 2 & 1) != 0)) {
          uv_stop();
          sVar3 = *(short *)(param_1 + 0xca6);
        }
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + 0xdf;
      } while (lVar6 < sVar3);
    }
  }
  return;
}

