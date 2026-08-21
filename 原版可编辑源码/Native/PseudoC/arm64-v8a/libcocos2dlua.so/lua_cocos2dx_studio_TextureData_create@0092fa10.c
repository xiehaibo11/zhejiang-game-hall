
/* lua_cocos2dx_studio_TextureData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_TextureData_create(lua_State *param_1)

{
  int iVar1;
  TextureData *this;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 0092f9c8 with catch @ 0092fa18 */
  iVar1 = lua_gettop();
                    /* catch() { ... } // from try @ 0092f9a4 with catch @ 0092fa28 */
  if (iVar1 + -1 != 0) {
                    /* try { // try from 0092fa3c to 00a2fb0b has its CatchHandler @ 0092fa3c
                       catch() { ... } // from try @ 0092fa3c with catch @ 0092fa3c
                       catch() { ... } // from try @ 0092fb8c with catch @ 0092fa3c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.TextureData:create",iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (TextureData *)0x0) {
    cocostudio::TextureData::TextureData(this);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.TextureData");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

