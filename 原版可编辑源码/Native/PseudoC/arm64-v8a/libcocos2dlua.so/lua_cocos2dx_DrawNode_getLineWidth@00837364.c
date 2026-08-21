
/* lua_cocos2dx_DrawNode_getLineWidth(lua_State*) */

bool lua_cocos2dx_DrawNode_getLineWidth(lua_State *param_1)

{
  int iVar1;
  DrawNode *this;
  float fVar2;
  
  this = (DrawNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::DrawNode::getLineWidth(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DrawNode:getLineWidth",iVar1,0);
  }
  return iVar1 == 0;
}

