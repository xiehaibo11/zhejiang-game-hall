
undefined8 FUN_008e2904(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008e2910 to 009e292b has its CatchHandler @ 008e2f80 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 800);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008e2968 to 009e297f has its CatchHandler @ 008e2f20 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GController");
    }
                    /* try { // try from 008e2984 to 009e29a3 has its CatchHandler @ 008e2f1c */
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008e294c to 009e2963 has its CatchHandler @ 008e2f4c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getSelectionController",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

