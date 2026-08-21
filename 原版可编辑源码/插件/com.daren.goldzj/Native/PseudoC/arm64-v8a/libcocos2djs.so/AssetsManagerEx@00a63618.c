
/* cocos2d::extension::AssetsManagerEx::AssetsManagerEx(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<int (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::AssetsManagerEx
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2,function *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  Ref::Ref((Ref *)this);
                    /* try { // try from 00a6364c to 00b63653 has its CatchHandler @ 00a6387c */
                    /* try { // try from 00a63658 to 00b6365f has its CatchHandler @ 00a63874 */
                    /* try { // try from 00a63660 to 00b6366f has its CatchHandler @ 00a6386c */
                    /* try { // try from 00a63678 to 00b636b3 has its CatchHandler @ 00a63884 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__AssetsManagerEx_01c6e700;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x51] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  this[0x81] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
                    /* try { // try from 00a636b4 to 00b636c3 has its CatchHandler @ 00a63868 */
  this[0x99] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  this[0xb1] = (AssetsManagerEx)0x0;
                    /* try { // try from 00a636c4 to 00b637eb has its CatchHandler @ 00a63894 */
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xf8] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x148) = 0x3f800000;
  this[0x168] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1b8) = 0x3f800000;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x16c) = 0x20;
  *(undefined4 *)(this + 0x1c8) = 0;
  plVar1 = *(long **)(param_3 + 0x20);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(this + 0x1f0) = 0;
  }
  else if ((long *)param_3 == plVar1) {
    *(AssetsManagerEx **)(this + 0x1f0) = this + 0x1d0;
    (**(code **)(**(long **)(param_3 + 0x20) + 0x18))(*(long **)(param_3 + 0x20),this + 0x1d0);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(this + 0x1f0) = uVar2;
  }
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  this[0x260] = (AssetsManagerEx)0x0;
  init(this,param_1,param_2);
  return;
}

