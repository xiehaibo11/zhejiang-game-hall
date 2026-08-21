
/* cocos2d::__NotificationCenter::registerScriptObserver(cocos2d::Ref*, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::__NotificationCenter::registerScriptObserver
          (__NotificationCenter *this,Ref *param_1,int param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  ulong uVar2;
  Ref *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  
                    /* try { // try from 00ffd968 to 010fd977 has its CatchHandler @ 00ffde58 */
  uVar2 = observerExisted(this,param_1,param_3,(Ref *)0x0);
                    /* try { // try from 00ffd994 to 010fd99b has its CatchHandler @ 00ffde34 */
                    /* try { // try from 00ffd99c to 010fd99f has its CatchHandler @ 00ffde30 */
  if (((uVar2 & 1) == 0) &&
     (this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow), this_00 != (Ref *)0x0)) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined ***)this_00 = &PTR__NotificationObserver_01724ca8;
    this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this_00 + 0x40);
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(Ref **)(this_00 + 0x28) = param_1;
    if (this_01 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
      uVar2 = *(ulong *)(param_3 + 8);
      pbVar1 = *(basic_string **)(param_3 + 0x10);
      if (((byte)*param_3 & 1) == 0) {
        pbVar1 = param_3 + 1;
        uVar2 = (ulong)((byte)*param_3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_01,(char *)pbVar1,uVar2);
    }
    *(int *)(this_00 + 0x60) = param_2;
    Ref::autorelease(this_00);
    __Array::addObject(*(__Array **)(this + 0x28),this_00);
    return;
  }
                    /* try { // try from 00ffda28 to 010fda3b has its CatchHandler @ 00ffde70 */
  return;
}

