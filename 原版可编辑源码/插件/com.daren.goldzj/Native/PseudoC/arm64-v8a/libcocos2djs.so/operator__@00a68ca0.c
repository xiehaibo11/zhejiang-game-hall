
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::extension::AssetsManagerEx::*)(cocos2d::network::DownloadTask const&, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), cocos2d::extension::AssetsManagerEx*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&,
   std::__ndk1::placeholders::__ph<4> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::extension::AssetsManagerEx::*)(cocos2d::network::DownloadTask const&, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), cocos2d::extension::AssetsManagerEx*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&,
   std::__ndk1::placeholders::__ph<4> const&> >, void (cocos2d::network::DownloadTask const&, int,
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::DownloadTask const&, int&&, int&&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void std::__ndk1::__function::
     __func<std::__ndk1::__bind<void(cocos2d::extension::AssetsManagerEx::*)(cocos2d::network::DownloadTask_const&,int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocos2d::extension::AssetsManagerEx*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&,std::__ndk1::placeholders::__ph<4>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::extension::AssetsManagerEx::*)(cocos2d::network::DownloadTask_const&,int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),cocos2d::extension::AssetsManagerEx*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&,std::__ndk1::placeholders::__ph<3>const&,std::__ndk1::placeholders::__ph<4>const&>>,void(cocos2d::network::DownloadTask_const&,int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
     ::operator()(DownloadTask *param_1,int *param_2,int *param_3,basic_string *param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + ((long)*(ulong *)(param_1 + 0x10) >> 1));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
                    /* try { // try from 00a68cb4 to 00b68ccb has its CatchHandler @ 00a68e3c */
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00a68cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,*param_3,*(undefined4 *)param_4);
  return;
}

