
/* lua_cocos2dx_extension_AssetsManagerEx_setVerifyCallback(lua_State*) */

void lua_cocos2dx_extension_AssetsManagerEx_setVerifyCallback(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 009b0ef0 to 00ab0eff has its CatchHandler @ 009b0f94 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b0f00 to 00ab0fb3 has its CatchHandler @ 009b0de8 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:setVerifyCallback",iVar2 + -1,1);
    uVar4 = 0;
    goto LAB_009b0fcc;
  }
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  FUN_009b5968(alStack_70,lVar3 + 0x210);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_009b0f8c:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_009b0f8c;
  }
                    /* catch() { ... } // from try @ 009b0ef0 with catch @ 009b0f94 */
                    /* catch() { ... } // from try @ 009b0e90 with catch @ 009b0f98 */
  lua_settop(param_1,1);
  if (alStack_a0 == local_80) {
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_009b0fc4:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1094 with catch @ 009b0fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 009b1104 with catch @ 009b0fb4
                        */
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_009b0fc4;
  }
  uVar4 = 1;
LAB_009b0fcc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b0fe4 to 00ab1007 has its CatchHandler @ 009b10ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

