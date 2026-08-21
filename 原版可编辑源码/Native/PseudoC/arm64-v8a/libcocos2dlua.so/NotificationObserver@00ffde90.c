
/* cocos2d::NotificationObserver::NotificationObserver(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*), std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Ref*) */

void __thiscall
cocos2d::NotificationObserver::NotificationObserver
          (NotificationObserver *this,Ref *param_1,_func_void_Ref_ptr *param_2,basic_string *param_3
          ,Ref *param_4)

{
  ulong uVar1;
  Ref *pRVar2;
  undefined8 in_x5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__NotificationObserver_01724ca8;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40);
  *(undefined8 *)this_00 = 0;
  *(Ref **)(this + 0x28) = param_1;
  *(_func_void_Ref_ptr **)(this + 0x30) = param_2;
  *(basic_string **)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x58) = in_x5;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pRVar2 = *(Ref **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pRVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pRVar2,uVar1);
  }
  *(undefined4 *)(this + 0x60) = 0;
                    /* try { // try from 00ffdf1c to 010fdfef has its CatchHandler @ 00ffdf1c
                       catch() { ... } // from try @ 00ffdf1c with catch @ 00ffdf1c
                       catch() { ... } // from try @ 00ffe0b8 with catch @ 00ffdf1c
                       catch() { ... } // from try @ 00ffe10c with catch @ 00ffdf1c */
  return;
}

