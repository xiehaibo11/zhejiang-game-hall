
/* cocos2d::ui::Widget::getOrCreateLayoutComponent() */

LayoutComponent * __thiscall cocos2d::ui::Widget::getOrCreateLayoutComponent(Widget *this)

{
  long lVar1;
  LayoutComponent *this_00;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"__ui_layout");
                    /* try { // try from 00da9e18 to 00ea9e1b has its CatchHandler @ 00da9ed0 */
  this_00 = (LayoutComponent *)Node::getComponent((Node *)this,(basic_string *)local_50);
                    /* try { // try from 00da9e1c to 00ea9ec3 has its CatchHandler @ 00da9ca8 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (this_00 == (LayoutComponent *)0x0) {
    this_00 = operator_new(0x90,(nothrow_t *)&std::nothrow);
    if (this_00 != (LayoutComponent *)0x0) {
      LayoutComponent::LayoutComponent(this_00);
      uVar2 = (**(code **)(*(long *)this_00 + 0x10))(this_00);
      if ((uVar2 & 1) == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
        this_00 = (LayoutComponent *)0x0;
      }
      else {
        Ref::autorelease((Ref *)this_00);
      }
    }
    (**(code **)(*(long *)this + 0x460))(this,this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00da9ec4 to 00ea9ecf has its CatchHandler @ 00da9ed0 */
  __stack_chk_fail();
}

