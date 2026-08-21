
/* lua_cocos2dx_Label_enableShadow(lua_State*) */

undefined4 lua_cocos2dx_Label_enableShadow(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  Color4B *pCVar7;
  code *pcVar8;
  undefined4 uVar9;
  int local_5c;
  Color4B aCStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2 + -1) {
  case 0:
    cocos2d::Size::Size(aSStack_50,2.0,-2.0);
    pcVar8 = *(code **)(*plVar3 + 0x5a0);
    pCVar7 = (Color4B *)&cocos2d::Color4B::BLACK;
    goto LAB_00837f44;
  case 1:
    cocos2d::Color4B::Color4B(aCStack_58);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"cc.Label:enableShadow");
    if ((uVar4 & 1) == 0) {
LAB_00837f68:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_enableShadow\'",0);
      goto LAB_00837f9c;
    }
    cocos2d::Size::Size(aSStack_50,2.0,-2.0);
    break;
  case 2:
    cocos2d::Color4B::Color4B(aCStack_58);
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"cc.Label:enableShadow");
    uVar5 = luaval_to_size(param_1,3,aSStack_50,"cc.Label:enableShadow");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) goto LAB_00837f68;
    break;
  case 3:
    cocos2d::Color4B::Color4B(aCStack_58);
    cocos2d::Size::Size(aSStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_58,"cc.Label:enableShadow");
    uVar5 = luaval_to_size(param_1,3,aSStack_50,"cc.Label:enableShadow");
    uVar6 = luaval_to_int32(param_1,4,&local_5c,"cc.Label:enableShadow");
    if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0)) goto LAB_00837f68;
    pCVar7 = aCStack_58;
    pcVar8 = *(code **)(*plVar3 + 0x5a0);
    goto LAB_00837f50;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:enableShadow",iVar2 + -1,0);
LAB_00837f9c:
    uVar9 = 0;
    goto LAB_00837fa0;
  }
  pCVar7 = aCStack_58;
  pcVar8 = *(code **)(*plVar3 + 0x5a0);
LAB_00837f44:
  local_5c = 0;
LAB_00837f50:
  (*pcVar8)(plVar3,pCVar7,aSStack_50,local_5c);
  uVar9 = 1;
  lua_settop(param_1,1);
LAB_00837fa0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

