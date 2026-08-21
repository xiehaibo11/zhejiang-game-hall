
/* lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.ControlButton:setLabelAnchorPoint");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x7b0))(plVar3,&local_40);
                    /* try { // try from 009a08ac to 00aa08b3 has its CatchHandler @ 009a0934 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009a08f0;
    }
                    /* try { // try from 009a08dc to 00aa08e3 has its CatchHandler @ 009a0918 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint\'"
                ,0);
  }
  else {
                    /* try { // try from 009a08c4 to 00aa08cb has its CatchHandler @ 009a0924 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e3acb,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009a08f0:
                    /* try { // try from 009a08f4 to 00aa08fb has its CatchHandler @ 009a0910 */
                    /* try { // try from 009a08fc to 00aa099b has its CatchHandler @ 009a0408 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009a0720 with catch @ 009a0910
                       catch() { ... } // from try @ 009a08f4 with catch @ 009a0910 */
                    /* catch() { ... } // from try @ 009a06f8 with catch @ 009a0914 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009a063c with catch @ 009a0918
                       catch() { ... } // from try @ 009a08dc with catch @ 009a0918 */
  __stack_chk_fail();
}

