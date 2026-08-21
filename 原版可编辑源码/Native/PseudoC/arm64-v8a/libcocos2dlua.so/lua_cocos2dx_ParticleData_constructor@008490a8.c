
/* lua_cocos2dx_ParticleData_constructor(lua_State*) */

bool lua_cocos2dx_ParticleData_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ParticleData *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0xd8);
    cocos2d::ParticleData::ParticleData(this);
    tolua_pushusertype(param_1,this,"cc.ParticleData");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleData:ParticleData",iVar1,0);
  }
  return iVar1 == 0;
}

