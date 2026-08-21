
/* std::__ndk1::__function::__func<std::__ndk1::function<void (cocos2d::network::DownloadTask
   const&, long long, long long, long long)>, std::__ndk1::allocator<std::__ndk1::function<void
   (cocos2d::network::DownloadTask const&, long long, long long, long long)> >, void
   (cocos2d::network::DownloadTask const&, long, long,
   long)>::__clone(std::__ndk1::__function::__base<void (cocos2d::network::DownloadTask const&,
   long, long, long)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
::__clone(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  __func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
  *p_Var2;
  
  *(undefined ***)param_1 = &PTR____func_01c675a8;
  p_Var2 = *(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
             **)(this + 0x30);
  if (p_Var2 == (__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
                 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    if (this + 0x10 == p_Var2) {
      *(__base **)(param_1 + 0x30) = param_1 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x008b2c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}

