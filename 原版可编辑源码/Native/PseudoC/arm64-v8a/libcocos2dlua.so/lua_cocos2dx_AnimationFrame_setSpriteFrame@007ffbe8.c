
/* lua_cocos2dx_AnimationFrame_setSpriteFrame(lua_State*) */

undefined8 lua_cocos2dx_AnimationFrame_setSpriteFrame(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  Ref *this;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  if (lVar2 == 0) {
    tolua_error(param_1,
                "invalid \'cobj\' in function \'lua_cocos2dx_AnimationFrame_setSpriteFrame\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar3 & 1) != 0)) {
        this = (Ref *)tolua_tousertype(param_1,2,0);
        if (this != (Ref *)0x0) {
          cocos2d::Ref::retain(this);
        }
        if (*(Ref **)(lVar2 + 0x30) != (Ref *)0x0) {
          cocos2d::Ref::release(*(Ref **)(lVar2 + 0x30));
        }
        *(Ref **)(lVar2 + 0x30) = this;
        lua_settop(param_1,1);
        return 1;
      }
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_AnimationFrame_setSpriteFrame\'",0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.AnimationFrame:setSpriteFrame",iVar1 + -1,1);
    }
  }
  return 0;
}

