
/* fairygui::PopupMenu::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * fairygui::PopupMenu::create(basic_string *param_1)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR__PopupMenu_016a7218;
    uVar1 = init((PopupMenu *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      cocos2d::Ref::autorelease(this);
    }
  }
  return this;
}

