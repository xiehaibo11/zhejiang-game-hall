
undefined8 FUN_008e5260(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    if ((*(byte *)(lVar2 + 0x308) & 1) == 0) {
      lVar4 = lVar2 + 0x309;
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x308) >> 1);
    }
    else {
      lVar4 = *(long *)(lVar2 + 0x318);
      uVar5 = *(ulong *)(lVar2 + 0x310);
    }
    lua_pushlstring(param_1,lVar4,uVar5,0);
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 008e5210 with catch @ 008e52a8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:getSelectedIcon",iVar1 + -1,0);
                    /* catch() { ... } // from try @ 008e5228 with catch @ 008e52ac */
    uVar3 = 0;
  }
                    /* catch() { ... } // from try @ 008e51dc with catch @ 008e52dc */
  return uVar3;
}

