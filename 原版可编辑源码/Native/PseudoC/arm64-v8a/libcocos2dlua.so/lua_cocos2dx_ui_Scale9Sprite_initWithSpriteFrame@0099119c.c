
/* lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 0099120c to 00a912c3 has its CatchHandler @ 0099120c
                       catch() { ... } // from try @ 0099120c with catch @ 0099120c
                       catch() { ... } // from try @ 00991344 with catch @ 0099120c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar5 & 1) == 0)) {
      luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:initWithSpriteFrame");
    }
    else {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:initWithSpriteFrame");
      if ((uVar5 & 1) != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x680))(plVar4,uVar6,aRStack_48);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_009912c8;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:initWithSpriteFrame",iVar2 + -1,2);
  }
                    /* try { // try from 009912c4 to 00a912f7 has its CatchHandler @ 009913c4 */
  uVar6 = 0;
LAB_009912c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

