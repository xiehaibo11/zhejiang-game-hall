
/* cocos2d::extension::AssetsManagerEx::dispatchUpdateEvent(cocos2d::extension::EventAssetsManagerEx::EventCode,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocos2d::extension::AssetsManagerEx::dispatchUpdateEvent
          (AssetsManagerEx *this,uint param_2,basic_string *param_3,basic_string *param_4,
          int param_5,int param_6)

{
  long lVar1;
  uint local_e4;
  undefined **local_e0 [8];
  byte local_a0;
  void *local_90;
  byte local_78;
  void *local_68;
  byte local_60;
  void *local_50;
  long local_38;
  
                    /* try { // try from 00e02e88 to 00f02ecb has its CatchHandler @ 00e02e88
                       catch() { ... } // from try @ 00e02e88 with catch @ 00e02e88
                       catch() { ... } // from try @ 00e030f4 with catch @ 00e02e88 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e02ecc to 00f02ed7 has its CatchHandler @ 00e031d0 */
  if ((param_2 < 0xb) &&
     (((1 << (ulong)(param_2 & 0x1f) & 0x797U) != 0 ||
      ((param_2 == 3 && (this[0x118] == (AssetsManagerEx)0x1)))))) {
    this[0x118] = (AssetsManagerEx)0x0;
  }
  local_e4 = param_2;
  EventAssetsManagerEx::EventAssetsManagerEx
            ((EventAssetsManagerEx *)local_e0,(basic_string *)(this + 0x28),this,
             (EventCode *)&local_e4,*(float *)(this + 400),*(float *)(this + 0x194),param_3,param_4,
             param_5,param_6);
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x40),(Event *)local_e0);
                    /* try { // try from 00e02f08 to 00f02f0b has its CatchHandler @ 00e031e0 */
                    /* try { // try from 00e02f10 to 00f02f23 has its CatchHandler @ 00e031cc */
  local_e0[0] = &PTR__EventAssetsManagerEx_016e7f98;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 00e02f44 to 00f02f57 has its CatchHandler @ 00e03178 */
  local_e0[0] = &PTR__EventCustom_01698250;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  Event::~Event((Event *)local_e0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

