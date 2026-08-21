
undefined8 FUN_008a19e0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color3B *pCVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  bool local_5c [4];
  Color3B aCStack_58 [8];
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color3B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Color3B::Color3B(aCStack_58);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_58,"cc.LabelTTF:setFontFillColor");
    uVar5 = luaval_to_boolean(param_1,3,local_5c,"cc.LabelTTF:setFontFillColor");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_008a1ad8;
    uVar6 = SUB81(aCStack_58,0);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.LabelTTF:setFontFillColor",iVar2 + -1,1);
      goto LAB_008a1ad8;
    }
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_50,"cc.LabelTTF:setFontFillColor");
    if ((uVar4 & 1) == 0) goto LAB_008a1ad8;
    uVar6 = SUB81(aCStack_50,0);
  }
  cocos2d::LabelTTF::setFontFillColor(pCVar3,(bool)uVar6);
LAB_008a1ad8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

