
/* lua_cocos2dx_MenuItemSprite_initWithNormalSprite(lua_State*) */

undefined4 lua_cocos2dx_MenuItemSprite_initWithNormalSprite(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  MenuItemSprite *this;
  ulong uVar4;
  Node *pNVar5;
  code *pcVar6;
  undefined4 uVar7;
  Node *unaff_x21;
  Node *unaff_x22;
  byte bVar8;
  byte bVar9;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (MenuItemSprite *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 4) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemSprite:initWithNormalSprite",iVar2 + -1,4);
    uVar7 = 0;
    goto LAB_00843ec4;
  }
  local_70 = (long *)0x0;
  if (param_1 == (lua_State *)0x0) {
LAB_00843e80:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_MenuItemSprite_initWithNormalSprite\'"
                ,0);
    uVar7 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
    if ((iVar2 < 2) || (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      bVar8 = 0;
    }
    else {
      unaff_x21 = (Node *)tolua_tousertype(param_1,2,0);
      bVar8 = 1;
    }
    iVar2 = lua_gettop(param_1);
    if ((iVar2 < 3) || (uVar4 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar4 & 1) == 0)) {
      bVar9 = 0;
    }
    else {
      unaff_x22 = (Node *)tolua_tousertype(param_1,3,0);
      bVar9 = 1;
    }
    iVar2 = lua_gettop(param_1);
    if (((iVar2 < 4) || (uVar4 = luaval_is_usertype(param_1,4,"cc.Node",0), (uVar4 & 1) == 0)) ||
       (pNVar5 = (Node *)tolua_tousertype(param_1,4,0), !(bool)(bVar8 & bVar9))) goto LAB_00843e80;
    uVar3 = cocos2d::MenuItemSprite::initWithNormalSprite
                      (this,unaff_x21,unaff_x22,pNVar5,(function *)alStack_90);
    tolua_pushboolean(param_1,uVar3 & 1);
    uVar7 = 1;
  }
  if (alStack_90 == local_70) {
    pcVar6 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00843ec4;
    pcVar6 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar6)();
LAB_00843ec4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

