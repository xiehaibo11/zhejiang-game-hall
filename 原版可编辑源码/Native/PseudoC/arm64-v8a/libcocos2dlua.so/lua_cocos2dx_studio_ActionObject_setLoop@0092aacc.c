
/* lua_cocos2dx_studio_ActionObject_setLoop(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionObject_setLoop(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionObject *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 0092aad4 to 00a2ab07 has its CatchHandler @ 0092ab58 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0092ab08 to 00a2aba3 has its CatchHandler @ 0092a928 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccs.ActionObject:setLoop");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionObject::setLoop(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0092ab88;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ActionObject_setLoop\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 0092aabc with catch @ 0092ab54 */
                    /* catch() { ... } // from try @ 0092aad4 with catch @ 0092ab58 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:setLoop",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0092ab88:
                    /* catch() { ... } // from try @ 0092aa88 with catch @ 0092ab88 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

