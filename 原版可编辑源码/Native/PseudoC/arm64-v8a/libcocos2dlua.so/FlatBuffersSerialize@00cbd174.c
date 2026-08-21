
/* cocostudio::FlatBuffersSerialize::FlatBuffersSerialize() */

void __thiscall cocostudio::FlatBuffersSerialize::FlatBuffersSerialize(FlatBuffersSerialize *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_5f8 [16];
  void *local_5e8;
  TInfo aTStack_5e0 [80];
  TInfo aTStack_590 [80];
  TInfo aTStack_540 [80];
  TInfo aTStack_4f0 [80];
  TInfo aTStack_4a0 [80];
  TInfo aTStack_450 [80];
  TInfo aTStack_400 [80];
  TInfo aTStack_3b0 [80];
  TInfo aTStack_360 [80];
  TInfo aTStack_310 [80];
  TInfo aTStack_2c0 [80];
  TInfo aTStack_270 [80];
  TInfo aTStack_220 [80];
  TInfo aTStack_1d0 [80];
  TInfo aTStack_180 [80];
  TInfo aTStack_130 [80];
  TInfo aTStack_e0 [80];
  TInfo aTStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x30] = (FlatBuffersSerialize)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"NodeReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_90,(basic_string *)local_5f8,NodeReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_90);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"SingleNodeReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_e0,(basic_string *)local_5f8,SingleNodeReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_e0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"SpriteReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_130,(basic_string *)local_5f8,SpriteReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_130);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"ParticleReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_180,(basic_string *)local_5f8,ParticleReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_180);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"GameMapReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_1d0,(basic_string *)local_5f8,GameMapReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_1d0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"ButtonReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_220,(basic_string *)local_5f8,ButtonReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_220);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"CheckBoxReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_270,(basic_string *)local_5f8,CheckBoxReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_270);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"ImageViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_2c0,(basic_string *)local_5f8,ImageViewReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_2c0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"TextBMFontReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_310,(basic_string *)local_5f8,TextBMFontReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_310);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"TextReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_360,(basic_string *)local_5f8,TextReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_360);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"TextFieldReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_3b0,(basic_string *)local_5f8,TextFieldReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_3b0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"TextAtlasReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_400,(basic_string *)local_5f8,TextAtlasReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_400);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"LoadingBarReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_450,(basic_string *)local_5f8,LoadingBarReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_450);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"SliderReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_4a0,(basic_string *)local_5f8,SliderReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_4a0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"LayoutReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_4f0,(basic_string *)local_5f8,LayoutReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_4f0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"ScrollViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_540,(basic_string *)local_5f8,ScrollViewReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_540);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"PageViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_590,(basic_string *)local_5f8,PageViewReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_590);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_5f8,"ListViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_5e0,(basic_string *)local_5f8,ListViewReader::createInstance);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_5e0);
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

