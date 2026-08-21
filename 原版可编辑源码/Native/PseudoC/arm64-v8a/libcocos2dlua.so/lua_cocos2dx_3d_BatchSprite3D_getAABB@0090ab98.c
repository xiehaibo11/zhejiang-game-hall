
/* lua_cocos2dx_3d_BatchSprite3D_getAABB(lua_State*) */

undefined8 lua_cocos2dx_3d_BatchSprite3D_getAABB(lua_State *param_1)

{
  int iVar1;
  BatchSprite3D *this;
  AABB *pAVar2;
  
  this = (BatchSprite3D *)tolua_tousertype(param_1,1,0);
  if (this == (BatchSprite3D *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_3d_BatchSprite3D_getAABB\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pAVar2 = (AABB *)cocos2d::BatchSprite3D::getAABB(this);
      object_to_luaval<cocos2d::AABB>(param_1,"cc.AABB",pAVar2);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.BatchSprite3D:getAABB",iVar1 + -1,0);
  }
  return 0;
}

