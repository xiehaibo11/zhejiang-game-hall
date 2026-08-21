
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setBaseValue(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_setBaseValue(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CCBAnimationManager *this;
  ulong uVar5;
  bool bVar6;
  Node *unaff_x22;
  uint uVar7;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    cocos2d::Value::Value(aVStack_58);
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    uVar3 = luaval_to_ccvalue(param_1,2,aVStack_58,"cc.CCBAnimationManager:setBaseValue");
                    /* try { // try from 0091c8fc to 00a1c99b has its CatchHandler @ 0091c8fc
                       catch() { ... } // from try @ 0091c8fc with catch @ 0091c8fc
                       catch() { ... } // from try @ 0091ca1c with catch @ 0091c8fc */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar5 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar5 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
      unaff_x22 = (Node *)tolua_tousertype(param_1,3,0);
      uVar7 = 1;
    }
    uVar4 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_70,"cc.CCBAnimationManager:setBaseValue");
    bVar6 = (uVar3 & uVar7 & uVar4) == 0;
    if (bVar6) {
                    /* try { // try from 0091c9d0 to 00a1c9e3 has its CatchHandler @ 0091ca68 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setBaseValue\'"
                  ,0);
                    /* try { // try from 0091c9e8 to 00a1ca1b has its CatchHandler @ 0091ca6c */
    }
    else {
      cocosbuilder::CCBAnimationManager::setBaseValue
                (this,aVStack_58,unaff_x22,(basic_string *)&local_70);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
                    /* try { // try from 0091c99c to 00a1c9cf has its CatchHandler @ 0091ca9c */
    cocos2d::Value::~Value(aVStack_58);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setBaseValue",iVar2 + -1,3);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

