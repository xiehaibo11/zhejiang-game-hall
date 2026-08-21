
/* cocos2d::ui::PageViewIndicator::PageViewIndicator() */

void __thiscall cocos2d::ui::PageViewIndicator::PageViewIndicator(PageViewIndicator *this)

{
  undefined2 uVar1;
  
  ProtectedNode::ProtectedNode((ProtectedNode *)this);
  *(undefined4 *)(this + 0x314) = 2;
  *(undefined ***)this = &PTR__PageViewIndicator_016dad38;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0x3f80000041b80000;
  uVar1 = Color3B::WHITE;
  this[0x34a] = DAT_01792432;
  *(undefined2 *)(this + 0x348) = uVar1;
  *(undefined2 *)(this + 0x34b) = 0x14c;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x350),"");
  *(undefined4 *)(this + 0x368) = 0;
  return;
}

