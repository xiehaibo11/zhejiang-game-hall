
undefined8 FUN_00962d48(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00962e1c;
  this = (ListView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00962d84 to 00a62dcf has its CatchHandler @ 00962d84
                       catch() { ... } // from try @ 00962d84 with catch @ 00962d84
                       catch() { ... } // from try @ 00962dd4 with catch @ 00962d84 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'addEventListener\' function of ListView has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    goto LAB_00962e1c;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169de70;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  cocos2d::ui::ListView::addEventListener(this,(function *)&local_70);
                    /* try { // try from 00962dd0 to 00a62dd3 has its CatchHandler @ 00962e18 */
                    /* try { // try from 00962dd4 to 00a62e2b has its CatchHandler @ 00962d84 */
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00962e08:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00962e08;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* catch() { ... } // from try @ 00962dd0 with catch @ 00962e18 */
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_00962e1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00962e2c to 00a62ee3 has its CatchHandler @ 00962e2c
                       catch() { ... } // from try @ 00962e2c with catch @ 00962e2c
                       catch() { ... } // from try @ 00962f64 with catch @ 00962e2c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

