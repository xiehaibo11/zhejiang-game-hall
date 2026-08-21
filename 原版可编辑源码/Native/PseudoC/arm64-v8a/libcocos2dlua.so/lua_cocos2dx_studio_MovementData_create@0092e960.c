
/* lua_cocos2dx_studio_MovementData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_MovementData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  MovementData *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x80,(nothrow_t *)&std::nothrow);
    if (this == (MovementData *)0x0) {
                    /* try { // try from 0092e9e8 to 00a2eab7 has its CatchHandler @ 0092e9e8
                       catch() { ... } // from try @ 0092e9e8 with catch @ 0092e9e8
                       catch() { ... } // from try @ 0092eb38 with catch @ 0092e9e8 */
      lua_pushnil(param_1);
    }
    else {
      cocostudio::MovementData::MovementData(this);
      cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 0092e980 with catch @ 0092e9d4 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.MovementData");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0092e980 to 00a2e983 has its CatchHandler @ 0092e9d4 */
                    /* try { // try from 0092e984 to 00a2e9e7 has its CatchHandler @ 0092e934 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.MovementData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

