
undefined8 SSL_CTX_dane_mtype_set(long param_1,long param_2,byte param_3,undefined1 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  int line;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
                    /* try { // try from 00ac7020 to 00bc702b has its CatchHandler @ 00ac6880 */
                    /* try { // try from 00ac702c to 00bc7033 has its CatchHandler @ 00ac7050 */
                    /* try { // try from 00ac7034 to 00bc703b has its CatchHandler @ 00ac704c */
  uVar1 = (uint)param_3;
                    /* try { // try from 00ac703c to 00bc7043 has its CatchHandler @ 00ac7048 */
                    /* catch() { ... } // from try @ 00ac7018 with catch @ 00ac7044
                       try { // try from 00ac7044 to 00bc717f has its CatchHandler @ 00ac6880 */
                    /* catch() { ... } // from try @ 00ac6d30 with catch @ 00ac7048
                       catch() { ... } // from try @ 00ac703c with catch @ 00ac7048 */
                    /* catch() { ... } // from try @ 00ac6be8 with catch @ 00ac704c
                       catch() { ... } // from try @ 00ac7034 with catch @ 00ac704c */
  if ((param_2 != 0) && (uVar1 == 0)) {
                    /* catch() { ... } // from try @ 00ac6a48 with catch @ 00ac7050
                       catch() { ... } // from try @ 00ac702c with catch @ 00ac7050 */
                    /* catch() { ... } // from try @ 00ac6e08 with catch @ 00ac7060 */
    ERR_put_error(0x14,0x189,0xad,"ssl/ssl_lib.c",0xdc);
    return 0;
                    /* catch() { ... } // from try @ 00ac6b5c with catch @ 00ac7070 */
  }
  if (*(byte *)(param_1 + 0x318) < param_3) {
                    /* catch() { ... } // from try @ 00ac6b10 with catch @ 00ac7080 */
    pvVar3 = CRYPTO_realloc(*(void **)(param_1 + 0x308),(uVar1 + 1) * 8,"ssl/ssl_lib.c",0xe5);
                    /* catch() { ... } // from try @ 00ac6ae0 with catch @ 00ac70a0 */
    if (pvVar3 == (void *)0x0) {
      line = 0xe7;
    }
    else {
                    /* catch() { ... } // from try @ 00ac6ec8 with catch @ 00ac70b4 */
      *(void **)(param_1 + 0x308) = pvVar3;
      pvVar4 = CRYPTO_realloc(*(void **)(param_1 + 0x310),uVar1 + 1,"ssl/ssl_lib.c",0xec);
      if (pvVar4 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00ac6f28 with catch @ 00ac70c4 */
        uVar7 = (ulong)*(byte *)(param_1 + 0x318);
                    /* catch() { ... } // from try @ 00ac6f50 with catch @ 00ac70c8 */
        *(void **)(param_1 + 0x310) = pvVar4;
        if (*(byte *)(param_1 + 0x318) + 1 < uVar1) {
          puVar6 = (undefined1 *)((long)pvVar4 + uVar7);
          puVar9 = (undefined8 *)((long)pvVar3 + uVar7 * 8);
          lVar8 = ((ulong)param_3 - 1) - uVar7;
          do {
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
            *puVar9 = 0;
            lVar8 = lVar8 + -1;
            *puVar6 = 0;
          } while (lVar8 != 0);
        }
        *(byte *)(param_1 + 0x318) = param_3;
        goto LAB_00ac7108;
      }
      line = 0xee;
    }
    ERR_put_error(0x14,0x189,0x41,"ssl/ssl_lib.c",line);
    uVar5 = 0xffffffff;
  }
  else {
LAB_00ac7108:
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_4;
    }
    *(long *)(*(long *)(param_1 + 0x308) + (ulong)param_3 * 8) = param_2;
    uVar5 = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x310) + (ulong)param_3) = uVar2;
  }
  return uVar5;
}

