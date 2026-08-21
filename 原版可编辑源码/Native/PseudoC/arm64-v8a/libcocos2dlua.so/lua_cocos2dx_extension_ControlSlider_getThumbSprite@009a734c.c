
/* lua_cocos2dx_extension_ControlSlider_getThumbSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlSlider_getThumbSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* catch() { ... } // from try @ 009a71fc with catch @ 009a734c
                       catch() { ... } // from try @ 009a7330 with catch @ 009a734c */
                    /* catch() { ... } // from try @ 009a7178 with catch @ 009a7350
                       catch() { ... } // from try @ 009a7324 with catch @ 009a7350 */
                    /* catch() { ... } // from try @ 009a71d8 with catch @ 009a7354 */
                    /* catch() { ... } // from try @ 009a71bc with catch @ 009a7358 */
                    /* catch() { ... } // from try @ 009a715c with catch @ 009a735c */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009a73d8 with catch @ 009a7378 */
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x718))(plVar2);
                    /* try { // try from 009a73b0 to 00aa73b7 has its CatchHandler @ 009a748c */
    if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009a73d8 to 00aa74a7 has its CatchHandler @ 009a7378 */
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009a73cc to 00aa73d7 has its CatchHandler @ 009a7454 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:getThumbSprite",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

