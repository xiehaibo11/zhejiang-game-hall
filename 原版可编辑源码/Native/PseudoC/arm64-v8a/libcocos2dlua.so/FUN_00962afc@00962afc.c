
undefined8 FUN_00962afc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ScriptHandlerMgr *this;
  code *pcVar4;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00962bd8;
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00962b30 to 00a62b63 has its CatchHandler @ 00962c30 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
                    /* try { // try from 00962bb0 to 00a62c4b has its CatchHandler @ 00962a78 */
    luaL_error(param_1,&DAT_012d4880,iVar2 + -1,1);
    goto LAB_00962bd8;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
                    /* try { // try from 00962b64 to 00a62b77 has its CatchHandler @ 00962bfc */
  local_70 = &PTR_FUN_0169dde0;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
                    /* try { // try from 00962b7c to 00a62baf has its CatchHandler @ 00962c00 */
  (**(code **)(*plVar3 + 0x7a0))(plVar3,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00962bc4:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00962bc4;
  }
  this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this,plVar3,iVar2);
LAB_00962bd8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00962b64 with catch @ 00962bfc */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00962b7c with catch @ 00962c00 */
  __stack_chk_fail();
}

