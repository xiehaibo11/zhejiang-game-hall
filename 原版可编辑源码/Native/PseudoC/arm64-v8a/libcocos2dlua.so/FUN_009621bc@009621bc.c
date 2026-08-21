
undefined8 FUN_009621bc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RadioButtonGroup *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00962290;
  this = (RadioButtonGroup *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'addEventListener\' function of RadioButtonGroup has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    goto LAB_00962290;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169dba0;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  cocos2d::ui::RadioButtonGroup::addEventListener(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_0096227c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
                    /* try { // try from 00962258 to 00a622a3 has its CatchHandler @ 00962258
                       catch() { ... } // from try @ 00962258 with catch @ 00962258
                       catch() { ... } // from try @ 009622a8 with catch @ 00962258 */
    goto LAB_0096227c;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_00962290:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009622a4 to 00a622a7 has its CatchHandler @ 009622dc */
                    /* try { // try from 009622a8 to 00a622ef has its CatchHandler @ 00962258 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

