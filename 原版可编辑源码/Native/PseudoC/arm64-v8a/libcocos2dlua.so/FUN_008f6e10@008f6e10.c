
undefined8 FUN_008f6e10(lua_State *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 008f6e10 to 009f6e17 has its CatchHandler @ 008f6eb4 */
                    /* try { // try from 008f6e20 to 009f6e33 has its CatchHandler @ 008f6ebc */
  puVar2 = (undefined8 *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008f6e34 to 009f6f1f has its CatchHandler @ 008f6d58 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)*puVar2;
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.GLoader");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.DragDropManager:getAgent",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

