
/* lua_cocos2dx_studio_InnerActionFrame_getInnerActionType(lua_State*) */

bool lua_cocos2dx_studio_InnerActionFrame_getInnerActionType(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 009430fc to 00a4314f has its CatchHandler @ 009430fc
                       catch() { ... } // from try @ 009430fc with catch @ 009430fc
                       catch() { ... } // from try @ 00943188 with catch @ 009430fc
                       catch() { ... } // from try @ 009431c8 with catch @ 009430fc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x58),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:getInnerActionType",iVar1,0);
  }
                    /* try { // try from 00943150 to 00a43167 has its CatchHandler @ 00943238 */
  return iVar1 == 0;
}

