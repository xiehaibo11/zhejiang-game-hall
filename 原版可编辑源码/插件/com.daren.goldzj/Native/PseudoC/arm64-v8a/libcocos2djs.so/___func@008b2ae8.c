
/* std::__ndk1::__function::__func<std::__ndk1::function<void (cocos2d::network::DownloadTask
   const&, long long, long long, long long)>, std::__ndk1::allocator<std::__ndk1::function<void
   (cocos2d::network::DownloadTask const&, long long, long long, long long)> >, void
   (cocos2d::network::DownloadTask const&, long, long, long)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
::~__func(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
          *this)

{
  __func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
  *p_Var1;
  code *pcVar2;
  
  p_Var1 = *(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
             **)(this + 0x30);
  *(undefined ***)this = &PTR____func_01c675a8;
  if (this + 0x10 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
                   *)0x0) goto LAB_008b2b34;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_008b2b34:
  operator_delete(this);
  return;
}

