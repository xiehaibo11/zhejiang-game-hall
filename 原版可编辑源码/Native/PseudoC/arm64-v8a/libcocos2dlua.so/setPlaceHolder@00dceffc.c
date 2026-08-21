
/* cocos2d::ui::TextField::setPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::ui::TextField::setPlaceHolder(basic_string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x640))();
  param_1[0x550] = (basic_string)0x1;
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)param_1);
  return;
}

