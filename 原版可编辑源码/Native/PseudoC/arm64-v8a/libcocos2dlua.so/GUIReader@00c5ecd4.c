
/* cocostudio::GUIReader::GUIReader() */

void __thiscall cocostudio::GUIReader::GUIReader(GUIReader *this)

{
  long lVar1;
  ObjectFactory *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  TInfo aTStack_b0 [88];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__GUIReader_016ca668;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x28),"");
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(GUIReader **)(this + 0x68) = this + 0x70;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(GUIReader **)(this + 0x80) = this + 0x88;
  *(undefined8 *)(this + 0x90) = 0;
  this_00 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ButtonReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,ButtonReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"CheckBoxReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,CheckBoxReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"SliderReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,SliderReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ImageViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,ImageViewReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"LoadingBarReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,LoadingBarReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextAtlasReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,TextAtlasReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,TextReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextBMFontReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,TextBMFontReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextFieldReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,TextFieldReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"LayoutReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,LayoutReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"PageViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,PageViewReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ScrollViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,ScrollViewReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ListViewReader");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,ListViewReader::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"Button");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::Button::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"CheckBox");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::CheckBox::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ImageView");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::ImageView::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"Text");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::Text::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextAtlas");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::TextAtlas::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextBMFont");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::TextBMFont::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"LoadingBar");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::LoadingBar::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"Slider");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::Slider::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"TextField");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::TextField::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"Layout");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::Layout::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ListView");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::ListView::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"PageView");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::PageView::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"ScrollView");
  cocos2d::ObjectFactory::TInfo::TInfo
            (aTStack_b0,(basic_string *)local_c8,cocos2d::ui::ScrollView::createInstance);
  cocos2d::ObjectFactory::registerType(this_00,aTStack_b0);
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_b0);
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

