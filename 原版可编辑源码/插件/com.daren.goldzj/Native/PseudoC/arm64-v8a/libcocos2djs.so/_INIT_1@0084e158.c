
void _INIT_1(void)

{
  cocos2d::Application::_scheduler = 0;
  DAT_01d35b10 = 0;
  __cxa_atexit(std::__ndk1::shared_ptr<cocos2d::Scheduler>::~shared_ptr,
               &cocos2d::Application::_scheduler,&PTR_LOOP_01d1b000);
  return;
}

