
long FUN_00a2c350(char *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  size_t sVar3;
  
                    /* try { // try from 00a2c354 to 00b2c3ab has its CatchHandler @ 00a2c354
                       catch() { ... } // from try @ 00a2c354 with catch @ 00a2c354
                       catch() { ... } // from try @ 00a2c3b0 with catch @ 00a2c354 */
  lVar1 = (*(code *)PTR_calloc_01769a18)(1,0x30);
  if (lVar1 != 0) {
    puVar2 = (undefined2 *)(*(code *)PTR_calloc_01769a18)(1,0x6e);
    *(undefined2 **)(lVar1 + 0x20) = puVar2;
    if (puVar2 == (undefined2 *)0x0) {
                    /* catch() { ... } // from try @ 00a2c3ac with catch @ 00a2c3f0 */
      (*(code *)PTR_free_01769a00)(lVar1);
      lVar1 = 0;
      *param_2 = 0;
    }
    else {
      sVar3 = strlen(param_1);
                    /* try { // try from 00a2c3ac to 00b2c3af has its CatchHandler @ 00a2c3f0 */
                    /* try { // try from 00a2c3b0 to 00b2c40b has its CatchHandler @ 00a2c354 */
      if (sVar3 < 0x6c) {
                    /* try { // try from 00a2c40c to 00b2c457 has its CatchHandler @ 00a2c40c
                       catch() { ... } // from try @ 00a2c40c with catch @ 00a2c40c
                       catch() { ... } // from try @ 00a2c45c with catch @ 00a2c40c */
        *(undefined8 *)(lVar1 + 4) = 0x100000001;
        *(undefined4 *)(lVar1 + 0x10) = 0x6e;
        *puVar2 = 1;
        memcpy(puVar2 + 1,param_1,sVar3 + 1);
      }
      else {
        (*(code *)PTR_free_01769a00)(puVar2);
        (*(code *)PTR_free_01769a00)(lVar1);
        lVar1 = 0;
        *param_2 = 1;
      }
    }
  }
  return lVar1;
}

