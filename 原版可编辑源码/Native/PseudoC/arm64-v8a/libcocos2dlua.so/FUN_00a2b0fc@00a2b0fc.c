
bool FUN_00a2b0fc(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x410) == 2) {
                    /* try { // try from 00a2b11c to 00b2b133 has its CatchHandler @ 00a2b23c */
    if (DAT_01769a20 == -1) {
      iVar1 = socket(10,2,0);
      if (iVar1 == -1) {
        DAT_01769a20 = 0;
      }
      else {
        DAT_01769a20 = 1;
        FUN_00a25eac(0,iVar1);
                    /* try { // try from 00a2b154 to 00b2b17f has its CatchHandler @ 00a2b228 */
      }
    }
    return 0 < DAT_01769a20;
  }
  return true;
}

