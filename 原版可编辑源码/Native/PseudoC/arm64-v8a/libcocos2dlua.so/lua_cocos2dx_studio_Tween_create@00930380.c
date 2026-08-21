
/* lua_cocos2dx_studio_Tween_create(lua_State*) */

undefined8 lua_cocos2dx_studio_Tween_create(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  Bone *pBVar3;
  void *pvVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar2 & 1) != 0)) {
      pBVar3 = (Bone *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocostudio::Tween::create(pBVar3);
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccs.Tween");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Tween_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.Tween:create",iVar1 + -1,1);
  }
  return 0;
}

