
/* lua_cocos2dx_TMXMapInfo_initWithXML(lua_State*) */

bool lua_cocos2dx_TMXMapInfo_initWithXML(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  TMXMapInfo *this;
  bool bVar5;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TMXMapInfo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.TMXMapInfo:initWithXML");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.TMXMapInfo:initWithXML");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TMXMapInfo_initWithXML\'",0)
      ;
    }
    else {
      uVar3 = cocos2d::TMXMapInfo::initWithXML
                        (this,(basic_string *)&local_50,(basic_string *)&local_68);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar5 = !bVar5;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXMapInfo:initWithXML",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

