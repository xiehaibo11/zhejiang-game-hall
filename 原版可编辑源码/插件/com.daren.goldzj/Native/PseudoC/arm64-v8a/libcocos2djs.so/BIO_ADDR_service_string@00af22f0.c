
undefined8 BIO_ADDR_service_string(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_18;
  
                    /* try { // try from 00af2300 to 00bf246b has its CatchHandler @ 00af2300
                       catch() { ... } // from try @ 00af2300 with catch @ 00af2300
                       catch() { ... } // from try @ 00af2478 with catch @ 00af2300
                       catch() { ... } // from try @ 00af24b4 with catch @ 00af2300 */
  local_18 = 0;
  iVar2 = FUN_00af20a4(param_1,param_2,0,&local_18);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = local_18;
  }
  return uVar1;
}

