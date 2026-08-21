
/* std::__ndk1::__function::__func<std::__ndk1::function<void (cocos2d::network::DownloadTask
   const&, long long, long long, long long)>, std::__ndk1::allocator<std::__ndk1::function<void
   (cocos2d::network::DownloadTask const&, long long, long long, long long)> >, void
   (cocos2d::network::DownloadTask const&, long, long,
   long)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::DownloadTask const&, long&&, long&&, long&&)
    */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
::operator()(__func<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>,std::__ndk1::allocator<std::__ndk1::function<void(cocos2d::network::DownloadTask_const&,long_long,long_long,long_long)>>,void(cocos2d::network::DownloadTask_const&,long,long,long)>
             *this,DownloadTask *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lStack_30 = *param_2;
  local_38 = *param_3;
  local_40 = *param_4;
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,&lStack_30,&local_38,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

