
undefined8 FUN_00a5a4ac(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 00a5a4ac to 00b5a4c3 has its CatchHandler @ 00a5a644 */
                    /* try { // try from 00a5a4c8 to 00b5a4ff has its CatchHandler @ 00a5a640 */
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    uVar2 = FUN_00a2f7a0(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
                    /* try { // try from 00a5a50c to 00b5a53f has its CatchHandler @ 00a5a648 */
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

