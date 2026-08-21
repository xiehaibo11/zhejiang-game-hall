
/* lua_cocos2dx_MenuItemImage_initWithNormalImage(lua_State*) */

bool lua_cocos2dx_MenuItemImage_initWithNormalImage(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  MenuItemImage *this;
  code *pcVar6;
  bool bVar7;
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (MenuItemImage *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 4) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemImage:initWithNormalImage",iVar2 + -1,4);
    bVar7 = false;
    goto LAB_00844a34;
  }
  local_90 = 0;
  local_88 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_60 = (long *)0x0;
  uVar3 = luaval_to_std_string
                    (param_1,2,(basic_string *)&local_98,"cc.MenuItemImage:initWithNormalImage");
  uVar4 = luaval_to_std_string
                    (param_1,3,(basic_string *)&local_b0,"cc.MenuItemImage:initWithNormalImage");
  uVar5 = luaval_to_std_string
                    (param_1,4,(basic_string *)&local_c8,"cc.MenuItemImage:initWithNormalImage");
  bVar7 = (uVar3 & uVar4 & uVar5 & 1) == 0;
  if (bVar7) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_MenuItemImage_initWithNormalImage\'",0
               );
  }
  else {
    uVar3 = cocos2d::MenuItemImage::initWithNormalImage
                      (this,(basic_string *)&local_98,(basic_string *)&local_b0,
                       (basic_string *)&local_c8,(function *)alStack_80);
    tolua_pushboolean(param_1,uVar3 & 1);
  }
  bVar7 = !bVar7;
  if (alStack_80 == local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
LAB_00844a10:
    (*pcVar6)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar6 = *(code **)(*local_60 + 0x28);
    goto LAB_00844a10;
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00844a34:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}

