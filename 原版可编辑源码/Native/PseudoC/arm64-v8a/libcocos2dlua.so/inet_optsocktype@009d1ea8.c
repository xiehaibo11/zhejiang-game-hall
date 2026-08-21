
undefined4 inet_optsocktype(void)

{
  int iVar1;
  
  iVar1 = luaL_checkoption();
                    /* try { // try from 009d1ec0 to 00ad1f2b has its CatchHandler @ 009d8138 */
  return *(undefined4 *)(&DAT_012f0b5c + (long)iVar1 * 4);
}

