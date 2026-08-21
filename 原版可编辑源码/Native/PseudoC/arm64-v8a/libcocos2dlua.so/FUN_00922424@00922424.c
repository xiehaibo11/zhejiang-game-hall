
undefined8 FUN_00922424(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  basic_string *pbVar4;
  char *pcVar5;
  Ref *pRVar6;
  char *pcVar7;
  char *pcVar8;
  ScriptHandlerMgr *pSVar9;
  Ref *pRVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00922334 with catch @ 00922434 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    pbVar4 = (basic_string *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 5) {
      pcVar5 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
      pcVar7 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
      pcVar8 = (char *)tolua_tostring(param_1,4,&DAT_013c996e);
                    /* try { // try from 00922530 to 00a2257b has its CatchHandler @ 00922530
                       catch() { ... } // from try @ 00922530 with catch @ 00922530
                       catch() { ... } // from try @ 00922580 with catch @ 00922530 */
      uVar3 = toluafix_ref_function(param_1,5,0);
      pRVar6 = operator_new(0x28,(nothrow_t *)&std::nothrow);
      if (pRVar6 == (Ref *)0x0) {
                    /* catch() { ... } // from try @ 0092257c with catch @ 009225d4 */
        pRVar10 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::Ref(pRVar6);
        *(undefined ***)pRVar6 = &PTR__LuaArmatureWrapper_0169cb68;
        pRVar10 = pRVar6;
      }
      cocos2d::Ref::autorelease(pRVar10);
      pSVar9 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* try { // try from 009225e8 to 00a2269f has its CatchHandler @ 009225e8
                       catch() { ... } // from try @ 009225e8 with catch @ 009225e8
                       catch() { ... } // from try @ 00922720 with catch @ 009225e8 */
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar9,pRVar6,uVar3,0x23);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,pcVar5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a0,pcVar8);
      cocostudio::ArmatureDataManager::addArmatureFileInfoAsync
                (pbVar4,(basic_string *)local_70,(basic_string *)local_88,(Ref *)local_a0,
                 (_func_void_float *)pRVar10);
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
    }
    else {
      if (iVar2 != 3) {
                    /* try { // try from 0092257c to 00a2257f has its CatchHandler @ 009225d4 */
                    /* try { // try from 00922580 to 00a225e7 has its CatchHandler @ 00922530 */
        luaL_error(param_1,
                   "\'addArmatureFileInfoAsync\' function of ArmatureDataManager has wrong number of arguments: %d, was expecting %d\n"
                   ,iVar2 + -1,1);
        goto LAB_00922668;
      }
      pcVar5 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
      uVar3 = toluafix_ref_function(param_1,3,0);
      pRVar6 = operator_new(0x28,(nothrow_t *)&std::nothrow);
      if (pRVar6 == (Ref *)0x0) {
        pRVar10 = (Ref *)0x0;
      }
      else {
        cocos2d::Ref::Ref(pRVar6);
        *(undefined ***)pRVar6 = &PTR__LuaArmatureWrapper_0169cb68;
        pRVar10 = pRVar6;
      }
      cocos2d::Ref::autorelease(pRVar10);
      pSVar9 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar9,pRVar6,uVar3,0x23);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,pcVar5);
      cocostudio::ArmatureDataManager::addArmatureFileInfoAsync
                (pbVar4,(Ref *)local_70,(_func_void_float *)pRVar10);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
LAB_00922668:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

