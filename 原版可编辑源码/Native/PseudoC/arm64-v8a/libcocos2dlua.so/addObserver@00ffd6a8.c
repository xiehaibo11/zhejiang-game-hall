
/* cocos2d::__NotificationCenter::addObserver(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Ref*) */

void cocos2d::__NotificationCenter::addObserver
               (Ref *param_1,_func_void_Ref_ptr *param_2,basic_string *param_3,Ref *param_4)

{
  ulong uVar1;
  NotificationObserver *this;
  basic_string *in_x4;
  Ref *in_x5;
  
                    /* catch() { ... } // from try @ 00ffd51c with catch @ 00ffd6d0
                       catch() { ... } // from try @ 00ffd67c with catch @ 00ffd6d0 */
                    /* catch() { ... } // from try @ 00ffd398 with catch @ 00ffd6d4 */
                    /* catch() { ... } // from try @ 00ffd4b0 with catch @ 00ffd6d8 */
                    /* catch() { ... } // from try @ 00ffd650 with catch @ 00ffd6dc */
  uVar1 = observerExisted((__NotificationCenter *)param_1,(Ref *)param_2,in_x4,in_x5);
                    /* try { // try from 00ffd6f8 to 010fd7bf has its CatchHandler @ 00ffd6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ffd6f8 with catch @ 00ffd6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ffd7c4 with catch @ 00ffd6f8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ffd8e8 with catch @ 00ffd6f8
                        */
  if (((uVar1 & 1) == 0) &&
     (this = operator_new(0x68,(nothrow_t *)&std::nothrow), this != (NotificationObserver *)0x0)) {
    NotificationObserver::NotificationObserver
              (this,(Ref *)param_2,(_func_void_Ref_ptr *)param_3,(basic_string *)param_4,
               (Ref *)in_x4);
    Ref::autorelease((Ref *)this);
    __Array::addObject(*(__Array **)(param_1 + 0x28),(Ref *)this);
    return;
  }
  return;
}

