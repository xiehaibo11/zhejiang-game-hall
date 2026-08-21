
/* luaval_to_fontdefinition(lua_State*, int, cocos2d::FontDefinition*, char const*) */

void luaval_to_fontdefinition(lua_State *param_1,int param_2,FontDefinition *param_3,char *param_4)

{
  char *__s;
  long lVar1;
  FontDefinition FVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  Size *pSVar9;
  double dVar10;
  char acStack_68 [16];
  Size aSStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if ((param_1 == (lua_State *)0x0) || (param_3 == (FontDefinition *)0x0)) goto LAB_007d7550;
  pcVar8 = acStack_68;
  tolua_istable(param_1,param_2,0);
  param_3[0x34] = (FontDefinition)0x0;
  param_3[0x48] = (FontDefinition)0x0;
  FVar2 = DAT_01792432;
  *(undefined2 *)(param_3 + 0x30) = cocos2d::Color3B::WHITE;
  param_3[0x32] = FVar2;
  lua_pushstring(param_1,"fontName");
  lua_gettable(param_1,param_2);
  uVar3 = lua_gettop(param_1);
  pcVar6 = (char *)tolua_tostring(param_1,uVar3,"Arial");
  __s = "";
  if (pcVar6 != (char *)0x0) {
    __s = pcVar6;
  }
  sVar7 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3,
         __s,sVar7);
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"fontSize");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 == 0) {
    iVar4 = 0x20;
  }
  else {
    dVar10 = (double)lua_tonumber(param_1,0xffffffff);
    iVar4 = (int)dVar10;
  }
  *(int *)(param_3 + 0x18) = iVar4;
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"fontAlignmentH");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    dVar10 = (double)lua_tonumber(param_1,0xffffffff);
    iVar4 = (int)dVar10;
  }
  *(int *)(param_3 + 0x1c) = iVar4;
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"fontAlignmentV");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    dVar10 = (double)lua_tonumber(param_1,0xffffffff);
    iVar4 = (int)dVar10;
  }
  *(int *)(param_3 + 0x20) = iVar4;
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"fontFillColor");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 != 0) {
    iVar4 = lua_gettop(param_1);
    luaval_to_color3b(param_1,iVar4,(Color3B *)(param_3 + 0x30),pcVar8);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"fontDimensions");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 != 0) {
    iVar4 = lua_gettop(param_1);
    luaval_to_size(param_1,iVar4,(Size *)(param_3 + 0x28),pcVar8);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"shadowEnabled");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 != 0) {
    pSVar9 = aSStack_58;
    iVar4 = tolua_isboolean(param_1,0xffffffff,0);
    if (iVar4 == 0) {
      if (param_3[0x34] != (FontDefinition)0x0) goto LAB_007d72ec;
    }
    else {
      iVar4 = tolua_toboolean(param_1,0xffffffff,0);
      param_3[0x34] = (FontDefinition)(iVar4 != 0);
      if (iVar4 != 0) {
LAB_007d72ec:
        cocos2d::Size::Size(aSStack_58,5.0,5.0);
        cocos2d::Size::operator=((Size *)(param_3 + 0x38),aSStack_58);
        uVar5 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_3 + 0x40) = uVar5;
      }
    }
    lua_pushstring(param_1,"shadowOffset");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    if (iVar4 != 0) {
      iVar4 = lua_gettop(param_1);
      luaval_to_size(param_1,iVar4,(Size *)(param_3 + 0x38),(char *)pSVar9);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"shadowBlur");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar10 = (double)lua_tonumber(param_1,0xffffffff);
      *(float *)(param_3 + 0x40) = (float)dVar10;
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"shadowOpacity");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar10 = (double)lua_tonumber(param_1,0xffffffff);
      *(float *)(param_3 + 0x44) = (float)dVar10;
    }
    lua_settop(param_1,0xfffffffe);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"strokeEnabled");
  lua_gettable(param_1,param_2);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 != 0) {
    pSVar9 = aSStack_58;
    iVar4 = tolua_isboolean(param_1,0xffffffff,0);
    if (iVar4 == 0) {
      if (param_3[0x48] != (FontDefinition)0x0) goto LAB_007d7480;
    }
    else {
      iVar4 = tolua_toboolean(param_1,0xffffffff,0);
      param_3[0x48] = (FontDefinition)(iVar4 != 0);
      if (iVar4 != 0) {
LAB_007d7480:
        *(undefined4 *)(param_3 + 0x50) = 0x3f800000;
        FVar2 = DAT_0179243b;
        *(undefined2 *)(param_3 + 0x49) = cocos2d::Color3B::BLUE;
        param_3[0x4b] = FVar2;
        lua_pushstring(param_1,"strokeColor");
        lua_gettable(param_1,param_2);
        iVar4 = lua_type(param_1,0xffffffff);
        if (iVar4 != 0) {
          iVar4 = lua_gettop(param_1);
          luaval_to_color3b(param_1,iVar4,(Color3B *)(param_3 + 0x49),(char *)pSVar9);
        }
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,"strokeSize");
        lua_gettable(param_1,param_2);
        iVar4 = lua_type(param_1,0xffffffff);
        if (iVar4 != 0) {
          dVar10 = (double)lua_tonumber(param_1,0xffffffff);
          *(float *)(param_3 + 0x50) = (float)dVar10;
        }
        lua_settop(param_1,0xfffffffe);
      }
    }
  }
  lua_settop(param_1,0xfffffffe);
  uVar5 = 1;
LAB_007d7550:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

