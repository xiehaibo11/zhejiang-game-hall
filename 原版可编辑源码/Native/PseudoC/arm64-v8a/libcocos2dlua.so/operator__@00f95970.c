
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Console::*)(int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), cocos2d::Console*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Console::*)(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), cocos2d::Console*, std::__ndk1::placeholders::__ph<1>
   const&, std::__ndk1::placeholders::__ph<2> const&> >, void (int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)>::TEMPNAMEPLACEHOLDERVALUE(int&&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void std::__ndk1::__function::
     __func<std::__ndk1::__bind<void(cocos2d::Console::*)(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocos2d::Console*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Console::*)(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocos2d::Console*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
     ::operator()(int *param_1,basic_string *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 2);
  plVar1 = (long *)(*(long *)(param_1 + 6) + ((long)*(ulong *)(param_1 + 4) >> 1));
  if ((*(ulong *)(param_1 + 4) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f9598c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined4 *)param_2);
  return;
}

