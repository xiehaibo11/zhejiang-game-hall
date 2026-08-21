
undefined8 FUN_00913a98(undefined8 param_1)

{
  int iVar1;
  LuaMinXmlHttpRequest *this;
  char *pcVar2;
  char *pcVar3;
  
                    /* catch() { ... } // from try @ 00913758 with catch @ 00913ab4
                       catch() { ... } // from try @ 009139e8 with catch @ 00913ab4 */
  this = (LuaMinXmlHttpRequest *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
    pcVar2 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
                    /* catch() { ... } // from try @ 00913738 with catch @ 00913af0 */
    pcVar3 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
    LuaMinXmlHttpRequest::setRequestHeader(this,pcVar2,pcVar3);
  }
  else {
                    /* catch() { ... } // from try @ 009137f8 with catch @ 00913b10 */
                    /* catch() { ... } // from try @ 009137d4 with catch @ 00913b14 */
    luaL_error(param_1,
               "\'setRequestHeader\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar1 + -1,2);
  }
                    /* catch() { ... } // from try @ 00913714 with catch @ 00913b34 */
  return 0;
}

