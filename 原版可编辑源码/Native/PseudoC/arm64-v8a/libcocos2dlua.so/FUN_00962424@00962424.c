
undefined8 FUN_00962424(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slider *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00962424 to 00a62457 has its CatchHandler @ 009624a8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_009624f8;
  this = (Slider *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00962458 to 00a624f3 has its CatchHandler @ 009622f0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,&DAT_012d473d,iVar2 + -1,1);
                    /* catch() { ... } // from try @ 009623d8 with catch @ 009624d8 */
    goto LAB_009624f8;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169dc30;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
                    /* catch() { ... } // from try @ 0096240c with catch @ 009624a4 */
  cocos2d::ui::Slider::addEventListener(this,(function *)&local_70);
                    /* catch() { ... } // from try @ 00962424 with catch @ 009624a8 */
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_009624e4:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_009624e4;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_009624f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

