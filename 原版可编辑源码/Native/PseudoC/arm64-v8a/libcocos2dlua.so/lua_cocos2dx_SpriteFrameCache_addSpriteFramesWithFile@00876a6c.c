
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_SpriteFrameCache_addSpriteFramesWithFile(lua_State*) */

void lua_cocos2dx_SpriteFrameCache_addSpriteFramesWithFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  SpriteFrameCache *this;
  ulong uVar5;
  Texture2D *pTVar6;
  undefined8 uVar7;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (SpriteFrameCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.SpriteFrameCache:addSpriteFramesWithFile");
    if ((uVar5 & 1) != 0) {
      cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this,(basic_string *)&local_60);
      lua_settop(param_1,1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      goto LAB_00876cd0;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (iVar2 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.SpriteFrameCache:addSpriteFramesWithFile");
    if ((uVar5 & 1) == 0) {
      iVar4 = 2;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,
                         "cc.SpriteFrameCache:addSpriteFramesWithFile");
      if ((uVar5 & 1) == 0) {
        iVar4 = 2;
      }
      else {
        cocos2d::SpriteFrameCache::addSpriteFramesWithFile
                  (this,(basic_string *)&local_60,(basic_string *)&local_78);
        iVar4 = 1;
        lua_settop(param_1,1);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar4 == 2) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_60,
                         "cc.SpriteFrameCache:addSpriteFramesWithFile");
      iVar4 = 6;
      if ((param_1 != (lua_State *)0x0) && (((uVar3 ^ 1) & 1) == 0)) {
        iVar4 = lua_gettop(param_1);
        if ((iVar4 < 3) ||
           (uVar5 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar5 & 1) == 0)) {
          iVar4 = 6;
        }
        else {
          pTVar6 = (Texture2D *)tolua_tousertype(param_1,3,0);
          if ((uVar3 & 1) == 0) {
            iVar4 = 6;
          }
          else {
            cocos2d::SpriteFrameCache::addSpriteFramesWithFile
                      (this,(basic_string *)&local_60,pTVar6);
            iVar4 = 1;
            lua_settop(param_1,1);
          }
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar4 == 6) goto LAB_00876ca8;
    }
LAB_00876cd0:
    uVar7 = 1;
    goto LAB_00876cd4;
  }
LAB_00876ca8:
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.SpriteFrameCache:addSpriteFramesWithFile",iVar2 + -1,2);
  uVar7 = 0;
LAB_00876cd4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

