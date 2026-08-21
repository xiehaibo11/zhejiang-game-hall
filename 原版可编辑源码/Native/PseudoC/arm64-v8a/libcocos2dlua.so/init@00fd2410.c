
/* cocos2d::GLProgramCache::init() */

undefined8 __thiscall cocos2d::GLProgramCache::init(GLProgramCache *this)

{
  long lVar1;
  EventListener *pEVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  GLProgramCache *pGStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DataManager::onShaderLoaderBegin();
                    /* try { // try from 00fd2438 to 010d243b has its CatchHandler @ 00fd2454 */
  loadDefaultGLPrograms(this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,Configuration::CONFIG_FILE_LOADED);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2438 with catch @ 00fd2454
                        */
  local_70 = &PTR_FUN_01723e58;
  pGStack_68 = this;
  local_50 = &local_70;
  pEVar2 = (EventListener *)
           EventListenerCustom::create((basic_string *)local_88,(function *)&local_70);
  if (&local_70 == local_50) {
                    /* try { // try from 00fd2498 to 010d249b has its CatchHandler @ 00fd24b4 */
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00fd24a0;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00fd24a0:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  DataManager::onShaderLoaderEnd();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2498 with catch @ 00fd24b4
                        */
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority(*(EventDispatcher **)(lVar3 + 0xb0),pEVar2,-1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

