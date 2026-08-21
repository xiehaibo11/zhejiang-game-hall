
int FUN_00a35bfc(long param_1,undefined1 *param_2)

{
  int iVar1;
  
  FUN_00a26ce8(param_1,0);
                    /* try { // try from 00a35c24 to 00b35c7b has its CatchHandler @ 00a35c24
                       catch() { ... } // from try @ 00a35c24 with catch @ 00a35c24
                       catch() { ... } // from try @ 00a35d6c with catch @ 00a35c24 */
  iVar1 = FUN_00a562c0(param_1,0);
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x180) == 2) && (*(char *)(param_1 + 0x3d9) == '\0')) ||
       (*(int *)(param_1 + 0x710) == 1)) {
      iVar1 = 0;
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x408) + 0x7c) & 1) == 0) {
      iVar1 = 0;
      *param_2 = 1;
    }
    else {
                    /* try { // try from 00a35c7c to 00b35c93 has its CatchHandler @ 00a35e90 */
      iVar1 = FUN_00a2d674(param_1,0,param_2);
      if (iVar1 != 0) {
        FUN_00a26ce8(param_1,1);
      }
    }
  }
                    /* try { // try from 00a35ca0 to 00b35cb7 has its CatchHandler @ 00a35e70 */
  return iVar1;
}

