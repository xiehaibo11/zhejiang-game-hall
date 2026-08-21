
/* lua_cocos2dx_Material_addTechnique(lua_State*) */

undefined4 lua_cocos2dx_Material_addTechnique(lua_State *param_1)

{
  int iVar1;
  Material *this;
  ulong uVar2;
  Technique *pTVar3;
  
  this = (Material *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Technique",0), (uVar2 & 1) != 0)) {
      pTVar3 = (Technique *)tolua_tousertype(param_1,2,0);
      cocos2d::Material::addTechnique(this,pTVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Material_addTechnique\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Material:addTechnique",iVar1 + -1,1);
  }
  return 0;
}

