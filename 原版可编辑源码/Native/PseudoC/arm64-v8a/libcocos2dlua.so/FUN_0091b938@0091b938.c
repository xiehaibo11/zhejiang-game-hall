
undefined8 FUN_0091b938(lua_State *param_1)

{
  int iVar1;
  CCBProxy *this;
  Node *pNVar2;
  double dVar3;
  
  if (param_1 != (lua_State *)0x0) {
    this = (CCBProxy *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if ((iVar1 < 5) && (1 < iVar1 + -1)) {
      pNVar2 = (Node *)tolua_tousertype(param_1,2,0);
      iVar1 = toluafix_ref_function(param_1,3,0);
      dVar3 = (double)tolua_tonumber(0x3ff0000000000000,param_1,4);
      CCBProxy::setCallback(this,pNVar2,iVar1,(int)dVar3);
    }
    else {
      luaL_error(param_1," %s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.CCBProxy:setCallback",iVar1 + -1,2);
    }
  }
  return 0;
}

