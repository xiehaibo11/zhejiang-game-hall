
undefined8 FUN_009631e0(long param_1)

{
  long lVar1;
  double dVar2;
  int iVar3;
  LayoutParameter *this;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 009631e0 to 00a63297 has its CatchHandler @ 009631e0
                       catch() { ... } // from try @ 009631e0 with catch @ 009631e0
                       catch() { ... } // from try @ 00963318 with catch @ 009631e0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    this = (LayoutParameter *)tolua_tousertype(param_1,1,0);
    iVar3 = lua_gettop(param_1);
    if (iVar3 + -1 == 1) {
      cocos2d::ui::Margin::Margin((Margin *)&local_48);
      lua_pushstring(param_1,"left");
      lua_gettable(param_1,2);
      iVar3 = lua_type(param_1,0xffffffff);
      fVar4 = 0.0;
      local_48 = 0.0;
      if (iVar3 != 0) {
        dVar2 = (double)lua_tonumber(param_1,0xffffffff);
        local_48 = (float)dVar2;
      }
      lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00963298 to 00a632cb has its CatchHandler @ 00963398 */
      lua_pushstring(param_1,"top");
      lua_gettable(param_1,2);
      iVar3 = lua_type(param_1,0xffffffff);
      if (iVar3 != 0) {
        dVar2 = (double)lua_tonumber(param_1,0xffffffff);
        fVar4 = (float)dVar2;
      }
      local_44 = fVar4;
                    /* try { // try from 009632cc to 00a632df has its CatchHandler @ 00963364 */
      lua_settop(param_1,0xfffffffe);
                    /* try { // try from 009632e4 to 00a63317 has its CatchHandler @ 00963368 */
      lua_pushstring(param_1,&DAT_012d6ea7);
      lua_gettable(param_1,2);
      iVar3 = lua_type(param_1,0xffffffff);
      fVar4 = 0.0;
      local_40 = 0.0;
      if (iVar3 != 0) {
        dVar2 = (double)lua_tonumber(param_1,0xffffffff);
                    /* try { // try from 00963318 to 00a633b3 has its CatchHandler @ 009631e0 */
        local_40 = (float)dVar2;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"bottom");
      lua_gettable(param_1,2);
      iVar3 = lua_type(param_1,0xffffffff);
      if (iVar3 != 0) {
        dVar2 = (double)lua_tonumber(param_1,0xffffffff);
                    /* catch() { ... } // from try @ 009632cc with catch @ 00963364 */
        fVar4 = (float)dVar2;
      }
                    /* catch() { ... } // from try @ 009632e4 with catch @ 00963368 */
      local_3c = fVar4;
      lua_settop(param_1,0xfffffffe);
      cocos2d::ui::LayoutParameter::setMargin(this,(Margin *)&local_48);
    }
    else {
                    /* catch() { ... } // from try @ 00963298 with catch @ 00963398 */
      luaL_error(param_1,&DAT_012d49e1,iVar3 + -1,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

