
undefined8 FUN_008d96b4(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* catch() { ... } // from try @ 008d9578 with catch @ 008d96b8 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008d93a4 with catch @ 008d96d0 */
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008d9534 with catch @ 008d96dc */
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0xb0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 008d9498 with catch @ 008d9714 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "fairygui.PackageItem");
    }
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 008d94b4 with catch @ 008d96f4 */
                    /* catch() { ... } // from try @ 008d93f0 with catch @ 008d96f8 */
                    /* catch() { ... } // from try @ 008d938c with catch @ 008d96fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getPackageItem",iVar1 + -1,0);
                    /* catch() { ... } // from try @ 008d93dc with catch @ 008d9700 */
    uVar3 = 0;
  }
  return uVar3;
}

