
/* lua_cocos2dx_ui_PageView_getIndicatorSpaceBetweenIndexNodes(lua_State*) */

bool lua_cocos2dx_ui_PageView_getIndicatorSpaceBetweenIndexNodes(lua_State *param_1)

{
  int iVar1;
  PageView *this;
  float fVar2;
  
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::PageView::getIndicatorSpaceBetweenIndexNodes(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098538c with catch @ 00985514
                        */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009853fc with catch @ 009854e4
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:getIndicatorSpaceBetweenIndexNodes",iVar1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009853a0 with catch @ 009854fc
                        */
  }
  return iVar1 == 0;
}

