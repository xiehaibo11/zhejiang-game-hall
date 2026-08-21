
/* lua_cocos2dx_physics3d_Physics3DObject_setCollisionCallback(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DObject_setCollisionCallback(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ScriptHandlerMgr *this;
  code *pcVar5;
  undefined **local_a0;
  lua_State *local_98;
  ulong uStack_90;
  long *local_80;
  undefined **local_70;
  lua_State *local_68;
  ulong uStack_60;
  undefined ***local_50;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b7724 with catch @ 009b773c
                        */
  lVar1 = tpidr_el0;
                    /* try { // try from 009b7740 to 00ab7793 has its CatchHandler @ 009b7740
                       catch() { ... } // from try @ 009b7740 with catch @ 009b7740
                       catch() { ... } // from try @ 009b77a8 with catch @ 009b7740 */
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DObject:setCollisionCallback",iVar2 + -1,1);
    goto LAB_009b7844;
  }
  uVar3 = toluafix_ref_function(param_1,2,0);
  uStack_90 = (ulong)uVar3;
  local_a0 = &PTR_FUN_0169ebf8;
                    /* try { // try from 009b7794 to 00ab77a7 has its CatchHandler @ 009b77c0 */
                    /* try { // try from 009b77a8 to 00ab77d3 has its CatchHandler @ 009b7740 */
  local_70 = &PTR_FUN_0169ebf8;
  local_98 = param_1;
  local_80 = (long *)&local_a0;
  local_68 = param_1;
  uStack_60 = uStack_90;
  local_50 = &local_70;
  FUN_009b7b04(&local_70,(long)pvVar4 + 0x40);
                    /* catch() { ... } // from try @ 009b7794 with catch @ 009b77c0 */
  if (&local_70 == local_50) {
    pcVar5 = (code *)(*local_50)[4];
LAB_009b7804:
    (*pcVar5)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_50)[5];
    goto LAB_009b7804;
  }
  if (&local_a0 == (undefined ***)local_80) {
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_009b7830:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_009b7830;
  }
  this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this,pvVar4,uVar3);
LAB_009b7844:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b7858 to 00ab785f has its CatchHandler @ 009b7868 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b7858 with catch @ 009b7868
                        */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

