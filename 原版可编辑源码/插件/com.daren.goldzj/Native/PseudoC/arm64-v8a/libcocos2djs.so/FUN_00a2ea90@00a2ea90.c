
undefined8 FUN_00a2ea90(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_18;
  
                    /* try { // try from 00a2ea98 to 00b2eaaf has its CatchHandler @ 00a2ec20 */
  local_18 = 0;
                    /* try { // try from 00a2eab8 to 00b2eac3 has its CatchHandler @ 00a2ec1c */
  if ((param_3 < 0) ||
     (iVar1 = FUN_00a2eb18(param_1,param_2,(long)param_3,&local_18,&local_28,0), iVar1 != 0)) {
                    /* try { // try from 00a2eac4 to 00b2eacf has its CatchHandler @ 00a2ec18 */
    local_18 = 0;
  }
  else if (param_4 != (undefined4 *)0x0) {
    if (local_28 >> 0x1f == 0) {
      uVar2 = FUN_00a16cec();
      *param_4 = uVar2;
    }
    else {
      (*(code *)PTR_free_01d1b748)(local_18);
      local_18 = 0;
    }
  }
                    /* try { // try from 00a2ead0 to 00b2eba3 has its CatchHandler @ 00a2ec30 */
  return local_18;
}

