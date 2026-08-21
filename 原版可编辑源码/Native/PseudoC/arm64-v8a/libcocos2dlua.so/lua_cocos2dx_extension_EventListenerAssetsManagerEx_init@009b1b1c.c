
/* lua_cocos2dx_extension_EventListenerAssetsManagerEx_init(lua_State*) */

undefined4 lua_cocos2dx_extension_EventListenerAssetsManagerEx_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  EventListenerAssetsManagerEx *this;
  ulong uVar4;
  AssetsManagerEx *pAVar5;
  code *pcVar6;
  undefined4 uVar7;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EventListenerAssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50 = (long *)0x0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.AssetsManagerEx",0), (uVar4 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_EventListenerAssetsManagerEx_init\'"
                  ,0);
      uVar7 = 0;
    }
    else {
      pAVar5 = (AssetsManagerEx *)tolua_tousertype(param_1,2,0);
      uVar3 = cocos2d::extension::EventListenerAssetsManagerEx::init
                        (this,pAVar5,(function *)alStack_70);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
    }
    if (alStack_70 == local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_009b1c34;
      pcVar6 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar6)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventListenerAssetsManagerEx:init",iVar2 + -1,2);
    uVar7 = 0;
  }
LAB_009b1c34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

