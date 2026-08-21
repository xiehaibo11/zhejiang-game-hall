
/* lua_cocos2dx_studio_Skin_getBone(lua_State*) */

undefined8 lua_cocos2dx_studio_Skin_getBone(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 00939458 to 00a3946f has its CatchHandler @ 00939cf4 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x688))(plVar2);
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009394d8 to 00a394ef has its CatchHandler @ 00939c4c */
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009394b4 to 00a394d3 has its CatchHandler @ 00939c80 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,"ccs.Bone"
                );
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0093947c to 00a39493 has its CatchHandler @ 00939cc4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Skin:getBone",iVar1 + -1,0);
                    /* try { // try from 00939498 to 00a394af has its CatchHandler @ 00939c84 */
    uVar3 = 0;
  }
  return uVar3;
}

