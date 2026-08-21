
undefined8 FUN_0091b8a4(long param_1)

{
  int iVar1;
  CCBProxy *this;
  Node *pNVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    this = (CCBProxy *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      pNVar2 = (Node *)tolua_tousertype(param_1,2,0);
      uVar3 = CCBProxy::getNodeTypeName(this,pNVar2);
      tolua_pushstring(param_1,uVar3);
      uVar3 = 1;
    }
    else {
      luaL_error(param_1," %s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.CCBProxy:getNodeTypeName",iVar1 + -1,1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

