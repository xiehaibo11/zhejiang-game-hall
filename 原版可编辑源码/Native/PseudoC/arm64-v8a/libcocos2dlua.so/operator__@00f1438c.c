
/* std::__ndk1::__function::__func<std::__ndk1::__bind<int
   (cocos2d::Label::*)(std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> > const&, int, int) const, cocos2d::Label*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&,
   std::__ndk1::placeholders::__ph<3> const&>, std::__ndk1::allocator<std::__ndk1::__bind<int
   (cocos2d::Label::*)(std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> > const&, int, int) const, cocos2d::Label*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&,
   std::__ndk1::placeholders::__ph<3> const&> >, int (std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int,
   int)>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int&&, int&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<int(cocos2d::Label::*)(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)const,cocos2d::Label*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<int(cocos2d::Label::*)(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)const,cocos2d::Label*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,int(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)>
::operator()(__func<std::__ndk1::__bind<int(cocos2d::Label::*)(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)const,cocos2d::Label*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>,std::__ndk1::allocator<std::__ndk1::__bind<int(cocos2d::Label::*)(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)const,cocos2d::Label*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&>>,int(std::__ndk1::basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>const&,int,int)>
             *this,basic_string *param_1,int *param_2,int *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f143ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1,*param_2,*param_3);
  return;
}

