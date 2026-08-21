
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
  EventAssetsManagerEx *this_00;
  long *plVar2;
  uint local_64;
  EventAssetsManagerEx *local_60;
  long local_58;
  
                    /* try { // try from 00a64bd8 to 00b64bef has its CatchHandler @ 00a650f8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a64c04 to 00b64c17 has its CatchHandler @ 00a650f4 */
                    /* try { // try from 00a64c18 to 00b64c27 has its CatchHandler @ 00a650e0 */
  if ((param_2 < 0xb) &&
     (((1 << (ulong)(param_2 & 0x1f) & 0x797U) != 0 ||
      ((param_2 == 3 && (this[0xf8] == (AssetsManagerEx)0x1)))))) {
    this[0xf8] = (AssetsManagerEx)0x0;
  }
  plVar2 = *(long **)(this + 0x250);
                    /* try { // try from 00a64c28 to 00b64c2f has its CatchHandler @ 00a6510c */
  local_64 = param_2;
  if (plVar2 != (long *)0x0) {
    this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (this_00 == (EventAssetsManagerEx *)0x0) {
      local_60 = (EventAssetsManagerEx *)0x0;
    }
    else {
                    /* try { // try from 00a64c54 to 00b64c5f has its CatchHandler @ 00a650cc */
                    /* try { // try from 00a64c64 to 00b64c6b has its CatchHandler @ 00a65094 */
      EventAssetsManagerEx::EventAssetsManagerEx
                (this_00,(basic_string *)(this + 0x10),this,(EventCode *)&local_64,param_3,param_4,
                 param_5,param_6);
      plVar2 = *(long **)(this + 0x250);
      local_60 = this_00;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a64c74 to 00b64c7b has its CatchHandler @ 00a65090 */
        FUN_008589d0();
      }
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_60);
                    /* try { // try from 00a64c90 to 00b64c97 has its CatchHandler @ 00a6508c */
    Ref::release((Ref *)this_00);
  }
                    /* try { // try from 00a64c98 to 00b64c9f has its CatchHandler @ 00a65084 */
                    /* try { // try from 00a64ca0 to 00b64ca7 has its CatchHandler @ 00a6507c */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a64cdc to 00b64d6f has its CatchHandler @ 00a65114 */
    __stack_chk_fail();
  }
                    /* try { // try from 00a64ca8 to 00b64caf has its CatchHandler @ 00a65074 */
                    /* try { // try from 00a64cb0 to 00b64cb7 has its CatchHandler @ 00a6506c */
  return;
}

