
undefined8 FUN_00a43ac4(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  sVar1 = strlen(param_2);
                    /* try { // try from 00a43aec to 00b43b03 has its CatchHandler @ 00a43ccc */
  if (sVar1 != 0) {
                    /* try { // try from 00a43b0c to 00b43b17 has its CatchHandler @ 00a43cc8 */
    uVar2 = FUN_00a19db8(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
                    /* try { // try from 00a43b18 to 00b43b23 has its CatchHandler @ 00a43cc4 */
                    /* try { // try from 00a43b24 to 00b43c4b has its CatchHandler @ 00a43cdc */
  lVar3 = (*(code *)PTR_strdup_01d1b758)("=");
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

