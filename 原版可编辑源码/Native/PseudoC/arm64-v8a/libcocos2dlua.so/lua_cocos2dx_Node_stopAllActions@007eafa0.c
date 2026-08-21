
/* lua_cocos2dx_Node_stopAllActions(lua_State*) */

undefined8 lua_cocos2dx_Node_stopAllActions(lua_State *param_1)

{
  int iVar1;
  Node *this;
  undefined8 uVar2;
  
  this = (Node *)tolua_tousertype(param_1,1,0);
  if (this == (Node *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_stopAllActions\'",0);
    uVar2 = 0;
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      cocos2d::Node::stopAllActions(this);
      uVar2 = 1;
      lua_settop(param_1,1);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:stopAllActions",iVar1 + -1,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

