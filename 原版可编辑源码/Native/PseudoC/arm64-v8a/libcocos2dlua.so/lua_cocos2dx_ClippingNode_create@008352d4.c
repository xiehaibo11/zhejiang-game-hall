
/* lua_cocos2dx_ClippingNode_create(lua_State*) */

undefined8 lua_cocos2dx_ClippingNode_create(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  Node *pNVar4;
  void *pvVar5;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar5 = (void *)cocos2d::ClippingNode::create();
  }
  else {
    if ((((iVar1 != 2) || (param_1 == (lua_State *)0x0)) || (iVar2 = lua_gettop(param_1), iVar2 < 2)
        ) || (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.ClippingNode:create",iVar1 + -1,0);
      return 0;
    }
    pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
    pvVar5 = (void *)cocos2d::ClippingNode::create(pNVar4);
  }
  if (pvVar5 == (void *)0x0) {
    lua_pushnil(param_1);
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
               "cc.ClippingNode");
  }
  return 1;
}

