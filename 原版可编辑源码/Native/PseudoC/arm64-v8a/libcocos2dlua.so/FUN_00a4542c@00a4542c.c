
undefined8 FUN_00a4542c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  
                    /* catch() { ... } // from try @ 00a453a8 with catch @ 00a4542c */
  local_18 = 0;
  if (param_2 < 0) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_00a45500(param_1,param_1,(long)param_2,&local_18,auStack_20,0);
                    /* catch() { ... } // from try @ 00a4535c with catch @ 00a4545c */
    if (iVar1 != 0) {
      local_18 = 0;
    }
  }
  return local_18;
}

