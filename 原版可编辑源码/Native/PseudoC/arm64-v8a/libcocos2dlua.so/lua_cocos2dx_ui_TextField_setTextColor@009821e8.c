
/* lua_cocos2dx_ui_TextField_setTextColor(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTextColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  Color4B aCStack_40 [8];
  long local_38;
  
                    /* try { // try from 009821ec to 00a821f3 has its CatchHandler @ 0098225c */
                    /* try { // try from 009821f4 to 00a82213 has its CatchHandler @ 009820fc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00982214 to 00a8221f has its CatchHandler @ 0098225c */
  pCVar3 = (Color4B *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00982220 to 00a82263 has its CatchHandler @ 009820fc */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_40,"ccui.TextField:setTextColor");
    if ((uVar4 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009821c4 with catch @ 0098225c
                       catch(type#1 @ 00000000) { ... } // from try @ 009821ec with catch @ 0098225c
                       catch(type#1 @ 00000000) { ... } // from try @ 00982214 with catch @ 0098225c
                        */
      cocos2d::ui::TextField::setTextColor(pCVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982164 with catch @ 00982260
                       catch(type#1 @ 00000000) { ... } // from try @ 00982190 with catch @ 00982260
                        */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009822ac;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TextField_setTextColor\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTextColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009822ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

