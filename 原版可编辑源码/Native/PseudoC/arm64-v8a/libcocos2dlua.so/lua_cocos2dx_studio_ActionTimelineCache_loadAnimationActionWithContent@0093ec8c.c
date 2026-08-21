
/* lua_cocos2dx_studio_ActionTimelineCache_loadAnimationActionWithContent(lua_State*) */

undefined4
lua_cocos2dx_studio_ActionTimelineCache_loadAnimationActionWithContent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ActionTimelineCache *this;
  void *pvVar5;
  undefined4 uVar6;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionTimelineCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccs.ActionTimelineCache:loadAnimationActionWithContent");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,
                       "ccs.ActionTimelineCache:loadAnimationActionWithContent");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ActionTimelineCache_loadAnimationActionWithContent\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)cocostudio::timeline::ActionTimelineCache::loadAnimationActionWithContent
                                 (this,(basic_string *)&local_50,(basic_string *)&local_68);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccs.ActionTimeline");
      }
      uVar6 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimelineCache:loadAnimationActionWithContent",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

