
/* lua_cocos2dx_ui_Scale9Sprite_setState(lua_State*) */

undefined4 lua_cocos2dx_ui_Scale9Sprite_setState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Scale9Sprite *pSVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar3 = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Scale9Sprite:setState");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Scale9Sprite::setState(pSVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0098fe14;
    }
    tolua_error(param_1,&DAT_012df90d,0);
  }
  else {
                    /* try { // try from 0098fdf0 to 00a8fe23 has its CatchHandler @ 0098fef0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:setState",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0098fe14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0098fe24 to 00a8fe37 has its CatchHandler @ 0098febc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0098fe3c to 00a8fe6f has its CatchHandler @ 0098fec0 */
  __stack_chk_fail();
}

