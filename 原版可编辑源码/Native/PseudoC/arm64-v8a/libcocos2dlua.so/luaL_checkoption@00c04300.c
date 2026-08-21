
ulong luaL_checkoption(undefined8 param_1,ulong param_2,char *param_3,long *param_4)

{
  int iVar1;
  char *__s2;
  char *__s1;
  ulong uVar2;
  
  __s2 = (char *)lua_tolstring(param_1,param_2,0);
  if ((__s2 == (char *)0x0) && (__s2 = param_3, param_3 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb554(param_1,param_2 & 0xffffffff,4);
  }
  __s1 = (char *)*param_4;
  if (__s1 != (char *)0x0) {
    uVar2 = 0;
    do {
      iVar1 = strcmp(__s1,__s2);
      if (iVar1 == 0) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      __s1 = (char *)param_4[uVar2];
    } while (__s1 != (char *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3b8(param_1,param_2 & 0xffffffff,0x49b,__s2);
}

