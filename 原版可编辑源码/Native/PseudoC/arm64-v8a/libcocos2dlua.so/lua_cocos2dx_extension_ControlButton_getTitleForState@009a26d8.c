
/* lua_cocos2dx_extension_ControlButton_getTitleForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getTitleForState(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009a26e8 to 00aa26ff has its CatchHandler @ 009a2928 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a2704 to 00aa271b has its CatchHandler @ 009a2920 */
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
                    /* try { // try from 009a272c to 00aa275b has its CatchHandler @ 009a291c */
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getTitleForState");
    if ((uVar5 & 1) != 0) {
      (**(code **)(*plVar4 + 0x6b8))(local_58,plVar4,local_3c);
                    /* try { // try from 009a275c to 00aa28b7 has its CatchHandler @ 009a2388 */
      uVar5 = (ulong)(local_58[0] >> 1);
      pvVar2 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        uVar5 = local_50;
        pvVar2 = local_48;
      }
      lua_pushlstring(param_1,pvVar2,uVar5);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      uVar6 = 1;
      goto LAB_009a27cc;
    }
    tolua_error(param_1,0x12e47bd,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e479b,
               iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_009a27cc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

