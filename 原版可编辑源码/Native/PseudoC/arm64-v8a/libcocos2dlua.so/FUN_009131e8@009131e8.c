
undefined8 FUN_009131e8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  LuaMinXmlHttpRequest *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x128,(nothrow_t *)&std::nothrow);
                    /* try { // try from 0091323c to 00a1324f has its CatchHandler @ 009132d4 */
    if (this != (LuaMinXmlHttpRequest *)0x0) {
      LuaMinXmlHttpRequest::LuaMinXmlHttpRequest(this);
    }
                    /* try { // try from 00913250 to 00a13333 has its CatchHandler @ 0091317c */
    tolua_pushusertype(param_1,this,"cc.XMLHttpRequest");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0091320c to 00a1323b has its CatchHandler @ 0091317c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","XMLHttpRequest",
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

