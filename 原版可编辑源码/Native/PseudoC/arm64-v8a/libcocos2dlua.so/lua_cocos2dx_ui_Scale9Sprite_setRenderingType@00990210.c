
/* lua_cocos2dx_ui_Scale9Sprite_setRenderingType(lua_State*) */

undefined4 lua_cocos2dx_ui_Scale9Sprite_setRenderingType(lua_State *param_1)

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
                    /* try { // try from 0099022c to 00a9023f has its CatchHandler @ 009902c4 */
  pSVar3 = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00990244 to 00a90277 has its CatchHandler @ 009902c8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Scale9Sprite:setRenderingType");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00990278 to 00a90313 has its CatchHandler @ 00990140 */
      cocos2d::ui::Scale9Sprite::setRenderingType(pSVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009902cc;
    }
                    /* catch() { ... } // from try @ 0099022c with catch @ 009902c4 */
    tolua_error(param_1,&DAT_012dfae5,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dfac2,
               iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 00990244 with catch @ 009902c8 */
  uVar5 = 0;
LAB_009902cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

