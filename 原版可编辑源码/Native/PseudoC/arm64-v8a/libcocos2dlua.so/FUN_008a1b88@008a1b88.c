
undefined8 FUN_008a1b88(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color3B *pCVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  bool local_5c [4];
  double local_58;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color3B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_50,"cc.LabelTTF:enableStroke");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.LabelTTF:enableStroke");
    uVar6 = luaval_to_boolean(param_1,4,local_5c,"cc.LabelTTF:enableStroke");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto LAB_008a1cc8;
    uVar7 = SUB81(aCStack_50,0);
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.LabelTTF:enableStroke",iVar2 + -1,2);
      goto LAB_008a1cc8;
    }
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_50,"cc.LabelTTF:enableStroke");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.LabelTTF:enableStroke");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_008a1cc8;
    uVar7 = SUB81(aCStack_50,0);
  }
  cocos2d::LabelTTF::enableStroke(pCVar3,(float)local_58,(bool)uVar7);
LAB_008a1cc8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

