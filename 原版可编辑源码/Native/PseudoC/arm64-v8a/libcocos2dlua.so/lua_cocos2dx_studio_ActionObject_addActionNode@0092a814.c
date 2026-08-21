
/* lua_cocos2dx_studio_ActionObject_addActionNode(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionObject_addActionNode(lua_State *param_1)

{
  int iVar1;
  ActionObject *this;
  ulong uVar2;
  ActionNode *pAVar3;
  
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0092a840 to 00a2a88b has its CatchHandler @ 0092a840
                       catch() { ... } // from try @ 0092a840 with catch @ 0092a840
                       catch() { ... } // from try @ 0092a8b4 with catch @ 0092a840 */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.ActionNode",0), (uVar2 & 1) != 0)) {
      pAVar3 = (ActionNode *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 0092a88c to 00a2a88f has its CatchHandler @ 0092a914 */
      cocostudio::ActionObject::addActionNode(this,pAVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionObject_addActionNode\'",0
               );
  }
  else {
                    /* try { // try from 0092a8b0 to 00a2a8b3 has its CatchHandler @ 0092a904 */
                    /* try { // try from 0092a8b4 to 00a2a927 has its CatchHandler @ 0092a840 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:addActionNode",iVar1 + -1,1);
  }
  return 0;
}

