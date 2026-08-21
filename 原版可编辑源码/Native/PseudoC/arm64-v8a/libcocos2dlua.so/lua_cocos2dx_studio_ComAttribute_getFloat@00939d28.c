
/* lua_cocos2dx_studio_ComAttribute_getFloat(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAttribute_getFloat(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ComAttribute *this;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  double local_58;
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
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getFloat");
    uVar4 = luaval_to_number(param_1,3,&local_58,"ccs.ComAttribute:getFloat");
    if ((uVar3 & uVar4 & 1) != 0) {
      fVar7 = (float)cocostudio::ComAttribute::getFloat
                               (this,(basic_string *)&local_50,(float)local_58);
      tolua_pushnumber((double)fVar7,param_1);
      goto LAB_00939e1c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getFloat\'",0);
LAB_00939e80:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ComAttribute:getFloat",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_00939e94;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getFloat");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_getFloat\'",0);
      goto LAB_00939e80;
    }
    fVar7 = (float)cocostudio::ComAttribute::getFloat(this,(basic_string *)&local_50,0.0);
    tolua_pushnumber((double)fVar7,param_1);
LAB_00939e1c:
    uVar6 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00939e94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

