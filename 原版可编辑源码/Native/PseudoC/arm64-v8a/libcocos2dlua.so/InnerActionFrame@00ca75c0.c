
/* cocostudio::timeline::InnerActionFrame::InnerActionFrame() */

void __thiscall cocostudio::timeline::InnerActionFrame::InnerActionFrame(InnerActionFrame *this)

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
  *(undefined ***)this = &PTR__InnerActionFrame_016cbd20;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x68),"");
  this[0x80] = (InnerActionFrame)0x0;
  return;
}

