
undefined4 inet_optfamily(void)

{
  int iVar1;
  
  iVar1 = luaL_checkoption();
  return *(undefined4 *)(&DAT_012f0b4c + (long)iVar1 * 4);
}

