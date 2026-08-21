
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setObject(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_setObject(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  CCBAnimationManager *this;
  ulong uVar4;
  bool bVar5;
  Ref *unaff_x21;
  Node *unaff_x22;
  uint uVar6;
  uint uVar7;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 0091d360 to 00a1d3fb has its CatchHandler @ 0091d1fc */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    if (param_1 == (lua_State *)0x0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0091d314 with catch @ 0091d3ac */
                    /* catch() { ... } // from try @ 0091d32c with catch @ 0091d3b0 */
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar4 = luaval_is_usertype(param_1,2,"cc.Ref",0), (uVar4 & 1) == 0)) {
        uVar6 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 0091d2e0 with catch @ 0091d3e0 */
        unaff_x21 = (Ref *)tolua_tousertype(param_1,2,0);
        uVar6 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar4 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar4 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
        unaff_x22 = (Node *)tolua_tousertype(param_1,3,0);
        uVar7 = 1;
      }
    }
    uVar3 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_70,"cc.CCBAnimationManager:setObject");
    bVar5 = (uVar6 & uVar7 & uVar3) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setObject\'"
                  ,0);
    }
    else {
      cocosbuilder::CCBAnimationManager::setObject
                (this,unaff_x21,unaff_x22,(basic_string *)&local_70);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setObject",iVar2 + -1,3);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0091d4dc to 00a1d527 has its CatchHandler @ 0091d4dc
                       catch() { ... } // from try @ 0091d4dc with catch @ 0091d4dc
                       catch() { ... } // from try @ 0091d52c with catch @ 0091d4dc */
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

