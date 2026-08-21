
undefined8 FUN_00913a44(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0091396c with catch @ 00913a44 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 1) {
    *(undefined1 *)(lVar2 + 0x121) = 1;
    *(undefined4 *)(lVar2 + 0x90) = 0;
  }
  return 0;
}

