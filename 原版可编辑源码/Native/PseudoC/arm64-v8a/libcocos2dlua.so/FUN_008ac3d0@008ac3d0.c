
undefined8 FUN_008ac3d0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  __Dictionary *this;
  long lVar6;
  long lVar7;
  long lVar8;
  Ref *pRVar9;
  ScriptHandlerMgr *pSVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto LAB_008ac820;
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar4 = iVar2 + -1;
  if ((5 < iVar2) || (iVar4 < 1)) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.Layer:registerScriptTouchHandler",iVar4,1);
    goto LAB_008ac820;
  }
  uVar3 = toluafix_ref_function(param_1,2,0);
  if (iVar4 < 2) {
    iVar2 = 0;
    uVar13 = 0;
LAB_008ac4a0:
    uVar12 = 1;
  }
  else {
    iVar2 = tolua_toboolean(param_1,3,0);
    uVar13 = (uint)(iVar2 != 0);
    if (iVar4 == 2) {
      iVar2 = 0;
      goto LAB_008ac4a0;
    }
    dVar14 = (double)tolua_tonumber(0,param_1,4);
    iVar2 = (int)dVar14;
    if (iVar4 != 4) goto LAB_008ac4a0;
    iVar4 = tolua_toboolean(param_1,5,1);
    uVar12 = (uint)(iVar4 != 0);
  }
  this = (__Dictionary *)(**(code **)(*plVar5 + 0x2f0))(plVar5);
  if (this == (__Dictionary *)0x0) {
    this = (__Dictionary *)cocos2d::__Dictionary::create();
    (**(code **)(*plVar5 + 0x300))(plVar5,this);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"touchMode");
  lVar6 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"swallowTouches");
  lVar7 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"priority");
  lVar8 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(lVar6 + 0x30);
  }
  if (uVar11 != (uVar13 ^ 1)) {
    pRVar9 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (pRVar9 != (Ref *)0x0) {
      cocos2d::Ref::Ref(pRVar9);
      *(undefined ***)pRVar9 = &PTR____Integer_01698788;
      *(undefined ***)(pRVar9 + 0x28) = &PTR_clone_016987b8;
      *(uint *)(pRVar9 + 0x30) = uVar13 ^ 1;
    }
    cocos2d::Ref::autorelease(pRVar9);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"touchMode");
    cocos2d::__Dictionary::setObject(this,pRVar9,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"touchEnabled");
    lVar6 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x30) != '\0')) {
      FUN_008adea4(plVar5,0);
      FUN_008adea4(plVar5,1);
    }
  }
  if (lVar8 == 0) {
    if (iVar2 != 0) goto LAB_008ac670;
  }
  else if (iVar2 != *(int *)(lVar8 + 0x30)) {
LAB_008ac670:
    pRVar9 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (pRVar9 != (Ref *)0x0) {
      cocos2d::Ref::Ref(pRVar9);
      *(undefined ***)pRVar9 = &PTR____Integer_01698788;
      *(undefined ***)(pRVar9 + 0x28) = &PTR_clone_016987b8;
      *(int *)(pRVar9 + 0x30) = iVar2;
    }
    cocos2d::Ref::autorelease(pRVar9);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"priority");
    cocos2d::__Dictionary::setObject(this,pRVar9,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"touchEnabled");
    lVar6 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x30) != '\0')) {
      FUN_008adea4(plVar5,0);
      FUN_008adea4(plVar5,1);
    }
  }
  if (lVar7 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(byte *)(lVar7 + 0x30);
  }
  if (uVar13 != uVar12) {
    pRVar9 = operator_new(0x38,(nothrow_t *)&std::nothrow);
    if (pRVar9 != (Ref *)0x0) {
      cocos2d::Ref::Ref(pRVar9);
      *(undefined ***)pRVar9 = &PTR____Integer_01698788;
      *(undefined ***)(pRVar9 + 0x28) = &PTR_clone_016987b8;
      *(uint *)(pRVar9 + 0x30) = uVar12;
    }
    cocos2d::Ref::autorelease(pRVar9);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"swallowTouches");
    cocos2d::__Dictionary::setObject(this,pRVar9,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"touchEnabled");
    lVar6 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x30) != '\0')) {
      FUN_008adea4(plVar5,0);
      FUN_008adea4(plVar5,1);
    }
  }
  pSVar10 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar10,plVar5,uVar3,4);
LAB_008ac820:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

