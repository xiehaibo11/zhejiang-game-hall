
/* lua_cocos2dx_studio_Timeline_constructor(lua_State*) */

bool lua_cocos2dx_studio_Timeline_constructor(lua_State *param_1)

{
  int iVar1;
  Timeline *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x70);
                    /* try { // try from 00946768 to 00a4693f has its CatchHandler @ 00946768
                       catch() { ... } // from try @ 00946768 with catch @ 00946768
                       catch() { ... } // from try @ 0094698c with catch @ 00946768 */
    cocostudio::timeline::Timeline::Timeline(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.Timeline");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cf7cf,
               iVar1,0);
  }
  return iVar1 == 0;
}

