
bool tls1_check_ec_tmp_key(long param_1,long param_2)

{
  int iVar1;
  undefined1 local_14;
  undefined1 local_13;
  
  if ((*(byte *)(*(long *)(param_1 + 0x148) + 0x1e) & 3) == 0) {
    iVar1 = tls1_shared_curve(param_1,0);
  }
  else {
                    /* try { // try from 00adbb38 to 00bdbb4f has its CatchHandler @ 00adbbb4 */
    if (param_2 == 0x300c02b) {
      local_13 = 0x17;
    }
    else {
                    /* try { // try from 00adbb50 to 00bdbb9b has its CatchHandler @ 00adba5c */
      if (param_2 != 0x300c02c) {
        return false;
      }
      local_13 = 0x18;
    }
    local_14 = 0;
    iVar1 = FUN_00adbba0(param_1,&local_14,0);
  }
                    /* try { // try from 00adbb9c to 00bdbba3 has its CatchHandler @ 00adbba4 */
  return iVar1 != 0;
}

