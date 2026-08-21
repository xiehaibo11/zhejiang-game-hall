
undefined8 FUN_009618b8(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 00961898 with catch @ 009618d0 */
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_0096198c;
                    /* try { // try from 009618e4 to 00a6199b has its CatchHandler @ 009618e4
                       catch() { ... } // from try @ 009618e4 with catch @ 009618e4
                       catch() { ... } // from try @ 00961a1c with catch @ 009618e4 */
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'addTouchEventListener\' function of Widget has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    goto LAB_0096198c;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169d970;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  cocos2d::ui::Widget::addTouchEventListener(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00961978:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00961978;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_0096198c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096199c to 00a619cf has its CatchHandler @ 00961a9c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

