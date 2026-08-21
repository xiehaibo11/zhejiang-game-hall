
/* cocos2d::ui::Button::resetPressedRender() */

void __thiscall cocos2d::ui::Button::resetPressedRender(Button *this)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x580),"",0);
  *(undefined4 *)(this + 0x5b4) = 0;
  Size::Size(aSStack_30,0.0,0.0);
  Size::operator=((Size *)(this + 0x550),aSStack_30);
  this[0x561] = (Button)0x0;
  this[0x564] = (Button)0x0;
  Scale9Sprite::resetRender();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

