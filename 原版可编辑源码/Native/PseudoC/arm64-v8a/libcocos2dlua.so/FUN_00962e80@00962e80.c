
undefined8 FUN_00962e80(lua_State *param_1)

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
  if (param_1 == (lua_State *)0x0) goto LAB_00962f5c;
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
                    /* try { // try from 00962f30 to 00a62f63 has its CatchHandler @ 00962fb4 */
    luaL_error(param_1,&DAT_012d4965,iVar2 + -1,1);
    goto LAB_00962f5c;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
                    /* try { // try from 00962ee4 to 00a62f17 has its CatchHandler @ 00962fe4 */
  local_70 = &PTR_FUN_0169df00;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  (**(code **)(*plVar3 + 0x7a0))(plVar3,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00962f48:
    (*pcVar4)();
  }
  else {
                    /* try { // try from 00962f18 to 00a62f2b has its CatchHandler @ 00962fb0 */
    if (local_50 != (long *)0x0) {
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_00962f48;
    }
  }
  this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this,plVar3,iVar2);
LAB_00962f5c:
                    /* try { // try from 00962f64 to 00a62fff has its CatchHandler @ 00962e2c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

