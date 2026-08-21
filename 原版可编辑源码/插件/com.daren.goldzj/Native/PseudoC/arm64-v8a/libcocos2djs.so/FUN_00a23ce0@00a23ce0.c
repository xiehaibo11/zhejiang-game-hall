
undefined8 FUN_00a23ce0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_00a11e04(param_1);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_00a119d4(*(long *)(param_1 + 0x60),param_1);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_00a14448();
    }
    lVar1 = *(long *)(param_1 + 0x8c90);
    if (lVar1 != 0) {
      FUN_00a34128(lVar1,0);
      *(long *)(param_1 + 0x8c90) = 0;
    }
    *(undefined4 *)(param_1 + 0x8e60) = 0;
    if (*(char *)(param_1 + 0x8cca) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8cd0));
    }
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8cb8));
    *(undefined8 *)(param_1 + 0x8cc0) = 0;
    *(undefined8 *)(param_1 + 0x8cb8) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_00a1842c(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a23e1c with catch @ 00a23dac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23e4c with catch @ 00a23dac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23e7c with catch @ 00a23dac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23ea4 with catch @ 00a23dac
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23ed0 with catch @ 00a23dac
                        */
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8b20));
    *(undefined8 *)(param_1 + 0x8b20) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8b58));
    *(undefined8 *)(param_1 + 0x8b58) = 0;
    FUN_00a18660(param_1);
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (*(char *)(param_1 + 0x920) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x918));
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined1 *)(param_1 + 0x920) = 0;
    }
    *(undefined8 *)(param_1 + 0x918) = 0;
    if (*(char *)(param_1 + 0x910) != '\0') {
                    /* try { // try from 00a23e14 to 00b23e1b has its CatchHandler @ 00a23f10 */
                    /* try { // try from 00a23e1c to 00b23e3f has its CatchHandler @ 00a23dac */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined1 *)(param_1 + 0x910) = 0;
    }
    *(undefined8 *)(param_1 + 0x908) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0xaf8));
                    /* try { // try from 00a23e40 to 00b23e4b has its CatchHandler @ 00a23f10 */
    *(undefined8 *)(param_1 + 0xaf8) = 0;
    FUN_00a1d7cc(param_1,1);
                    /* try { // try from 00a23e4c to 00b23e73 has its CatchHandler @ 00a23dac */
    FUN_00a35868(param_1);
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db0));
    *(undefined8 *)(param_1 + 0x8db0) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db8));
                    /* try { // try from 00a23e74 to 00b23e7b has its CatchHandler @ 00a23f0c */
    *(undefined8 *)(param_1 + 0x8db8) = 0;
                    /* try { // try from 00a23e7c to 00b23e9b has its CatchHandler @ 00a23dac */
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a3557c(param_1,1,2);
                    /* try { // try from 00a23e9c to 00b23ea3 has its CatchHandler @ 00a23f0c */
                    /* try { // try from 00a23ea4 to 00b23ec3 has its CatchHandler @ 00a23dac */
      *(int *)(*(long *)(param_1 + 0x70) + 4) = *(int *)(*(long *)(param_1 + 0x70) + 4) + -1;
      FUN_00a355d4(param_1,1);
    }
    if (*(char *)(param_1 + 0x888) != '\0') {
      FUN_00a33a6c(param_1 + 0x8d30);
    }
    lVar1 = 0;
                    /* try { // try from 00a23ec4 to 00b23ecf has its CatchHandler @ 00a23f0c */
    do {
                    /* try { // try from 00a23ed0 to 00b23f13 has its CatchHandler @ 00a23dac */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x670 + lVar1));
      *(undefined8 *)(param_1 + 0x670 + lVar1) = 0;
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x1e8);
    if (*(char *)(param_1 + 0x920) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x918));
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined1 *)(param_1 + 0x920) = 0;
    }
    *(undefined8 *)(param_1 + 0x918) = 0;
    if (*(char *)(param_1 + 0x910) != '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a23e74 with catch @ 00a23f0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23e9c with catch @ 00a23f0c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23ec4 with catch @ 00a23f0c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a23e14 with catch @ 00a23f10
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23e40 with catch @ 00a23f10
                        */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined1 *)(param_1 + 0x910) = 0;
    }
    *(undefined8 *)(param_1 + 0x908) = 0;
    (*(code *)PTR_free_01d1b748)(param_1);
  }
  return 0;
}

