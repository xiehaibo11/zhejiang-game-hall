
undefined8 FUN_008a0f64(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  FontDefinition *pFVar3;
  ulong uVar4;
  ulong local_a8 [2];
  void *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  Size aSStack_80 [8];
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_75;
  Size aSStack_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pFVar3 = (FontDefinition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_a8[1] = 0;
    local_98 = (void *)0x0;
    local_a8[0] = 0;
    local_90 = 0;
    local_84 = 0;
    local_8c = 1;
    cocos2d::Size::Size(aSStack_80,(Size *)&cocos2d::Size::ZERO);
    local_75 = 0xff;
    local_78 = cocos2d::Color3B::WHITE;
    local_76 = DAT_01792432;
    cocos2d::Size::Size(aSStack_70);
    local_60 = 0;
    local_68 = 0;
    local_5c = 0xff;
    local_58 = 0;
    local_5f = cocos2d::Color3B::BLACK;
    local_5d = DAT_01792444;
    local_54 = 1;
    local_50 = 0;
    uVar4 = luaval_to_fontdefinition
                      (param_1,2,(FontDefinition *)local_a8,"cc.LabelTTF:setTextDefinition");
    if ((uVar4 & 1) != 0) {
      cocos2d::LabelTTF::setTextDefinition(pFVar3);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:setTextDefinition",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

