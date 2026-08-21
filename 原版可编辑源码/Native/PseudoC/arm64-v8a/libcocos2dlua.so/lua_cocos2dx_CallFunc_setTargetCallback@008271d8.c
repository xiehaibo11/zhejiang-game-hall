
/* lua_cocos2dx_CallFunc_setTargetCallback(lua_State*) */

undefined4 lua_cocos2dx_CallFunc_setTargetCallback(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  Ref *this;
  Ref *this_00;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar3 & 1) != 0)) {
      this = (Ref *)tolua_tousertype(param_1,2,0);
      this_00 = *(Ref **)(lVar2 + 0x58);
      if (this_00 != this) {
        if (this != (Ref *)0x0) {
          cocos2d::Ref::retain(this);
          this_00 = *(Ref **)(lVar2 + 0x58);
        }
        if (this_00 != (Ref *)0x0) {
          cocos2d::Ref::release(this_00);
        }
        *(Ref **)(lVar2 + 0x58) = this;
      }
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_CallFunc_setTargetCallback\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CallFunc:setTargetCallback",iVar1 + -1,1);
  }
  return 0;
}

