
undefined8 FUN_00922838(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionTimeline *pAVar3;
  code *pcVar4;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    pAVar3 = (ActionTimeline *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      local_60 = toluafix_ref_function(param_1,2,0);
      local_60 = local_60 & 0xffffffff;
                    /* try { // try from 0092289c to 00a228e7 has its CatchHandler @ 0092289c
                       catch() { ... } // from try @ 0092289c with catch @ 0092289c
                       catch() { ... } // from try @ 009228ec with catch @ 0092289c */
      local_70 = &PTR_FUN_0169ccc8;
      plStack_68 = param_1;
      local_50 = (long *)&local_70;
      cocostudio::timeline::ActionTimeline::setFrameEventCallFunc(pAVar3,&local_70);
      if (&local_70 == (undefined ***)local_50) {
        pcVar4 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_009228fc;
        pcVar4 = *(code **)(*local_50 + 0x28);
      }
      (*pcVar4)();
    }
    else {
                    /* try { // try from 009228e8 to 00a228eb has its CatchHandler @ 00922940 */
      luaL_error(param_1,
                 "\'setFrameEventCallFunc\' function of ActionTimeline has wrong number of arguments: %d, was expecting %d\n"
                 ,iVar2 + -1,1);
                    /* try { // try from 009228ec to 00a22953 has its CatchHandler @ 0092289c */
    }
  }
LAB_009228fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

