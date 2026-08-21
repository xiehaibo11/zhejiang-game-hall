
/* lua_cocos2dx_Material_getTechniques(lua_State*) */

bool lua_cocos2dx_Material_getTechniques(lua_State *param_1)

{
  int iVar1;
  Material *this;
  Vector *pVVar2;
  
  this = (Material *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocos2d::Material::getTechniques(this);
    ccvector_to_luaval<cocos2d::Technique*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Material:getTechniques",iVar1,0);
  }
  return iVar1 == 0;
}

