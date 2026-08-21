
/* cocos2d::ui::EditBoxImplCommon::onEndEditing(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::ui::EditBoxImplCommon::onEndEditing(basic_string *param_1)

{
  Widget::setBrightStyle(*(Widget **)(param_1 + 0x10),0);
  param_1[0xb4] = (basic_string)0x0;
  (**(code **)(*(long *)param_1 + 0x198))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00def29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x130))(param_1);
  return;
}

