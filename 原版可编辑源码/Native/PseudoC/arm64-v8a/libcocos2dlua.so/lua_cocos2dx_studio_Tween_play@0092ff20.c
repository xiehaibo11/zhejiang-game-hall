
/* lua_cocos2dx_studio_Tween_play(lua_State*) */

undefined4 lua_cocos2dx_studio_Tween_play(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 unaff_x21;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 5) {
                    /* try { // try from 0092ff9c to 00a2ffe7 has its CatchHandler @ 0092ff9c
                       catch() { ... } // from try @ 0092ff9c with catch @ 0092ff9c
                       catch() { ... } // from try @ 00930010 with catch @ 0092ff9c */
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"ccs.MovementBoneData",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
                    /* try { // try from 0092ffe8 to 00a2ffeb has its CatchHandler @ 0093006c */
    uVar5 = luaval_to_int32(param_1,3,&iStack_6c,"ccs.Tween:play");
                    /* try { // try from 0093000c to 00a3000f has its CatchHandler @ 0093005c */
                    /* try { // try from 00930010 to 00a3007f has its CatchHandler @ 0092ff9c */
    uVar6 = luaval_to_int32(param_1,4,&local_70,"ccs.Tween:play");
    uVar7 = luaval_to_int32(param_1,5,&iStack_74,"ccs.Tween:play");
    uVar8 = luaval_to_int32(param_1,6,&local_78,"ccs.Tween:play");
    if (((bVar2) && ((uVar5 & 1) != 0)) &&
       (((uVar6 & 1) != 0 && (((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)))))) {
                    /* catch() { ... } // from try @ 0093000c with catch @ 0093005c */
                    /* catch() { ... } // from try @ 0092ffe8 with catch @ 0093006c */
      (**(code **)(*plVar4 + 0xa8))(plVar4,unaff_x21,iStack_6c,local_70,iStack_74,local_78);
                    /* try { // try from 00930080 to 00a30167 has its CatchHandler @ 00930080
                       catch() { ... } // from try @ 00930080 with catch @ 00930080
                       catch() { ... } // from try @ 009301e8 with catch @ 00930080 */
      uVar9 = 1;
      lua_settop(param_1,1);
      goto LAB_009300a4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Tween_play\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","ccs.Tween:play",
               iVar3 + -1,5);
  }
  uVar9 = 0;
LAB_009300a4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

