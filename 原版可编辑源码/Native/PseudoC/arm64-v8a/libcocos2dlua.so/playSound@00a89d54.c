
/* fairygui::GRoot::playSound(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float) */

basic_string * fairygui::GRoot::playSound(basic_string *param_1,float param_2)

{
  basic_string *pbVar1;
  basic_string *in_x1;
  
                    /* try { // try from 00a89d68 to 00b89d8b has its CatchHandler @ 00a89f7c */
  if (((_soundEnabled != '\0') &&
      (param_1 = (basic_string *)UIPackage::getItemByURL(in_x1), param_1 != (basic_string *)0x0)) &&
     (DAT_017827e0 != (long *)0x0)) {
                    /* try { // try from 00a89d8c to 00b89da3 has its CatchHandler @ 00a89b60 */
                    /* WARNING: Could not recover jumptable at 0x00a89d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar1 = (basic_string *)(**(code **)(*DAT_017827e0 + 0x30))(DAT_017827e0,param_1 + 0x70);
    return pbVar1;
  }
                    /* try { // try from 00a89da4 to 00b89e47 has its CatchHandler @ 00a89f94 */
  return param_1;
}

