
/* cocos2d::ui::Button::resetDisabledRender() */

void __thiscall cocos2d::ui::Button::resetDisabledRender(Button *this)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
                    /* catch() { ... } // from try @ 00dc2828 with catch @ 00dc29d8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc29f4 to 00ec2a77 has its CatchHandler @ 00dc29f4
                       catch() { ... } // from try @ 00dc29f4 with catch @ 00dc29f4
                       catch() { ... } // from try @ 00dc2d60 with catch @ 00dc29f4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x598),"",0);
  *(undefined4 *)(this + 0x5b8) = 0;
  Size::Size(aSStack_30,0.0,0.0);
  Size::operator=((Size *)(this + 0x558),aSStack_30);
  this[0x562] = (Button)0x0;
  this[0x565] = (Button)0x0;
  Scale9Sprite::resetRender();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

