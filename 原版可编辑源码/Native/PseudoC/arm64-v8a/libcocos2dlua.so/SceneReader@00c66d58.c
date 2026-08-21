
/* cocostudio::SceneReader::SceneReader() */

void __thiscall cocostudio::SceneReader::SceneReader(SceneReader *this)

{
  long lVar1;
  ObjectFactory *pOVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  TInfo aTStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__SceneReader_016ca870;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  pOVar2 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"ComAttribute");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_90,(basic_string *)local_a8,ComAttribute::createInstance);
  cocos2d::ObjectFactory::registerType(pOVar2,aTStack_90);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pOVar2 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"ComRender");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_90,(basic_string *)local_a8,ComRender::createInstance);
  cocos2d::ObjectFactory::registerType(pOVar2,aTStack_90);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pOVar2 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"ComAudio");
  cocos2d::ObjectFactory::TInfo::TInfo(aTStack_90,(basic_string *)local_a8,ComAudio::createInstance)
  ;
  cocos2d::ObjectFactory::registerType(pOVar2,aTStack_90);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pOVar2 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"ComController");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_90,(basic_string *)local_a8,ComController::createInstance);
  cocos2d::ObjectFactory::registerType(pOVar2,aTStack_90);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

