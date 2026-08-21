
/* lua_cocos2dx_3d_Ray_finalize(lua_State*) */

undefined8 lua_cocos2dx_3d_Ray_finalize(lua_State *param_1)

{
  Ray *this;
  
  this = (Ray *)tolua_tousertype(param_1,1,0);
  if (this != (Ray *)0x0) {
    cocos2d::Ray::~Ray(this);
    operator_delete(this);
  }
  return 0;
}

