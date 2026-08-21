
/* AppDelegate::applicationDidFinishLaunching() */

void AppDelegate::applicationDidFinishLaunching(void)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  Director *this;
  ScriptEngineProtocol *pSVar7;
  ScriptEngineManager *this_00;
  FileUtils *pFVar8;
  TanGaoXiong *pTVar9;
  long lVar10;
  void *pvVar11;
  code *pcVar12;
  lua_State *plVar13;
  Scheduler *this_01;
  long *plVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  uint local_a8;
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  uint local_90;
  void *local_88;
  undefined **local_80;
  code *pcStack_78;
  void *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::setAnimationInterval(this,0.016666668);
  pSVar7 = (ScriptEngineProtocol *)cocos2d::LuaEngine::getInstance();
  this_00 = (ScriptEngineManager *)cocos2d::ScriptEngineManager::getInstance();
  cocos2d::ScriptEngineManager::setScriptEngine(this_00,pSVar7);
  plVar13 = *(lua_State **)(*(long *)(pSVar7 + 8) + 0x28);
  lua_module_register(plVar13);
  register_all_cocos2dx_native(plVar13);
  register_all_XHBridge(plVar13);
  plVar14 = *(long **)(pSVar7 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"03f1fdcbf5215b45fc790aaf3b965837");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"devaguopeifei");
  bVar5 = ((byte)local_98[0] & 1) != 0;
  pvVar11 = (void *)((ulong)local_98 | 1);
  if (bVar5) {
    pvVar11 = local_88;
  }
  uVar1 = (uint)((byte)local_98[0] >> 1);
  if (bVar5) {
    uVar1 = local_90;
  }
  bVar5 = ((byte)local_b0[0] & 1) != 0;
  pvVar3 = (void *)((ulong)local_b0 | 1);
  if (bVar5) {
    pvVar3 = local_a0;
  }
  uVar2 = (uint)((byte)local_b0[0] >> 1);
  if (bVar5) {
    uVar2 = local_a8;
  }
  (**(code **)(*plVar14 + 0xe8))(plVar14,pvVar11,uVar1,pvVar3,uVar2);
  (**(code **)(*plVar14 + 0x10))(plVar14,"src/");
  pFVar8 = (FileUtils *)cocos2d::FileUtils::getInstance();
  cocos2d::FileUtils::loadResKey(pFVar8,"local/res.rpk");
  pTVar9 = (TanGaoXiong *)universe::TanGaoXiong::getInstance();
  plVar14 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar14 + 0xa0))(&local_80);
  universe::TanGaoXiong::setWritablePath(pTVar9,(basic_string *)&local_80);
  if (((byte)local_80._0_1_ & 1) != 0) {
    operator_delete(local_70);
  }
  pTVar9 = (TanGaoXiong *)universe::TanGaoXiong::getInstance();
  local_80 = &PTR_FUN_01697a78;
  pcStack_78 = cocos2d::FileUtils::hdq_decrypt;
  local_60 = &local_80;
  universe::TanGaoXiong::setHookFunc(pTVar9,(function *)&local_80);
  if (&local_80 == local_60) {
    pcVar12 = (code *)(*local_60)[4];
LAB_007c19e8:
    (*pcVar12)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar12 = (code *)(*local_60)[5];
    goto LAB_007c19e8;
  }
  FileImplement::init();
  universe_core_init();
  universe_hotfix_init();
  universe_network_init();
  lua_universe_core_register(plVar13);
  lua_universe_hotfix_register(plVar13);
  lua_universe_network_register(plVar13);
  register_all_universe_core(plVar13);
  lVar10 = cocos2d::Director::getInstance();
  this_01 = *(Scheduler **)(lVar10 + 0xa0);
  local_60 = &local_80;
  local_80 = &PTR_FUN_01697b28;
  pvVar11 = (void *)cocos2d::Director::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"universe");
  cocos2d::Scheduler::schedule
            (this_01,(function *)&local_80,pvVar11,0.0,false,(basic_string *)local_c8);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (&local_80 == local_60) {
    pcVar12 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_007c1aa8;
    pcVar12 = (code *)(*local_60)[5];
  }
  (*pcVar12)();
LAB_007c1aa8:
  pFVar8 = (FileUtils *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,"src/64bit");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)&local_80,false);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pFVar8 = (FileUtils *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,"src");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)&local_80,false);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pFVar8 = (FileUtils *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,"res");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)&local_80,false);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pFVar8 = (FileUtils *)cocos2d::FileUtils::getInstance();
  (**(code **)(*(long *)pFVar8 + 0xa0))(&local_80);
  FUN_007c1fb0(local_c8,&local_80,"hotfix/");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)local_c8,true);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  FUN_007c1fb0(local_c8,&local_80,"hotfix/res/");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)local_c8,true);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  FUN_007c1fb0(local_c8,&local_80,"hotfix/src/");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)local_c8,true);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  FUN_007c1fb0(local_c8,&local_80,"hotfix/local/");
  cocos2d::FileUtils::addSearchPath(pFVar8,(basic_string *)local_c8,true);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  FUN_007c1fb0(local_c8,&local_80,"hotfix/");
  pvVar11 = (void *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    pvVar11 = local_b8;
  }
  (**(code **)(*(long *)pSVar7 + 0xc0))(pSVar7,pvVar11);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  FUN_007c1fb0(local_c8,&local_80,"hotfix/src/");
  pvVar11 = (void *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    pvVar11 = local_b8;
  }
  (**(code **)(*(long *)pSVar7 + 0xc0))(pSVar7,pvVar11);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  pvVar11 = (void *)((ulong)&local_80 | 1);
  if (((ulong)local_80 & 1) != 0) {
    pvVar11 = local_70;
  }
  (**(code **)(*(long *)pSVar7 + 0xc0))(pSVar7,pvVar11);
  iVar6 = (**(code **)(*(long *)pSVar7 + 0x68))(pSVar7,"src/main.lua");
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6 == 0);
}

