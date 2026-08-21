
/* lua_cocos2dx_studio_Bone_getTweenData(lua_State*) */

undefined8 lua_cocos2dx_studio_Bone_getTweenData(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 00932cb4 to 00a32cb7 has its CatchHandler @ 00932d04 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00932cb8 to 00a32d27 has its CatchHandler @ 00932c44 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x5c8))(plVar2);
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 00932d28 to 00a32e57 has its CatchHandler @ 00932d28
                       catch() { ... } // from try @ 00932d28 with catch @ 00932d28
                       catch() { ... } // from try @ 00932ed8 with catch @ 00932d28 */
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 00932cb4 with catch @ 00932d04 */
                    /* catch() { ... } // from try @ 00932c90 with catch @ 00932d14 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccs.FrameData");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cb560,
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

