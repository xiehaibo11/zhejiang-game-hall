
undefined8 FUN_00a43a28(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00a43870 with catch @ 00a43a28 */
                    /* catch() { ... } // from try @ 00a43850 with catch @ 00a43a2c */
                    /* catch() { ... } // from try @ 00a43888 with catch @ 00a43a3c */
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    uVar2 = FUN_00a19db8(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
  lVar3 = (*(code *)PTR_strdup_01d1b758)("=");
                    /* try { // try from 00a43a94 to 00b43aeb has its CatchHandler @ 00a43a94
                       catch() { ... } // from try @ 00a43a94 with catch @ 00a43a94
                       catch() { ... } // from try @ 00a43c4c with catch @ 00a43a94 */
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

