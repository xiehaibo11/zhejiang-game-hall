
long FUN_00a2fb70(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00a2fb38 with catch @ 00a2fb70 */
                    /* try { // try from 00a2fb84 to 00b2fc83 has its CatchHandler @ 00a2fb84
                       catch() { ... } // from try @ 00a2fb84 with catch @ 00a2fb84
                       catch() { ... } // from try @ 00a2fd04 with catch @ 00a2fb84 */
  lVar2 = *param_1;
  lVar1 = lVar2;
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_00a4bf64(lVar2,3,2);
    lVar1 = *param_1;
  }
  lVar1 = FUN_00a2fbf8(lVar1,param_2,param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_00a4bfbc(lVar2,3);
  }
  return lVar1;
}

