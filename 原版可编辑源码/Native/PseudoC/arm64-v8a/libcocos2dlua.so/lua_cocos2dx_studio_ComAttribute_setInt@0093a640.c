
/* lua_cocos2dx_studio_ComAttribute_setInt(lua_State*) */

bool lua_cocos2dx_studio_ComAttribute_setInt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ComAttribute *this;
  bool bVar5;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAttribute *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:setInt");
                    /* try { // try from 0093a6b0 to 00a3a7d3 has its CatchHandler @ 0093a6b0
                       catch() { ... } // from try @ 0093a6b0 with catch @ 0093a6b0
                       catch() { ... } // from try @ 0093a8c4 with catch @ 0093a6b0 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccs.ComAttribute:setInt");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_setInt\'",0);
    }
    else {
      cocostudio::ComAttribute::setInt(this,(basic_string *)&local_50,local_54);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAttribute:setInt",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

