
/* cocostudio::ArmatureDataManager::~ArmatureDataManager() */

void __thiscall cocostudio::ArmatureDataManager::~ArmatureDataManager(ArmatureDataManager *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__ArmatureDataManager_016c9da0;
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
  ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
           *)(this + 0x50));
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
  ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
           *)(this + 0x28));
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
  ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
           *)(this + 0x78));
  if (*(long *)(this + 0xc0) != 0) {
    puVar1 = *(void **)(this + 0xb8);
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      RelativeData::~RelativeData((RelativeData *)(puVar1 + 5));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    lVar3 = *(long *)(this + 0xb0);
    *(undefined8 *)(this + 0xb8) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xa8) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0xc0) = 0;
  }
  puVar1 = *(void **)(this + 0xb8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    RelativeData::~RelativeData((RelativeData *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
  ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::TextureData*>
          *)(this + 0x78));
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
  ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::AnimationData*>
          *)(this + 0x50));
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
  ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::ArmatureData*>
          *)(this + 0x28));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

