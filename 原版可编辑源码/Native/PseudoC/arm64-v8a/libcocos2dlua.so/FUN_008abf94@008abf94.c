
undefined8 FUN_008abf94(long param_1)

{
  int iVar1;
  Node *this;
  
  if (param_1 != 0) {
    this = (Node *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      cocos2d::Node::unscheduleUpdate(this);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Node:unscheduleUpdate",iVar1 + -1,0);
    }
  }
  return 0;
}

