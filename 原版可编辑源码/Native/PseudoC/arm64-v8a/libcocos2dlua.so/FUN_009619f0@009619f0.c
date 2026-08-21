
undefined8 FUN_009619f0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00961ac4;
                    /* try { // try from 00961a1c to 00a61ab7 has its CatchHandler @ 009618e4 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
                    /* catch() { ... } // from try @ 0096199c with catch @ 00961a9c */
    luaL_error(param_1,&DAT_012d45da,iVar2 + -1,1);
    goto LAB_00961ac4;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169da00;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
                    /* catch() { ... } // from try @ 009619d0 with catch @ 00961a68 */
                    /* catch() { ... } // from try @ 009619e8 with catch @ 00961a6c */
  cocos2d::ui::Widget::addClickEventListener(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00961ab0:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00961ab0;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_00961ac4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

