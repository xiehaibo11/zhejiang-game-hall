
undefined8 FUN_008dcffc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 008dd008 to 009dd0b3 has its CatchHandler @ 008dd008
                       catch() { ... } // from try @ 008dd008 with catch @ 008dd008
                       catch() { ... } // from try @ 008dd270 with catch @ 008dd008 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    if ((*(byte *)(lVar2 + 0x108) & 1) == 0) {
      lVar4 = lVar2 + 0x109;
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x108) >> 1);
    }
    else {
      uVar5 = *(ulong *)(lVar2 + 0x110);
      lVar4 = *(long *)(lVar2 + 0x118);
    }
    lua_pushlstring(param_1,lVar4,uVar5,0);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getTooltips",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

