
undefined8 FUN_0096266c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *this;
  ScriptHandlerMgr *this_00;
  code *pcVar3;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00962678 to 00a6267b has its CatchHandler @ 009626b0 */
                    /* try { // try from 0096267c to 00a626c3 has its CatchHandler @ 0096262c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_00962740;
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00962678 with catch @ 009626b0 */
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'addEventListener\' function of TextField has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    goto LAB_00962740;
  }
                    /* try { // try from 009626c4 to 00a6277b has its CatchHandler @ 009626c4
                       catch() { ... } // from try @ 009626c4 with catch @ 009626c4
                       catch() { ... } // from try @ 009627fc with catch @ 009626c4 */
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_0169dcc0;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  cocos2d::ui::TextField::addEventListener(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_0096272c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_0096272c;
  }
  this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,iVar2);
LAB_00962740:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

