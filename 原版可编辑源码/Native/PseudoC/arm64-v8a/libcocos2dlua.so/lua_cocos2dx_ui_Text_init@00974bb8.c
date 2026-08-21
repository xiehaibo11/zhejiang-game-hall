
/* lua_cocos2dx_ui_Text_init(lua_State*) */

bool lua_cocos2dx_ui_Text_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  double local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.Text:init");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.Text:init");
    uVar5 = luaval_to_number(param_1,4,&local_80,"ccui.Text:init");
    bVar7 = (uVar3 & uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,&DAT_012d985f,0);
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x6a0))((float)local_80,plVar6,&local_60,&local_78);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar7 = !bVar7;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","ccui.Text:init",
               iVar2 + -1,3);
    bVar7 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

