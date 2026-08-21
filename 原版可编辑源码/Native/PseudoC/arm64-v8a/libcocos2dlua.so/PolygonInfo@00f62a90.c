
/* cocos2d::PolygonInfo::PolygonInfo() */

void __thiscall cocos2d::PolygonInfo::PolygonInfo(PolygonInfo *this)

{
  this[0x18] = (PolygonInfo)0x1;
  Rect::Rect((Rect *)(this + 0x1c),(Rect *)Rect::ZERO);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),"");
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

