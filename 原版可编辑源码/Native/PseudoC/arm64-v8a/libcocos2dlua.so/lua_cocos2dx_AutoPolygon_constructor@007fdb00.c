
/* lua_cocos2dx_AutoPolygon_constructor(lua_State*) */

bool lua_cocos2dx_AutoPolygon_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  AutoPolygon *this;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.AutoPolygon:AutoPolygon");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AutoPolygon_constructor\'",0
                 );
    }
    else {
      this = operator_new(0x38);
      cocos2d::AutoPolygon::AutoPolygon(this,(basic_string *)&local_50);
      tolua_pushusertype(param_1,this,"cc.AutoPolygon");
      uVar3 = lua_gettop(param_1);
      tolua_register_gc(param_1,uVar3);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AutoPolygon:AutoPolygon",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

