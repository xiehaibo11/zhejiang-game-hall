
/* lua_cocos2dx_navmesh_NavMeshAgent_getRadius(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshAgent_getRadius(lua_State *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  float fVar2;
  
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::NavMeshAgent::getRadius(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 009c8254 with catch @ 009c82e0 */
                    /* catch() { ... } // from try @ 009c8180 with catch @ 009c82e4
                       catch() { ... } // from try @ 009c8290 with catch @ 009c82e4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:getRadius",iVar1,0);
  }
  return iVar1 == 0;
}

