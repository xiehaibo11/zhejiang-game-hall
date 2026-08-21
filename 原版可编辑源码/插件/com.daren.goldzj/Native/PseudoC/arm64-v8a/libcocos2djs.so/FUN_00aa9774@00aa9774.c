
undefined8 FUN_00aa9774(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  if (((*(byte *)(param_1 + 0x2fe) < 0x2a) &&
      ((1L << ((ulong)*(byte *)(param_1 + 0x2fe) & 0x3f) & 0x31800000010U) != 0)) && (param_3 != 0))
  {
    while( true ) {
      while( true ) {
        if (*(char *)(param_1 + 0x307) != '\0') {
          FUN_00aa2770(param_1,*param_2,0,param_3 & 0xffffffff);
          return 0;
        }
        if ((*(byte *)(param_1 + 0x107) >> 6 & 1) == 0) break;
        if (*(char *)(param_1 + 0x2fe) == '\x04') {
          iVar1 = FUN_00aac09c(param_1,0);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
        else {
          iVar1 = FUN_00aa6954(param_1,0);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
      }
                    /* try { // try from 00aa9804 to 00ba980b has its CatchHandler @ 00aa9a30 */
      if (*(long *)(param_1 + 0x280) != 0) {
                    /* try { // try from 00aa980c to 00ba98b3 has its CatchHandler @ 00aa95e4 */
        *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
      }
      puVar3 = (undefined1 *)*param_2;
      *param_2 = (long)(puVar3 + 1);
      uVar2 = FUN_00aac09c(param_1,*puVar3);
      if ((int)uVar2 != 0) break;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return uVar2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}

