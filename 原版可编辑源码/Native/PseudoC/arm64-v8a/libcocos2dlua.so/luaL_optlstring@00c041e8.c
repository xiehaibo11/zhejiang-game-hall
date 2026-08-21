
char * luaL_optlstring(long param_1,undefined4 param_2,char *param_3,size_t *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  size_t sVar3;
  uint uVar4;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1;
  uVar4 = (uint)((long)uVar2 >> 0x2f);
  if (uVar4 == 0xfffffffb) {
    uVar2 = uVar2 & 0x7fffffffffff;
  }
  else {
    if (uVar2 == 0xffffffffffffffff) {
      if (param_4 == (size_t *)0x0) {
        return param_3;
      }
      if (param_3 == (char *)0x0) {
        sVar3 = 0;
      }
      else {
        sVar3 = strlen(param_3);
      }
      *param_4 = sVar3;
      return param_3;
    }
    if (0xfffffff2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb554(param_1,param_2,4);
    }
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
    puVar1 = (ulong *)FUN_00c03214(param_1,param_2);
    uVar2 = FUN_00c006c0(param_1,puVar1);
    *puVar1 = uVar2 | 0xfffd800000000000;
  }
  if (param_4 != (size_t *)0x0) {
    *param_4 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  return (char *)(uVar2 + 0x18);
}

