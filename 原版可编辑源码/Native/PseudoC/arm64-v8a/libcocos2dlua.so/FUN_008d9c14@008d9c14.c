
undefined8 FUN_008d9c14(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0xa8);
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 008d9c8c to 009d9d2b has its CatchHandler @ 008da15c */
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"cc.Node")
      ;
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008d9c50 to 009d9c5b has its CatchHandler @ 008da038 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:displayObject",iVar1 + -1,0);
                    /* try { // try from 008d9c60 to 009d9c67 has its CatchHandler @ 008da034 */
    uVar3 = 0;
  }
  return uVar3;
}

