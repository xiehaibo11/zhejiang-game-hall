
/* dragonBones::Animation::gotoAndPlayByTime(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, int) */

void __thiscall
dragonBones::Animation::gotoAndPlayByTime
          (Animation *this,basic_string *param_1,float param_2,int param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  AnimationConfig *pAVar3;
  
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  pAVar3 = *(AnimationConfig **)(this + 0x70);
  pAVar3[0x20] = (AnimationConfig)0x1;
  *(int *)(pAVar3 + 0x28) = param_3;
  *(float *)(pAVar3 + 0x30) = param_2;
  *(undefined4 *)(pAVar3 + 0x40) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pAVar3 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
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
                    /* try { // try from 00d72640 to 00e7264b has its CatchHandler @ 00d73070 */
                    /* try { // try from 00d7264c to 00e72657 has its CatchHandler @ 00d73060 */
  playConfig(this,pAVar3);
  return;
}

