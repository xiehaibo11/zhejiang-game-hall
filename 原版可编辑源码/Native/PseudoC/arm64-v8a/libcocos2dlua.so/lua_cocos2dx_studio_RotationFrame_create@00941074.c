
/* lua_cocos2dx_studio_RotationFrame_create(lua_State*) */

undefined8 lua_cocos2dx_studio_RotationFrame_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::timeline::RotationFrame::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 00940fcc with catch @ 009410cc */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.RotationFrame");
    }
    uVar2 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 00941000 with catch @ 00941098 */
                    /* catch() { ... } // from try @ 00941018 with catch @ 0094109c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.RotationFrame:create",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* try { // try from 009410e8 to 00a41137 has its CatchHandler @ 009410e8
                       catch(type#1 @ 00000000) { ... } // from try @ 009410e8 with catch @ 009410e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0094116c with catch @ 009410e8
                       catch(type#1 @ 00000000) { ... } // from try @ 009411c4 with catch @ 009410e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00941230 with catch @ 009410e8
                        */
  return uVar2;
}

