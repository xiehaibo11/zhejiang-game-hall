
/* lua_cocos2dx_ui_TextField_setPlaceHolderColor(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setPlaceHolderColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  Color3B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color4B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_40,"ccui.TextField:setPlaceHolderColor");
    if ((uVar4 & 1) == 0) {
      cocos2d::Color3B::Color3B(aCStack_48);
      uVar4 = luaval_to_color3b(param_1,2,aCStack_48,"ccui.TextField:setPlaceHolderColor");
      if ((uVar4 & 1) == 0) goto LAB_009820b0;
      cocos2d::ui::TextField::setPlaceHolderColor((Color3B *)pCVar3);
    }
    else {
      cocos2d::ui::TextField::setPlaceHolderColor(pCVar3);
    }
    uVar5 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_009820b0:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setPlaceHolderColor",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098216c with catch @ 009820fc
                       catch(type#1 @ 00000000) { ... } // from try @ 0098219c with catch @ 009820fc
                       catch(type#1 @ 00000000) { ... } // from try @ 009821cc with catch @ 009820fc
                       catch(type#1 @ 00000000) { ... } // from try @ 009821f4 with catch @ 009820fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00982220 with catch @ 009820fc
                        */
  __stack_chk_fail();
}

