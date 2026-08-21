
/* cocostudio::timeline::EventFrame::EventFrame() */

void __thiscall cocostudio::timeline::EventFrame::EventFrame(EventFrame *this)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x28) = 1;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__EventFrame_016cbf60;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),"");
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

