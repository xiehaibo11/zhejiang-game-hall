
undefined8 FUN_00a396c8(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_00a277ec(param_1);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_00a273bc(*(long *)(param_1 + 0x60),param_1);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_00a29e30();
    }
    lVar1 = *(long *)(param_1 + 0x8c90);
    if (lVar1 != 0) {
      FUN_00a4ab10(lVar1,0);
      *(long *)(param_1 + 0x8c90) = 0;
    }
    *(undefined4 *)(param_1 + 0x8e60) = 0;
    if (*(char *)(param_1 + 0x8cca) != '\0') {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8cd0));
    }
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8cb8));
    *(undefined8 *)(param_1 + 0x8cc0) = 0;
    *(undefined8 *)(param_1 + 0x8cb8) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_00a2de14(param_1);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8b20));
    *(undefined8 *)(param_1 + 0x8b20) = 0;
                    /* try { // try from 00a397a8 to 00b397e7 has its CatchHandler @ 00a397a8
                       catch() { ... } // from try @ 00a397a8 with catch @ 00a397a8
                       catch() { ... } // from try @ 00a3982c with catch @ 00a397a8
                       catch() { ... } // from try @ 00a398d8 with catch @ 00a397a8 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8b58));
    *(undefined8 *)(param_1 + 0x8b58) = 0;
    FUN_00a2e048(param_1);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (*(char *)(param_1 + 0x920) != '\0') {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x918));
                    /* try { // try from 00a397e8 to 00b397ff has its CatchHandler @ 00a398e4 */
      *(undefined8 *)(param_1 + 0x918) = 0;
      *(undefined1 *)(param_1 + 0x920) = 0;
    }
    *(undefined8 *)(param_1 + 0x918) = 0;
    if (*(char *)(param_1 + 0x910) != '\0') {
                    /* try { // try from 00a39804 to 00b3982b has its CatchHandler @ 00a398e0 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined1 *)(param_1 + 0x910) = 0;
    }
    *(undefined8 *)(param_1 + 0x908) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0xaf8));
    *(undefined8 *)(param_1 + 0xaf8) = 0;
                    /* try { // try from 00a3982c to 00b398cf has its CatchHandler @ 00a397a8 */
    FUN_00a331b4(param_1,1);
    FUN_00a4c250(param_1);
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db0));
    *(undefined8 *)(param_1 + 0x8db0) = 0;
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db8));
    *(undefined8 *)(param_1 + 0x8db8) = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a4bf64(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0x70) + 4) = *(int *)(*(long *)(param_1 + 0x70) + 4) + -1;
      FUN_00a4bfbc(param_1,1);
    }
    if (*(char *)(param_1 + 0x888) != '\0') {
      FUN_00a4a454(param_1 + 0x8d30);
    }
    lVar1 = 0;
    do {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x670 + lVar1));
      *(undefined8 *)(param_1 + 0x670 + lVar1) = 0;
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x1e8);
                    /* try { // try from 00a398d0 to 00b398d7 has its CatchHandler @ 00a398e0 */
    if (*(char *)(param_1 + 0x920) != '\0') {
                    /* try { // try from 00a398d8 to 00b398ff has its CatchHandler @ 00a397a8 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x918));
                    /* catch() { ... } // from try @ 00a39804 with catch @ 00a398e0
                       catch() { ... } // from try @ 00a398d0 with catch @ 00a398e0 */
      *(undefined8 *)(param_1 + 0x918) = 0;
                    /* catch() { ... } // from try @ 00a397e8 with catch @ 00a398e4 */
      *(undefined1 *)(param_1 + 0x920) = 0;
    }
    *(undefined8 *)(param_1 + 0x918) = 0;
    if (*(char *)(param_1 + 0x910) != '\0') {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
                    /* try { // try from 00a39900 to 00b39937 has its CatchHandler @ 00a39900
                       catch() { ... } // from try @ 00a39900 with catch @ 00a39900
                       catch() { ... } // from try @ 00a3997c with catch @ 00a39900
                       catch() { ... } // from try @ 00a399f8 with catch @ 00a39900 */
      *(undefined8 *)(param_1 + 0x908) = 0;
      *(undefined1 *)(param_1 + 0x910) = 0;
    }
    *(undefined8 *)(param_1 + 0x908) = 0;
    (*(code *)PTR_free_01769a00)(param_1);
  }
  return 0;
}

