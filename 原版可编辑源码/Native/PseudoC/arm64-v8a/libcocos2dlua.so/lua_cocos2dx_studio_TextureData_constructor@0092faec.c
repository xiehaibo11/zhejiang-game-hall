
/* lua_cocos2dx_studio_TextureData_constructor(lua_State*) */

bool lua_cocos2dx_studio_TextureData_constructor(lua_State *param_1)

{
  int iVar1;
  TextureData *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x68);
    cocostudio::TextureData::TextureData(this);
                    /* try { // try from 0092fb40 to 00a2fb53 has its CatchHandler @ 0092fbd8 */
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 0092fb58 to 00a2fb8b has its CatchHandler @ 0092fbdc */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.TextureData");
  }
  else {
                    /* try { // try from 0092fb0c to 00a2fb3f has its CatchHandler @ 0092fc0c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.TextureData:TextureData",iVar1,0);
  }
  return iVar1 == 0;
}

