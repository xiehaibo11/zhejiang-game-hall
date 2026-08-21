
undefined8 FUN_008a0a60(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Size *pSVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  bool local_74 [4];
  double local_70;
  double dStack_68;
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar3 = (Size *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    cocos2d::Size::Size(aSStack_60);
    uVar4 = luaval_to_size(param_1,2,aSStack_60,"cc.LabelTTF:enableShadow");
    uVar5 = luaval_to_number(param_1,3,&dStack_68,"cc.LabelTTF:enableShadow");
    uVar6 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:enableShadow");
    uVar7 = luaval_to_boolean(param_1,5,local_74,"cc.LabelTTF:enableShadow");
    if (((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0))
    goto LAB_008a0be0;
    uVar8 = SUB81(aSStack_60,0);
  }
  else {
    if (iVar2 != 4) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.LabelTTF:enableShadow",iVar2 + -1,3);
      goto LAB_008a0be0;
    }
    cocos2d::Size::Size(aSStack_60);
    uVar4 = luaval_to_size(param_1,2,aSStack_60,"cc.LabelTTF:enableShadow");
    uVar5 = luaval_to_number(param_1,3,&dStack_68,"cc.LabelTTF:enableShadow");
    uVar6 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:enableShadow");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto LAB_008a0be0;
    uVar8 = SUB81(aSStack_60,0);
  }
  cocos2d::LabelTTF::enableShadow(pSVar3,(float)dStack_68,(float)local_70,(bool)uVar8);
LAB_008a0be0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

