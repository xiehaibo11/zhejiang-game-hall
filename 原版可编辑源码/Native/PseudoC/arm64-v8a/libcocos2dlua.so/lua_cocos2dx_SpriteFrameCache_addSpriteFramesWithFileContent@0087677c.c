
/* lua_cocos2dx_SpriteFrameCache_addSpriteFramesWithFileContent(lua_State*) */

undefined4 lua_cocos2dx_SpriteFrameCache_addSpriteFramesWithFileContent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SpriteFrameCache *this;
  ulong uVar3;
  ulong uVar4;
  Texture2D *pTVar5;
  undefined4 uVar6;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SpriteFrameCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,
                       "cc.SpriteFrameCache:addSpriteFramesWithFileContent");
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
        (uVar4 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar4 & 1) == 0)) ||
       (pTVar5 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar3 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_SpriteFrameCache_addSpriteFramesWithFileContent\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      cocos2d::SpriteFrameCache::addSpriteFramesWithFileContent
                (this,(basic_string *)local_50,pTVar5);
      uVar6 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteFrameCache:addSpriteFramesWithFileContent",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

