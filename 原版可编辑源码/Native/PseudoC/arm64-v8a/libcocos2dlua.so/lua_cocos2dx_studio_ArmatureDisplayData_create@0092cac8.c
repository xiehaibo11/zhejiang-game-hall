
/* lua_cocos2dx_studio_ArmatureDisplayData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_ArmatureDisplayData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ArmatureDisplayData *this;
  
                    /* try { // try from 0092cacc to 00a2cacf has its CatchHandler @ 0092cb54 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this == (ArmatureDisplayData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      cocostudio::ArmatureDisplayData::ArmatureDisplayData(this);
      cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 0092caf0 with catch @ 0092cb44 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ArmatureDisplayData");
    }
                    /* catch() { ... } // from try @ 0092cacc with catch @ 0092cb54 */
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0092caf0 to 00a2caf3 has its CatchHandler @ 0092cb44 */
                    /* try { // try from 0092caf4 to 00a2cb67 has its CatchHandler @ 0092ca80 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ArmatureDisplayData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

