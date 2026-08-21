
undefined8 FUN_008a0c14(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LabelTTF *this;
  ulong uVar3;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LabelTTF *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"cc.LabelTTF:setDimensions");
    if ((uVar3 & 1) != 0) {
      cocos2d::LabelTTF::setDimensions(this,aSStack_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:setDimensions",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

