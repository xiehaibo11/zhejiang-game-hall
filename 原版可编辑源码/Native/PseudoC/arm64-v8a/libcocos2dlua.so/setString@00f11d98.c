
/* non-virtual thunk to cocos2d::LabelBMFont::setString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::LabelBMFont::setString(LabelBMFont *this,basic_string *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(this + 0x28) + 0x588))();
                    /* try { // try from 00f11dc0 to 01011df3 has its CatchHandler @ 00f11e04 */
  uVar1 = (**(code **)(**(long **)(this + 0x28) + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f11de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x160))(this + -0x2f8,uVar1);
  return;
}

