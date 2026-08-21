
/* lua_cocos2dx_experimental_webview_WebView_setBounces(lua_State*) */

undefined4 lua_cocos2dx_experimental_webview_WebView_setBounces(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccexp.WebView:setBounces");
    if ((uVar4 & 1) != 0) {
      cocos2d::experimental::ui::WebView::setBounces(bVar2);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0099c444;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_webview_WebView_setBounces\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.WebView:setBounces",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_0099c444:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

