
undefined8 FUN_009d47ac(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  WebView *this;
  ScriptHandlerMgr *this_00;
  code *pcVar4;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (WebView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = toluafix_ref_function(param_1,2,0);
    local_70 = (ulong)uVar3;
    local_80 = &PTR_FUN_0169f830;
    plStack_78 = param_1;
    local_60 = (long *)&local_80;
    this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,uVar3);
    cocos2d::experimental::ui::WebView::setOnDidFailLoading(this,(function *)&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar4 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_009d4890;
      pcVar4 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar4)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.WebView:setOnDidFailLoading",iVar2 + -1,1);
  }
LAB_009d4890:
                    /* try { // try from 009d4894 to 00ad48ff has its CatchHandler @ 009d80e0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

