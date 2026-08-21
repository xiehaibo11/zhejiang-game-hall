
undefined8 FUN_008f37a0(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f37a4 to 009f37ff has its CatchHandler @ 008f3874 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x260);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008f3800 to 009f3827 has its CatchHandler @ 008f3754 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Node")
      ;
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader3D:getContent",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 008f3828 to 009f383b has its CatchHandler @ 008f3874 */
  return uVar3;
}

