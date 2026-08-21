
undefined8 FUN_00a53d6c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
                    /* try { // try from 00a53d7c to 00b53d8b has its CatchHandler @ 00a53ea8 */
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* try { // try from 00a53d8c to 00b53ec3 has its CatchHandler @ 00a53d24 */
    uVar1 = FUN_00a0e870(&DAT_018996ee,param_1,param_2,param_3);
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_00a0e870("%s/%s",param_1,param_2);
    return uVar1;
  }
  if (param_3 != 0) {
    uVar1 = FUN_00a0e870("%s@%s",param_1,param_3);
    return uVar1;
  }
  return 0;
}

