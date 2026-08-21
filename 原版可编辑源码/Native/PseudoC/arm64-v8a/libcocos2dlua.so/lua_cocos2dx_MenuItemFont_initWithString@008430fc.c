
/* lua_cocos2dx_MenuItemFont_initWithString(lua_State*) */

bool lua_cocos2dx_MenuItemFont_initWithString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  MenuItemFont *this;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong local_88 [2];
  void *local_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (MenuItemFont *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemFont:initWithString",iVar2 + -1,2);
    bVar6 = false;
    goto LAB_00843208;
  }
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_88[0] = 0;
  local_50 = (long *)0x0;
  uVar4 = luaval_to_std_string(param_1,2,(basic_string *)local_88,"cc.MenuItemFont:initWithString");
  bVar6 = (uVar4 & 1) == 0;
  if (bVar6) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_MenuItemFont_initWithString\'"
                ,0);
  }
  else {
    uVar3 = cocos2d::MenuItemFont::initWithString
                      (this,(basic_string *)local_88,(function *)alStack_70);
    tolua_pushboolean(param_1,uVar3 & 1);
  }
  bVar6 = !bVar6;
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_008431f4:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_008431f4;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00843208:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

