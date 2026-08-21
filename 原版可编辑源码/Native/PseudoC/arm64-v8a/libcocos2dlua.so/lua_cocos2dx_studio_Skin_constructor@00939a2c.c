
/* lua_cocos2dx_studio_Skin_constructor(lua_State*) */

bool lua_cocos2dx_studio_Skin_constructor(lua_State *param_1)

{
  int iVar1;
  Skin *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x6a0);
    cocostudio::Skin::Skin(this);
                    /* try { // try from 00939a80 to 00a39a97 has its CatchHandler @ 00939cac */
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.Skin");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","ccs.Skin:Skin",
               iVar1,0);
  }
                    /* try { // try from 00939aa4 to 00a39abb has its CatchHandler @ 00939c6c */
  return iVar1 == 0;
}

