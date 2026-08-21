
/* lua_cocos2dx_studio_AnimationData_create(lua_State*) */

undefined8 lua_cocos2dx_studio_AnimationData_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  AnimationData *this;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x80,(nothrow_t *)&std::nothrow);
    if (this == (AnimationData *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      cocostudio::AnimationData::AnimationData(this);
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.AnimationData");
                    /* try { // try from 0092efd4 to 00a2f007 has its CatchHandler @ 0092f0d4 */
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.AnimationData:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

