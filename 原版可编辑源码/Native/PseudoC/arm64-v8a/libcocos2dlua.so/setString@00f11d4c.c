
/* cocos2d::LabelBMFont::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::LabelBMFont::setString(basic_string *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(param_1 + 800) + 0x588))();
  uVar1 = (**(code **)(**(long **)(param_1 + 800) + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f11d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x160))(param_1,uVar1);
  return;
}

