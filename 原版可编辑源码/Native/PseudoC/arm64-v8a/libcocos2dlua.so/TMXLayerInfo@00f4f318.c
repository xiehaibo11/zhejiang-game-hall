
/* cocos2d::TMXLayerInfo::TMXLayerInfo() */

void __thiscall cocos2d::TMXLayerInfo::TMXLayerInfo(TMXLayerInfo *this)

{
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__TMXLayerInfo_01711d00;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x50),"");
  Size::Size((Size *)(this + 0x68));
  *(undefined8 *)(this + 0x70) = 0;
  this[0x7a] = (TMXLayerInfo)0x1;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}

