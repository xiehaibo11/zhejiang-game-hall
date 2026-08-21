
undefined8 FUN_008e540c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    if ((*(byte *)(lVar2 + 0x2d8) & 1) == 0) {
      lVar4 = lVar2 + 0x2d9;
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x2d8) >> 1);
    }
    else {
      lVar4 = *(long *)(lVar2 + 0x2e8);
      uVar5 = *(ulong *)(lVar2 + 0x2e0);
    }
    lua_pushlstring(param_1,lVar4,uVar5,0);
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008e5454 to 009e549f has its CatchHandler @ 008e5454
                       catch() { ... } // from try @ 008e5454 with catch @ 008e5454
                       catch() { ... } // from try @ 008e54a4 with catch @ 008e5454 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:getSelectedTitle",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

