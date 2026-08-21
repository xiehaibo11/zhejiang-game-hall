
undefined8 FUN_00a45478(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_18;
  
                    /* try { // try from 00a45478 to 00b454cf has its CatchHandler @ 00a45478
                       catch() { ... } // from try @ 00a45478 with catch @ 00a45478
                       catch() { ... } // from try @ 00a454e8 with catch @ 00a45478
                       catch() { ... } // from try @ 00a45598 with catch @ 00a45478
                       catch() { ... } // from try @ 00a4560c with catch @ 00a45478
                       catch() { ... } // from try @ 00a45658 with catch @ 00a45478 */
  local_18 = 0;
  if ((param_3 < 0) ||
     (iVar1 = FUN_00a45500(param_1,param_2,(long)param_3,&local_18,&local_28,0), iVar1 != 0)) {
    local_18 = 0;
  }
  else if (param_4 != (undefined4 *)0x0) {
    if (local_28 >> 0x1f == 0) {
                    /* try { // try from 00a454d0 to 00b454e7 has its CatchHandler @ 00a45688 */
      uVar2 = FUN_00a2c6d4();
      *param_4 = uVar2;
    }
    else {
                    /* try { // try from 00a454e8 to 00b45533 has its CatchHandler @ 00a45478 */
      (*(code *)PTR_free_01769a00)(local_18);
      local_18 = 0;
    }
  }
  return local_18;
}

