
/* lua_cocos2dx_studio_ContourData_constructor(lua_State*) */

bool lua_cocos2dx_studio_ContourData_constructor(lua_State *param_1)

{
  int iVar1;
  ContourData *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x40);
    cocostudio::ContourData::ContourData(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 0092f570 to 00a2f5a3 has its CatchHandler @ 0092f670 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ContourData");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ContourData:ContourData",iVar1,0);
  }
  return iVar1 == 0;
}

