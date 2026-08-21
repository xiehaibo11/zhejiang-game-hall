
/* lua_cocos2dx_EaseExponentialIn_create(lua_State*) */

undefined8 lua_cocos2dx_EaseExponentialIn_create(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  ActionInterval *pAVar3;
  void *pvVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.ActionInterval",0), (uVar2 & 1) != 0)) {
      pAVar3 = (ActionInterval *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocos2d::EaseExponentialIn::create(pAVar3);
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.EaseExponentialIn");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_EaseExponentialIn_create\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.EaseExponentialIn:create",iVar1 + -1,1);
  }
  return 0;
}

