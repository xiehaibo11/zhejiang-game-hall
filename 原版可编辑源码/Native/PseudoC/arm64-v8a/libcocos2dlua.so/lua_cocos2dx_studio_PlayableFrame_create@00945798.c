
/* lua_cocos2dx_studio_PlayableFrame_create(lua_State*) */

undefined8 lua_cocos2dx_studio_PlayableFrame_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* catch() { ... } // from try @ 00945704 with catch @ 0094579c */
                    /* catch() { ... } // from try @ 0094571c with catch @ 009457a0 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::timeline::PlayableFrame::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009457ec to 00a4583b has its CatchHandler @ 009457ec
                       catch(type#1 @ 00000000) { ... } // from try @ 009457ec with catch @ 009457ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00945870 with catch @ 009457ec
                       catch(type#1 @ 00000000) { ... } // from try @ 009458c8 with catch @ 009457ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00945934 with catch @ 009457ec
                        */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.PlayableFrame");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.PlayableFrame:create",iVar1 + -1,0);
                    /* catch() { ... } // from try @ 009456d0 with catch @ 009457d0 */
    uVar2 = 0;
  }
  return uVar2;
}

