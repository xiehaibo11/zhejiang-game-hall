
/* lua_cocos2dx_studio_ActionTimelineData_constructor(lua_State*) */

bool lua_cocos2dx_studio_ActionTimelineData_constructor(lua_State *param_1)

{
  int iVar1;
  ActionTimelineData *this;
  
                    /* try { // try from 00946e10 to 00a46e3b has its CatchHandler @ 00946efc */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x28);
    cocostudio::timeline::ActionTimelineData::ActionTimelineData(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ActionTimelineData");
  }
  else {
                    /* try { // try from 00946e3c to 00a46ec3 has its CatchHandler @ 00946c1c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cf96c,
               iVar1,0);
  }
  return iVar1 == 0;
}

