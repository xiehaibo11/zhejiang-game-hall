
/* lua_cocos2dx_studio_MovementBoneData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_MovementBoneData_create(lua_State *param_1)

{
  int iVar1;
  MovementBoneData *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
                    /* catch() { ... } // from try @ 0092e344 with catch @ 0092e3dc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.MovementBoneData:create",iVar1 + -1,0);
    return 0;
                    /* catch() { ... } // from try @ 0092e35c with catch @ 0092e3e0 */
  }
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (MovementBoneData *)0x0) {
    cocostudio::MovementBoneData::MovementBoneData(this);
                    /* catch() { ... } // from try @ 0092e310 with catch @ 0092e410 */
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.MovementBoneData");
      return 1;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

