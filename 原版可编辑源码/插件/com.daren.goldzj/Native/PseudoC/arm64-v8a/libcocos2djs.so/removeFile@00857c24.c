
/* FileImplement::removeFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall FileImplement::removeFile(FileImplement *this,basic_string *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00857c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return;
}

