
/* lua_cocos2dx_AnimationCache_addAnimation(lua_State*) */

bool lua_cocos2dx_AnimationCache_addAnimation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  AnimationCache *this;
  ulong uVar4;
  bool bVar5;
  Animation *unaff_x21;
  uint uVar6;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (AnimationCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Animation",0), (uVar4 & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      unaff_x21 = (Animation *)tolua_tousertype(param_1,2,0);
      uVar6 = 1;
    }
    uVar3 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"cc.AnimationCache:addAnimation");
    bVar5 = (uVar6 & uVar3) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_AnimationCache_addAnimation\'",0);
    }
    else {
      cocos2d::AnimationCache::addAnimation(this,unaff_x21,(basic_string *)&local_60);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AnimationCache:addAnimation",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

