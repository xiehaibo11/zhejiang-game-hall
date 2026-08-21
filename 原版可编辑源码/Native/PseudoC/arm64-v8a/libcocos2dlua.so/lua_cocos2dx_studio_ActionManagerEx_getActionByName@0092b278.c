
/* lua_cocos2dx_studio_ActionManagerEx_getActionByName(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionManagerEx_getActionByName(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ActionManagerEx *this;
  void *pvVar7;
  undefined4 uVar8;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ActionManagerEx *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 2) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccs.ActionManagerEx:getActionByName");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"ccs.ActionManagerEx:getActionByName");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ActionManagerEx_getActionByName\'"
                  ,0);
      uVar8 = 0;
    }
    else {
      pcVar2 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      pvVar7 = (void *)cocostudio::ActionManagerEx::getActionByName(this,pcVar1,pcVar2);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "ccs.ActionObject");
      }
      uVar8 = 1;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionManagerEx:getActionByName",iVar4 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

