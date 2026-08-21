
/* lua_cocos2dx_studio_ActionRotationFrame_setRotation(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionRotationFrame_setRotation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionRotationFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionRotationFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009290b4 to 00a290b7 has its CatchHandler @ 00929138 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ActionRotationFrame:setRotation");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 009290d8 to 00a290db has its CatchHandler @ 00929128 */
                    /* try { // try from 009290dc to 00a2914b has its CatchHandler @ 00929068 */
      cocostudio::ActionRotationFrame::setRotation(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0092912c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionRotationFrame_setRotation\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionRotationFrame:setRotation",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009290d8 with catch @ 00929128 */
  uVar4 = 0;
LAB_0092912c:
                    /* catch() { ... } // from try @ 009290b4 with catch @ 00929138 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0092914c to 00a29233 has its CatchHandler @ 0092914c
                       catch() { ... } // from try @ 0092914c with catch @ 0092914c
                       catch() { ... } // from try @ 009292b4 with catch @ 0092914c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

