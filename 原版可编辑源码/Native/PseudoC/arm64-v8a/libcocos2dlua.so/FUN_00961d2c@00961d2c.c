
undefined8 FUN_00961d2c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CheckBox *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00961d40 to 00a61d73 has its CatchHandler @ 00961e40 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00961e00;
  this = (CheckBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00961d74 to 00a61d87 has its CatchHandler @ 00961e0c */
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'addEventListener\' function of CheckBox has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    goto LAB_00961e00;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
                    /* try { // try from 00961d8c to 00a61dbf has its CatchHandler @ 00961e10 */
  local_70 = &PTR_FUN_0169da80;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  cocos2d::ui::CheckBox::addEventListener(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00961dec:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00961dc0 to 00a61e5b has its CatchHandler @ 00961c88 */
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00961dec;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_00961e00:
                    /* catch() { ... } // from try @ 00961d74 with catch @ 00961e0c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00961d8c with catch @ 00961e10 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

