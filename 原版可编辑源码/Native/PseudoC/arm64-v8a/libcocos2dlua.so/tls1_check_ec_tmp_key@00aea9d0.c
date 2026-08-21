
bool tls1_check_ec_tmp_key(long param_1,long param_2)

{
  int iVar1;
  undefined1 local_14;
  undefined1 local_13;
  
                    /* try { // try from 00aea9d8 to 00bea9e3 has its CatchHandler @ 00aeaab4 */
                    /* try { // try from 00aea9e4 to 00beaa03 has its CatchHandler @ 00aeaa9c */
  if ((*(byte *)(*(long *)(param_1 + 0x148) + 0x1e) & 3) == 0) {
    iVar1 = tls1_shared_curve(param_1,0);
  }
  else {
    if (param_2 == 0x300c02b) {
                    /* try { // try from 00aeaa20 to 00beaa33 has its CatchHandler @ 00aeaab4 */
      local_13 = 0x17;
    }
    else {
      if (param_2 != 0x300c02c) {
        return false;
      }
      local_13 = 0x18;
    }
    local_14 = 0;
    iVar1 = FUN_00aeaa54(param_1,&local_14,0);
  }
                    /* try { // try from 00aeaa50 to 00beaa53 has its CatchHandler @ 00aeaa90 */
  return iVar1 != 0;
}

