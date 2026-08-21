
/* lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DSliderConstraint_getDampingDirAng(lua_State *param_1)

{
  int iVar1;
  Physics3DSliderConstraint *this;
  float fVar2;
  
  this = (Physics3DSliderConstraint *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009c1af4 to 00ac1c1f has its CatchHandler @ 009c1af4
                       catch() { ... } // from try @ 009c1af4 with catch @ 009c1af4
                       catch() { ... } // from try @ 009c1c28 with catch @ 009c1af4 */
    fVar2 = (float)cocos2d::Physics3DSliderConstraint::getDampingDirAng(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ecb46,
               iVar1,0);
  }
  return iVar1 == 0;
}

