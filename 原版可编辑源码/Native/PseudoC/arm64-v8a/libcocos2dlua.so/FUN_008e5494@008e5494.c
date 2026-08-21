
undefined8 FUN_008e5494(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 008e54a0 to 009e54a3 has its CatchHandler @ 008e54d8 */
                    /* try { // try from 008e54a4 to 009e54eb has its CatchHandler @ 008e5454 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* try { // try from 008e54ec to 009e55b7 has its CatchHandler @ 008e54ec
                       catch() { ... } // from try @ 008e54ec with catch @ 008e54ec
                       catch() { ... } // from try @ 008e5638 with catch @ 008e54ec */
    if ((*(byte *)(lVar2 + 0x2c0) & 1) == 0) {
      lVar4 = lVar2 + 0x2c1;
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x2c0) >> 1);
    }
    else {
      lVar4 = *(long *)(lVar2 + 0x2d0);
      uVar5 = *(ulong *)(lVar2 + 0x2c8);
    }
    lua_pushlstring(param_1,lVar4,uVar5,0);
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 008e54a0 with catch @ 008e54d8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:getTitle",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

