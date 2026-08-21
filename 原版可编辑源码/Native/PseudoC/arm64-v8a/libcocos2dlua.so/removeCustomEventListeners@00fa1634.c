
/* cocos2d::EventDispatcher::removeCustomEventListeners(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::EventDispatcher::removeCustomEventListeners(basic_string *param_1)

{
  basic_string *in_x1;
  
  removeEventListenersForListenerID((EventDispatcher *)param_1,in_x1);
  return;
}

