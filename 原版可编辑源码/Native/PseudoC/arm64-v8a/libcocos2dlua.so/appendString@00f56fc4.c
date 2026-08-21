
/* cocos2d::TextFieldTTF::appendString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::TextFieldTTF::appendString(TextFieldTTF *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f56fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f56fe4 to 0105700f has its CatchHandler @ 00f576a4 */
  (**(code **)(*(long *)this + 0x688))(this,pbVar2,uVar1);
  return;
}

