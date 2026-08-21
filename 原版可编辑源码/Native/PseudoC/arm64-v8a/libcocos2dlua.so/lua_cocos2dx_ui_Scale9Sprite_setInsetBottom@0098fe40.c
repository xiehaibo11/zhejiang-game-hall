
/* lua_cocos2dx_ui_Scale9Sprite_setInsetBottom(lua_State*) */

undefined4 lua_cocos2dx_ui_Scale9Sprite_setInsetBottom(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Scale9Sprite *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0098fe70 to 00a8ff0b has its CatchHandler @ 0098fc4c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.Scale9Sprite:setInsetBottom");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Scale9Sprite::setInsetBottom(this,(float)local_40);
                    /* catch() { ... } // from try @ 0098fe24 with catch @ 0098febc */
      uVar4 = 1;
                    /* catch() { ... } // from try @ 0098fe3c with catch @ 0098fec0 */
      lua_settop(param_1,1);
      goto LAB_0098ff00;
    }
                    /* catch() { ... } // from try @ 0098fdf0 with catch @ 0098fef0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Scale9Sprite_setInsetBottom\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:setInsetBottom",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0098ff00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

