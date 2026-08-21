
/* std::__ndk1::__function::__func<std::__ndk1::function<void (cocos2d::network::DownloadTask
   const&, long long, long long, long long)>, std::__ndk1::allocator<std::__ndk1::function<void
   (cocos2d::network::DownloadTask const&, long long, long long, long long)> >, void
   (cocos2d::network::DownloadTask const&, long, long, long)>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
::__clone(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
          *this)

{
  undefined8 *puVar1;
  __func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
  *p_Var2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR____func_01c675a8;
  p_Var2 = *(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
             **)(this + 0x30);
  if (p_Var2 == (__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
                 *)0x0) {
    puVar1[6] = 0;
  }
  else if (this + 0x10 == p_Var2) {
    puVar1[6] = puVar1 + 2;
    (**(code **)(*(long *)p_Var2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*(long *)p_Var2 + 0x10))();
    puVar1[6] = uVar3;
  }
  return puVar1;
}

