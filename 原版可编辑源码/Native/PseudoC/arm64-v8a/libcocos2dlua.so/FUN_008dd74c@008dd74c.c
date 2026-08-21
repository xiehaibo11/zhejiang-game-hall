
undefined8 FUN_008dd74c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  IHitTest *pIVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pIVar5 = *(IHitTest **)(lVar2 + 0x268);
    if (pIVar5 == (IHitTest *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<fairygui::IHitTest>(pIVar5,"fairygui.IHitTest");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd900 with catch @ 008dd7b8
                       catch(type#1 @ 00000000) { ... } // from try @ 008dd984 with catch @ 008dd7b8
                       catch(type#1 @ 00000000) { ... } // from try @ 008dd994 with catch @ 008dd7b8
                        */
      tolua_pushusertype(param_1,pIVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getHitArea",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

