
undefined8 FUN_00a2c1e0(char *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  long lStack_40;
  undefined4 local_38 [2];
  
                    /* try { // try from 00a2c1e0 to 00b2c21b has its CatchHandler @ 00a2c1e0
                       catch() { ... } // from try @ 00a2c1e0 with catch @ 00a2c1e0
                       catch() { ... } // from try @ 00a2c26c with catch @ 00a2c1e0
                       catch() { ... } // from try @ 00a2c2c4 with catch @ 00a2c1e0 */
  iVar1 = inet_pton(2,param_1,local_38);
  if (iVar1 < 1) {
    iVar1 = inet_pton(10,param_1,&local_48);
    if (iVar1 < 1) {
      return 0;
    }
    plVar2 = (long *)(*(code *)PTR_malloc_017699f8)(0x40);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
                    /* try { // try from 00a2c2b0 to 00b2c2c3 has its CatchHandler @ 00a2c338 */
    lVar3 = (*(code *)PTR_strdup_01769a10)(param_1);
    if (lVar3 != 0) {
                    /* try { // try from 00a2c2c4 to 00b2c353 has its CatchHandler @ 00a2c1e0 */
      *plVar2 = lVar3;
      plVar2[1] = 0;
      plVar2[2] = 0x100000000a;
      plVar2[3] = (long)(plVar2 + 6);
      plVar2[5] = lStack_40;
      plVar2[4] = local_48;
      plVar2[6] = (long)(plVar2 + 4);
      goto LAB_00a2c2e8;
    }
  }
  else {
                    /* try { // try from 00a2c21c to 00b2c233 has its CatchHandler @ 00a2c338 */
    plVar2 = (long *)(*(code *)PTR_malloc_017699f8)(0x40);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
                    /* try { // try from 00a2c238 to 00b2c247 has its CatchHandler @ 00a2c334 */
    lVar3 = (*(code *)PTR_strdup_01769a10)(param_1);
    if (lVar3 != 0) {
      *(undefined4 *)(plVar2 + 4) = local_38[0];
                    /* try { // try from 00a2c264 to 00b2c26b has its CatchHandler @ 00a2c304 */
      *plVar2 = lVar3;
      plVar2[1] = 0;
      plVar2[2] = 0x400000002;
      plVar2[3] = (long)(plVar2 + 6);
                    /* try { // try from 00a2c26c to 00b2c2af has its CatchHandler @ 00a2c1e0 */
      plVar2[6] = (long)(plVar2 + 4);
LAB_00a2c2e8:
      plVar2[7] = 0;
      uVar4 = FUN_00a2bf0c(plVar2,param_2);
                    /* catch() { ... } // from try @ 00a2c264 with catch @ 00a2c304 */
      (*(code *)PTR_free_01769a00)(lVar3);
      (*(code *)PTR_free_01769a00)(plVar2);
      return uVar4;
    }
  }
  (*(code *)PTR_free_01769a00)(plVar2);
                    /* catch() { ... } // from try @ 00a2c238 with catch @ 00a2c334 */
                    /* catch() { ... } // from try @ 00a2c21c with catch @ 00a2c338
                       catch() { ... } // from try @ 00a2c2b0 with catch @ 00a2c338 */
  return 0;
}

