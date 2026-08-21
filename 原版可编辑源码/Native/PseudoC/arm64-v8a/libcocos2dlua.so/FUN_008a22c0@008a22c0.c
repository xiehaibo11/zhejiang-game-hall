
undefined8 FUN_008a22c0(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.LabelTTF:disableStroke");
    if ((uVar4 & 1) == 0) goto LAB_008a235c;
  }
  else if (iVar3 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:disableStroke",iVar3 + -1,0);
    goto LAB_008a235c;
  }
  cocos2d::LabelTTF::disableStroke(bVar2);
LAB_008a235c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

