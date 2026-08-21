
/* cocos2d::PcmAudioPlayer::prepare(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::PcmData const&) */

undefined8 __thiscall
cocos2d::PcmAudioPlayer::prepare(PcmAudioPlayer *this,basic_string *param_1,PcmData *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  Track *this_00;
  code *pcVar4;
  undefined **local_70;
  PcmAudioPlayer *pPStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a77de0 to 00b77e47 has its CatchHandler @ 00a77fd4 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x10) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),(char *)pbVar2,uVar1);
  }
  PcmData::operator=((PcmData *)(this + 0x28),param_2);
  this_00 = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this_00 != (Track *)0x0) {
    Track::Track(this_00,(PcmData *)(this + 0x28));
  }
  *(Track **)(this + 0x58) = this_00;
                    /* try { // try from 00a77e4c to 00b77e8f has its CatchHandler @ 00a77fa4 */
  local_60 = (**(code **)(**(long **)(this + 0x98) + 0x18))();
  local_70 = &PTR_FUN_01c6f1f8;
  pPStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_00a78440(&local_70,*(long *)(this + 0x58) + 0x40);
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a77e94 to 00b77ed7 has its CatchHandler @ 00a77fa0 */
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a77ea0;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00a77ea0:
  (**(code **)(*(long *)this + 0x58))(0x3f800000,this);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

