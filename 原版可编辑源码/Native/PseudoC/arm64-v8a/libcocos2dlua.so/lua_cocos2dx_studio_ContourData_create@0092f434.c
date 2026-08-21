
/* lua_cocos2dx_studio_ContourData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_ContourData_create(lua_State *param_1)

{
  int iVar1;
  ContourData *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ContourData:create",iVar1 + -1,0);
    return 0;
  }
                    /* catch() { ... } // from try @ 0092f42c with catch @ 0092f47c */
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ContourData *)0x0) {
                    /* catch() { ... } // from try @ 0092f408 with catch @ 0092f48c */
    cocostudio::ContourData::ContourData(this);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
                    /* try { // try from 0092f4a0 to 00a2f56f has its CatchHandler @ 0092f4a0
                       catch() { ... } // from try @ 0092f4a0 with catch @ 0092f4a0
                       catch() { ... } // from try @ 0092f5f0 with catch @ 0092f4a0 */
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ContourData");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

