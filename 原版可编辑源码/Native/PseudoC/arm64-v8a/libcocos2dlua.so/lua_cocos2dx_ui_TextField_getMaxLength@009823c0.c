
/* lua_cocos2dx_ui_TextField_getMaxLength(lua_State*) */

bool lua_cocos2dx_ui_TextField_getMaxLength(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  TextField *this;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982340 with catch @ 00982418
                        */
    iVar2 = cocos2d::ui::TextField::getMaxLength(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982354 with catch @ 0098241c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982364 with catch @ 00982424
                        */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getMaxLength",iVar1,0);
  }
  return iVar1 == 0;
}

