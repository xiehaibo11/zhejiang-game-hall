
undefined8 FUN_0104bef8(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104bda8 with catch @ 0104bf24
                        */
  if (((*(byte *)(param_1 + 0x2fe) < 0x2a) &&
      ((1L << ((ulong)*(byte *)(param_1 + 0x2fe) & 0x3f) & 0x31800000010U) != 0)) && (param_3 != 0))
  {
    while( true ) {
      while( true ) {
        if (*(char *)(param_1 + 0x307) != '\0') {
          FUN_01044ef4(param_1,*param_2,0,param_3 & 0xffffffff);
          return 0;
        }
        if ((*(byte *)(param_1 + 0x107) >> 6 & 1) == 0) break;
        if (*(char *)(param_1 + 0x2fe) == '\x04') {
          iVar1 = FUN_0104e820(param_1,0);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
        else {
          iVar1 = FUN_010490d8(param_1,0);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
      }
      if (*(long *)(param_1 + 0x280) != 0) {
        *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
      }
      puVar3 = (undefined1 *)*param_2;
      *param_2 = (long)(puVar3 + 1);
      uVar2 = FUN_0104e820(param_1,*puVar3);
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

