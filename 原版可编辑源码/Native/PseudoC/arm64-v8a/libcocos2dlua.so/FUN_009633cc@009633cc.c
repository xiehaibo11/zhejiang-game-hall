
void FUN_009633cc(long param_1)

{
  long lVar1;
  int iVar2;
  LayoutParameter *this;
  undefined8 uVar3;
  Margin *pMVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (param_1 != 0) {
    this = (LayoutParameter *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      pMVar4 = (Margin *)cocos2d::ui::LayoutParameter::getMargin(this);
      cocos2d::ui::Margin::Margin((Margin *)&local_48,pMVar4);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,"left");
      lua_pushnumber((double)local_48,param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"top");
      lua_pushnumber((double)local_44,param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,&DAT_012d6ea7);
      lua_pushnumber((double)local_40,param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"bottom");
                    /* try { // try from 009634ec to 00a63537 has its CatchHandler @ 009634ec
                       catch() { ... } // from try @ 009634ec with catch @ 009634ec
                       catch() { ... } // from try @ 0096353c with catch @ 009634ec */
      lua_pushnumber((double)local_3c,param_1);
      lua_rawset(param_1,0xfffffffd);
      uVar3 = 1;
    }
    else {
      luaL_error(param_1,&DAT_012d4a3e,iVar2 + -1,0);
      uVar3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

