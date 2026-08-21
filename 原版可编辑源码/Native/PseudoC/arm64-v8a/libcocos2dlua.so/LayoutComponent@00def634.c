
/* cocos2d::ui::LayoutComponent::LayoutComponent() */

void __thiscall cocos2d::ui::LayoutComponent::LayoutComponent(LayoutComponent *this)

{
  Component::Component((Component *)this);
  *(undefined2 *)(this + 0x89) = 1;
                    /* catch() { ... } // from try @ 00def600 with catch @ 00def650 */
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x70] = (LayoutComponent)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined2 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (LayoutComponent)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (LayoutComponent)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x68] = (LayoutComponent)0x0;
  *(undefined ***)this = &PTR__LayoutComponent_016e64f8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"__ui_layout",0xb);
  return;
}

