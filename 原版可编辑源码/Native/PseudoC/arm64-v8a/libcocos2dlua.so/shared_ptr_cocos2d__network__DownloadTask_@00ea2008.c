
/* std::__ndk1::shared_ptr<cocos2d::network::DownloadTask
   const>::shared_ptr<cocos2d::network::DownloadTask>(cocos2d::network::DownloadTask*,
   std::__ndk1::enable_if<is_convertible<cocos2d::network::DownloadTask*,
   cocos2d::network::DownloadTask const*>::value,
   std::__ndk1::shared_ptr<cocos2d::network::DownloadTask const>::__nat>::type) */

void std::__ndk1::shared_ptr<cocos2d::network::DownloadTask_const>::
     shared_ptr<cocos2d::network::DownloadTask>(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = operator_new(0x20);
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *puVar1 = &PTR____shared_weak_count_016f4c28;
  puVar1[1] = 0;
  param_1[1] = puVar1;
  return;
}

