
/* lua_cocos2dx_MenuItemAtlasFont_initWithString(lua_State*) */

bool lua_cocos2dx_MenuItemAtlasFont_initWithString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  MenuItemAtlasFont *this;
  code *pcVar8;
  bool bVar9;
  char local_cc [4];
  int local_c8;
  int iStack_c4;
  ulong local_c0 [2];
  void *local_b0;
  ulong local_a8 [2];
  void *local_98;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (MenuItemAtlasFont *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 6) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemAtlasFont:initWithString",iVar2 + -1,6);
    bVar9 = false;
    goto LAB_00842be8;
  }
  local_a8[1] = 0;
  local_98 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8[0] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_70 = (long *)0x0;
  uVar3 = luaval_to_std_string
                    (param_1,2,(basic_string *)local_a8,"cc.MenuItemAtlasFont:initWithString");
  uVar4 = luaval_to_std_string
                    (param_1,3,(basic_string *)local_c0,"cc.MenuItemAtlasFont:initWithString");
  uVar5 = luaval_to_int32(param_1,4,&iStack_c4,"cc.MenuItemAtlasFont:initWithString");
  uVar6 = luaval_to_int32(param_1,5,&local_c8,"cc.MenuItemAtlasFont:initWithString");
  uVar7 = luaval_to_int32(param_1,6,(int *)local_cc,"cc.MenuItemAtlasFont:initWithString");
  bVar9 = (uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0;
  if (bVar9) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_MenuItemAtlasFont_initWithString\'",0)
    ;
  }
  else {
    uVar3 = cocos2d::MenuItemAtlasFont::initWithString
                      (this,(basic_string *)local_a8,(basic_string *)local_c0,iStack_c4,local_c8,
                       local_cc[0],(function *)alStack_90);
    tolua_pushboolean(param_1,uVar3 & 1);
  }
  bVar9 = !bVar9;
  if (alStack_90 == local_70) {
    pcVar8 = *(code **)(*local_70 + 0x20);
LAB_00842bc4:
    (*pcVar8)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar8 = *(code **)(*local_70 + 0x28);
    goto LAB_00842bc4;
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00842be8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

