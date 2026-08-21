
/* cocos2d::CSLoader::CSLoader() */

void __thiscall cocos2d::CSLoader::CSLoader(CSLoader *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_938 [16];
  void *local_928;
  TInfo aTStack_920 [80];
  TInfo aTStack_8d0 [80];
  TInfo aTStack_880 [80];
  TInfo aTStack_830 [80];
  TInfo aTStack_7e0 [80];
  TInfo aTStack_790 [80];
  TInfo aTStack_740 [80];
  TInfo aTStack_6f0 [80];
  TInfo aTStack_6a0 [80];
  TInfo aTStack_650 [80];
  TInfo aTStack_600 [80];
  TInfo aTStack_5b0 [80];
  TInfo aTStack_560 [80];
  TInfo aTStack_510 [80];
  TInfo aTStack_4c0 [80];
  TInfo aTStack_470 [80];
  TInfo aTStack_420 [80];
  TInfo aTStack_3d0 [80];
  TInfo aTStack_380 [80];
  TInfo aTStack_330 [80];
  TInfo aTStack_2e0 [80];
  TInfo aTStack_290 [80];
  TInfo aTStack_240 [80];
  TInfo aTStack_1f0 [80];
  TInfo aTStack_1a0 [80];
  TInfo aTStack_150 [80];
  TInfo aTStack_100 [80];
  TInfo aTStack_b0 [88];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x50] = (CSLoader)0x1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x70),"");
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0xa8),"2.1.0.0");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"NodeReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_938,cocostudio::NodeReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"SingleNodeReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_100,(basic_string *)local_938,cocostudio::SingleNodeReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_100);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"SpriteReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_150,(basic_string *)local_938,cocostudio::SpriteReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_150);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ParticleReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_1a0,(basic_string *)local_938,cocostudio::ParticleReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_1a0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"GameMapReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_1f0,(basic_string *)local_938,cocostudio::GameMapReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_1f0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ButtonReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_240,(basic_string *)local_938,cocostudio::ButtonReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_240);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"CheckBoxReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_290,(basic_string *)local_938,cocostudio::CheckBoxReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_290);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ImageViewReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_2e0,(basic_string *)local_938,cocostudio::ImageViewReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_2e0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"TextBMFontReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_330,(basic_string *)local_938,cocostudio::TextBMFontReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_330);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"TextReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_380,(basic_string *)local_938,cocostudio::TextReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_380);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"TextFieldReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_3d0,(basic_string *)local_938,cocostudio::TextFieldReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_3d0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"TextAtlasReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_420,(basic_string *)local_938,cocostudio::TextAtlasReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_420);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"LoadingBarReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_470,(basic_string *)local_938,cocostudio::LoadingBarReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_470);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"SliderReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_4c0,(basic_string *)local_938,cocostudio::SliderReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_4c0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"LayoutReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_510,(basic_string *)local_938,cocostudio::LayoutReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_510);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ScrollViewReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_560,(basic_string *)local_938,cocostudio::ScrollViewReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_560);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"PageViewReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_5b0,(basic_string *)local_938,cocostudio::PageViewReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_5b0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ListViewReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_600,(basic_string *)local_938,cocostudio::ListViewReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_600);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"ArmatureNodeReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_650,(basic_string *)local_938,ArmatureNodeReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_650);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"Node3DReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_6a0,(basic_string *)local_938,cocostudio::Node3DReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_6a0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"Sprite3DReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_6f0,(basic_string *)local_938,cocostudio::Sprite3DReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_6f0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"UserCameraReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_740,(basic_string *)local_938,cocostudio::UserCameraReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_740);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"Particle3DReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_790,(basic_string *)local_938,cocostudio::Particle3DReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_790);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"GameNode3DReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_7e0,(basic_string *)local_938,cocostudio::GameNode3DReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_7e0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"Light3DReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_830,(basic_string *)local_938,cocostudio::Light3DReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_830);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"TabControlReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_880,(basic_string *)local_938,TabControlReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_880);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"BoneNodeReader");
  ObjectFactory::TInfo::TInfo(aTStack_8d0,(basic_string *)local_938,BoneNodeReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_8d0);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_938,"SkeletonNodeReader");
  ObjectFactory::TInfo::TInfo
            (aTStack_920,(basic_string *)local_938,SkeletonNodeReader::createInstance);
  ObjectFactory::TInfo::~TInfo(aTStack_920);
  if (((byte)local_938[0] & 1) != 0) {
    operator_delete(local_928);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

