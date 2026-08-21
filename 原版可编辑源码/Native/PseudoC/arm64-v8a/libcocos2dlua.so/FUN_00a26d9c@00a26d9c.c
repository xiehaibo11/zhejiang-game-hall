
undefined8 * FUN_00a26d9c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(*(code *)PTR_calloc_01769a18)(1,0x180);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN_00a302ac(puVar2 + 10);
                    /* try { // try from 00a26e04 to 00b26e97 has its CatchHandler @ 00a26e04
                       catch() { ... } // from try @ 00a26e04 with catch @ 00a26e04
                       catch() { ... } // from try @ 00a26ea0 with catch @ 00a26e04 */
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a4acc8(puVar2 + 0x11,param_1,FUN_00a2af18,FUN_00a2af28,free), iVar1 == 0)) {
      iVar1 = FUN_00a2c720(puVar2 + 0x19,param_2);
      if (iVar1 == 0) {
                    /* try { // try from 00a26ea0 to 00b26ef7 has its CatchHandler @ 00a26e04 */
        lVar3 = FUN_00a4a970(FUN_00a26ef0);
        puVar2[4] = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_00a4a970(FUN_00a26ef0);
          puVar2[5] = lVar3;
          if (lVar3 != 0) {
            lVar3 = FUN_00a2495c();
            puVar2[0x23] = lVar3;
            if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 00a26e98 with catch @ 00a26edc */
              *(undefined8 **)(lVar3 + 0x60) = puVar2;
              *(undefined8 **)(lVar3 + 0xad0) = puVar2 + 0x19;
              puVar2[0x27] = 5;
              puVar2[0x24] = 0xffffffffffffffff;
              return puVar2;
            }
          }
        }
      }
    }
    FUN_00a4b0d4(puVar2 + 0x11);
    FUN_00a4b0d4(puVar2 + 10);
    FUN_00a2c78c(puVar2 + 0x19);
    FUN_00a396c8(puVar2[0x23]);
    puVar2[0x23] = 0;
    FUN_00a4ab10(puVar2[4],0);
    FUN_00a4ab10(puVar2[5],0);
    (*(code *)PTR_free_01769a00)(puVar2);
  }
                    /* try { // try from 00a26e98 to 00b26e9f has its CatchHandler @ 00a26edc */
  return (undefined8 *)0x0;
}

