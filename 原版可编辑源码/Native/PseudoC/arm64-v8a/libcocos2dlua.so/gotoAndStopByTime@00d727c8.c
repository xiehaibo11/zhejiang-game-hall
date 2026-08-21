
/* dragonBones::Animation::gotoAndStopByTime(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

AnimationState * __thiscall
dragonBones::Animation::gotoAndStopByTime(Animation *this,basic_string *param_1,float param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  AnimationState *this_00;
  AnimationConfig *pAVar3;
  
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
                    /* try { // try from 00d727ec to 00e7280f has its CatchHandler @ 00d71544 */
  pAVar3 = *(AnimationConfig **)(this + 0x70);
  pAVar3[0x20] = (AnimationConfig)0x1;
  *(undefined4 *)(pAVar3 + 0x28) = 1;
  *(float *)(pAVar3 + 0x30) = param_2;
  *(undefined4 *)(pAVar3 + 0x40) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pAVar3 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00d72810 to 00e72817 has its CatchHandler @ 00d73114 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pAVar3 + 0x60),(char *)pbVar2,uVar1);
    pAVar3 = *(AnimationConfig **)(this + 0x70);
  }
  this_00 = (AnimationState *)playConfig(this,pAVar3);
  if (this_00 != (AnimationState *)0x0) {
    AnimationState::stop(this_00);
  }
  return this_00;
}

