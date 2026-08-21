
/* lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos(lua_State*) */

void lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40 = 0;
                    /* try { // try from 009a3218 to 00aa321f has its CatchHandler @ 009a32d0 */
                    /* try { // try from 009a3220 to 00aa3227 has its CatchHandler @ 009a32cc */
                    /* try { // try from 009a3228 to 00aa3253 has its CatchHandler @ 009a318c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3254 with catch @ 009a32c8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3220 with catch @ 009a32cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a3218 with catch @ 009a32d0
                        */
      luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.ControlHuePicker:initWithTargetAndPos");
    }
    else {
      uVar6 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a3254 to 00aa3263 has its CatchHandler @ 009a32c8 */
      uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.ControlHuePicker:initWithTargetAndPos")
      ;
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 009a3274 to 00aa3277 has its CatchHandler @ 009a3318 */
                    /* try { // try from 009a3278 to 00aa32e3 has its CatchHandler @ 009a318c */
        uVar3 = (**(code **)(*plVar4 + 0x6b8))((undefined4)local_40,local_40._4_4_,plVar4,uVar6);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_009a32f0;
      }
    }
                    /* try { // try from 009a32e4 to 00aa32e7 has its CatchHandler @ 009a3314 */
                    /* try { // try from 009a32e8 to 00aa332b has its CatchHandler @ 009a318c */
    tolua_error(param_1,&DAT_012e4873,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlHuePicker:initWithTargetAndPos",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a32f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009a32e4 with catch @ 009a3314
                        */
  __stack_chk_fail(uVar6);
}

