
/* lua_cocos2dx_studio_ComAttribute_getBool(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAttribute_getBool(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ComAttribute *this;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAttribute *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getBool");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"ccs.ComAttribute:getBool");
    if ((uVar3 & uVar4 & 1) != 0) {
      uVar3 = cocostudio::ComAttribute::getBool(this,(basic_string *)&local_50,local_54[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_0093a574;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getBool\'"
                ,0);
LAB_0093a5d8:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ComAttribute:getBool",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_0093a5ec;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getBool");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getBool\'",0);
      goto LAB_0093a5d8;
    }
    uVar3 = cocostudio::ComAttribute::getBool(this,(basic_string *)&local_50,false);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_0093a574:
    uVar6 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0093a5ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

