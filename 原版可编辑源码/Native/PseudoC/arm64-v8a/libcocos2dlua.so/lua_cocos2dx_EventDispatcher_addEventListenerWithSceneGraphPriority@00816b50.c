
/* lua_cocos2dx_EventDispatcher_addEventListenerWithSceneGraphPriority(lua_State*) */

undefined4 lua_cocos2dx_EventDispatcher_addEventListenerWithSceneGraphPriority(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  EventDispatcher *this;
  ulong uVar3;
  Node *pNVar4;
  EventListener *unaff_x21;
  
  this = (EventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar3 = luaval_is_usertype(param_1,2,"cc.EventListener",0), (uVar3 & 1) == 0)) {
        bVar1 = false;
      }
      else {
        unaff_x21 = (EventListener *)tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar3 & 1) != 0)) &&
         (pNVar4 = (Node *)tolua_tousertype(param_1,3,0), bVar1)) {
        cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority(this,unaff_x21,pNVar4);
        lua_settop(param_1,1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EventDispatcher_addEventListenerWithSceneGraphPriority\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventDispatcher:addEventListenerWithSceneGraphPriority",iVar2 + -1,2);
  }
  return 0;
}

