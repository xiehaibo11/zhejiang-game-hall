
/* FileImplement::writeStringToFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
FileImplement::writeStringToFile(FileImplement *this,basic_string *param_1,basic_string *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00857e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1,param_2);
  return;
}

