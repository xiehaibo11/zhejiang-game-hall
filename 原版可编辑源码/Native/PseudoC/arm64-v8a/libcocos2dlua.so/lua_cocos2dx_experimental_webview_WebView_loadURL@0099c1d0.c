
/* lua_cocos2dx_experimental_webview_WebView_loadURL(lua_State*) */

void lua_cocos2dx_experimental_webview_WebView_loadURL(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  WebView *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (WebView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccexp.WebView:loadURL");
    if ((uVar3 & 1) != 0) {
      cocos2d::experimental::ui::WebView::loadURL(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
LAB_0099c2f0:
      uVar4 = 1;
      goto LAB_0099c32c;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccexp.WebView:loadURL");
    if ((uVar3 & 1) == 0) {
      iVar5 = 2;
    }
    else {
      uVar3 = luaval_to_boolean(param_1,3,local_54,"ccexp.WebView:loadURL");
      if ((uVar3 & 1) == 0) {
        iVar5 = 2;
      }
      else {
        cocos2d::experimental::ui::WebView::loadURL(this,(basic_string *)&local_50,local_54[0]);
        iVar5 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar5 != 2) goto LAB_0099c2f0;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccexp.WebView:loadURL",iVar2 + -1,1);
  uVar4 = 0;
LAB_0099c32c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

