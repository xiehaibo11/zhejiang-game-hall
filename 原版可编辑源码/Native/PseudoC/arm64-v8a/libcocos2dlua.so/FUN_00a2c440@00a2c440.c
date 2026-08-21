
undefined8 * FUN_00a2c440(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00a2c458 to 00b2c45b has its CatchHandler @ 00a2c490 */
                    /* try { // try from 00a2c45c to 00b2c4a3 has its CatchHandler @ 00a2c40c */
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
                    /* catch() { ... } // from try @ 00a2c458 with catch @ 00a2c490 */
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = 0;
    puVar3 = param_1;
    if (param_1 != (undefined8 *)0x0) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
      } while (puVar3 != (undefined8 *)0x0);
      puVar2[1] = puVar1;
      puVar1 = param_1;
    }
  }
                    /* try { // try from 00a2c4a4 to 00b2c58b has its CatchHandler @ 00a2c4a4
                       catch() { ... } // from try @ 00a2c4a4 with catch @ 00a2c4a4
                       catch() { ... } // from try @ 00a2c60c with catch @ 00a2c4a4 */
  return puVar1;
}

