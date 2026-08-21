
undefined8 FUN_00a2ea44(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  
                    /* try { // try from 00a2ea44 to 00b2ea97 has its CatchHandler @ 00a2ea44
                       catch() { ... } // from try @ 00a2ea44 with catch @ 00a2ea44
                       catch() { ... } // from try @ 00a2eba4 with catch @ 00a2ea44 */
  local_18 = 0;
  if (param_2 < 0) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_00a2eb18(param_1,param_1,(long)param_2,&local_18,auStack_20,0);
    if (iVar1 != 0) {
      local_18 = 0;
    }
  }
  return local_18;
}

