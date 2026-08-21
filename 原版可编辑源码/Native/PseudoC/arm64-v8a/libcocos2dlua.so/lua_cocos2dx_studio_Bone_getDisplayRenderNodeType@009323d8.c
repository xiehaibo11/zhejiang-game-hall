
/* lua_cocos2dx_studio_Bone_getDisplayRenderNodeType(lua_State*) */

bool lua_cocos2dx_studio_Bone_getDisplayRenderNodeType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Bone *this;
  
  this = (Bone *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009323f8 to 00a323fb has its CatchHandler @ 00932448 */
                    /* try { // try from 009323fc to 00a3246b has its CatchHandler @ 00932388 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocostudio::Bone::getDisplayRenderNodeType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:getDisplayRenderNodeType",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009323f8 with catch @ 00932448 */
  return iVar1 == 0;
}

