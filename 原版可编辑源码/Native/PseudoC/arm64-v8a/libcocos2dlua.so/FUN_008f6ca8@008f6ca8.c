
undefined8 FUN_008f6ca8(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6c4c with catch @ 008f6cf0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008f6c58 with catch @ 008f6cf4
                        */
    if (fairygui::ScrollPane::_draggingPane == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)fairygui::ScrollPane::_draggingPane + 0xc),
                 (int *)((long)fairygui::ScrollPane::_draggingPane + 0x10),
                 fairygui::ScrollPane::_draggingPane,"fairygui.ScrollPane");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.ScrollPane:getDraggingPane",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

