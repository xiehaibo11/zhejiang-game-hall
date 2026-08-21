
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
  
  uVar1 = (uint)param_3;
  if ((param_2 != 0) && (uVar1 == 0)) {
    ERR_put_error(0x14,0x189,0xad,"ssl/ssl_lib.c",0xdc);
    return 0;
  }
  if (*(byte *)(param_1 + 0x318) < param_3) {
    pvVar3 = CRYPTO_realloc(*(void **)(param_1 + 0x308),(uVar1 + 1) * 8,"ssl/ssl_lib.c",0xe5);
    if (pvVar3 == (void *)0x0) {
                    /* try { // try from 00ad6620 to 00bd6647 has its CatchHandler @ 00ad6658 */
      line = 0xe7;
    }
    else {
      *(void **)(param_1 + 0x308) = pvVar3;
      pvVar4 = CRYPTO_realloc(*(void **)(param_1 + 0x310),uVar1 + 1,"ssl/ssl_lib.c",0xec);
      if (pvVar4 != (void *)0x0) {
        uVar7 = (ulong)*(byte *)(param_1 + 0x318);
        *(void **)(param_1 + 0x310) = pvVar4;
        if (*(byte *)(param_1 + 0x318) + 1 < uVar1) {
          puVar6 = (undefined1 *)((long)pvVar4 + uVar7);
          puVar9 = (undefined8 *)((long)pvVar3 + uVar7 * 8);
                    /* try { // try from 00ad65d4 to 00bd661f has its CatchHandler @ 00ad65d4
                       catch() { ... } // from try @ 00ad65d4 with catch @ 00ad65d4
                       catch() { ... } // from try @ 00ad6648 with catch @ 00ad65d4 */
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
        goto LAB_00ad65f0;
      }
      line = 0xee;
    }
                    /* try { // try from 00ad6648 to 00bd666b has its CatchHandler @ 00ad65d4 */
    ERR_put_error(0x14,0x189,0x41,"ssl/ssl_lib.c",line);
    uVar5 = 0xffffffff;
  }
  else {
LAB_00ad65f0:
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_4;
    }
    *(long *)(*(long *)(param_1 + 0x308) + (ulong)param_3 * 8) = param_2;
    uVar5 = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x310) + (ulong)param_3) = uVar2;
  }
                    /* catch() { ... } // from try @ 00ad6620 with catch @ 00ad6658 */
  return uVar5;
}

