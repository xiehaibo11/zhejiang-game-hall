
undefined8 FUN_00a5a410(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 00a5a414 to 00b5a457 has its CatchHandler @ 00a5a168 */
                    /* catch() { ... } // from try @ 00a5a310 with catch @ 00a5a428
                       catch() { ... } // from try @ 00a5a40c with catch @ 00a5a428 */
                    /* catch() { ... } // from try @ 00a5a26c with catch @ 00a5a42c
                       catch() { ... } // from try @ 00a5a400 with catch @ 00a5a42c */
                    /* catch() { ... } // from try @ 00a5a1e4 with catch @ 00a5a430
                       catch() { ... } // from try @ 00a5a3f4 with catch @ 00a5a430 */
                    /* catch() { ... } // from try @ 00a5a1c8 with catch @ 00a5a434
                       catch() { ... } // from try @ 00a5a370 with catch @ 00a5a434 */
  sVar1 = strlen(param_2);
                    /* catch() { ... } // from try @ 00a5a22c with catch @ 00a5a438
                       catch() { ... } // from try @ 00a5a388 with catch @ 00a5a438 */
                    /* catch() { ... } // from try @ 00a5a2b0 with catch @ 00a5a43c
                       catch() { ... } // from try @ 00a5a3a0 with catch @ 00a5a43c */
  if (sVar1 != 0) {
                    /* try { // try from 00a5a458 to 00b5a4ab has its CatchHandler @ 00a5a458
                       catch() { ... } // from try @ 00a5a458 with catch @ 00a5a458
                       catch() { ... } // from try @ 00a5a580 with catch @ 00a5a458
                       catch() { ... } // from try @ 00a5a628 with catch @ 00a5a458 */
    uVar2 = FUN_00a2f7a0(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
  lVar3 = (*(code *)PTR_strdup_01769a10)("=");
  *param_3 = lVar3;
  if (lVar3 == 0) {
    uVar2 = 0x1b;
    *param_4 = 0;
  }
  else {
    uVar2 = 0;
    *param_4 = 1;
  }
  return uVar2;
}

