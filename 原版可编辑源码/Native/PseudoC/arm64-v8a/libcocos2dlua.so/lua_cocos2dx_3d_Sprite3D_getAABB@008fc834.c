
/* lua_cocos2dx_3d_Sprite3D_getAABB(lua_State*) */

bool lua_cocos2dx_3d_Sprite3D_getAABB(lua_State *param_1)

{
  int iVar1;
  Sprite3D *this;
  AABB *pAVar2;
  
                    /* try { // try from 008fc838 to 009fc87f has its CatchHandler @ 008fc838
                       catch() { ... } // from try @ 008fc838 with catch @ 008fc838
                       catch() { ... } // from try @ 008fc928 with catch @ 008fc838
                       catch() { ... } // from try @ 008fca20 with catch @ 008fc838 */
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pAVar2 = (AABB *)cocos2d::Sprite3D::getAABB(this);
    object_to_luaval<cocos2d::AABB>(param_1,"cc.AABB",pAVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getAABB",iVar1,0);
                    /* try { // try from 008fc880 to 009fc897 has its CatchHandler @ 008fca44 */
  }
                    /* try { // try from 008fc8ac to 009fc8b3 has its CatchHandler @ 008fca38 */
  return iVar1 == 0;
}

