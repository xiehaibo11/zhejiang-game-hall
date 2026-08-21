
/* dragonBones::Animation::play(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int) */

undefined8 __thiscall
dragonBones::Animation::play(Animation *this,basic_string *param_1,int param_2)

{
  basic_string *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  char *pcVar3;
  AnimationConfig *pAVar4;
  long lVar5;
  
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  lVar5 = *(long *)(this + 0x70);
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(int *)(lVar5 + 0x28) = param_2;
  *(undefined4 *)(lVar5 + 0x40) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar5 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar5 + 0x60),(char *)pbVar1,uVar2);
  }
  uVar2 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar2 == 0) {
    if (*(AnimationState **)(this + 0x78) == (AnimationState *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x140);
      if (lVar5 == 0) goto LAB_00d725a8;
      pAVar4 = *(AnimationConfig **)(this + 0x70);
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (pAVar4 + 0x60);
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar5 + 0x38)) {
        pcVar3 = *(char **)(lVar5 + 0x48);
        uVar2 = *(ulong *)(lVar5 + 0x40);
        if ((*(byte *)(lVar5 + 0x38) & 1) == 0) {
          pcVar3 = (char *)(lVar5 + 0x39);
          uVar2 = (ulong)(*(byte *)(lVar5 + 0x38) >> 1);
        }
        goto LAB_00d72598;
      }
    }
    else {
      uVar2 = AnimationState::isPlaying(*(AnimationState **)(this + 0x78));
                    /* try { // try from 00d7251c to 00e72537 has its CatchHandler @ 00d731cc */
      if (((uVar2 & 1) == 0) &&
         (uVar2 = AnimationState::isCompleted(*(AnimationState **)(this + 0x78)), (uVar2 & 1) == 0))
      {
        AnimationState::play(*(AnimationState **)(this + 0x78));
        goto LAB_00d725a8;
      }
      pAVar4 = *(AnimationConfig **)(this + 0x70);
      lVar5 = *(long *)(this + 0x78);
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (pAVar4 + 0x60);
                    /* try { // try from 00d7253c to 00e7254b has its CatchHandler @ 00d731d0 */
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar5 + 0x30)) {
        uVar2 = *(ulong *)(lVar5 + 0x38);
        pcVar3 = *(char **)(lVar5 + 0x40);
        if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
          pcVar3 = (char *)(lVar5 + 0x31);
          uVar2 = (ulong)(*(byte *)(lVar5 + 0x30) >> 1);
        }
LAB_00d72598:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this_00,pcVar3,uVar2);
        goto LAB_00d7259c;
      }
    }
  }
  else {
LAB_00d7259c:
    pAVar4 = *(AnimationConfig **)(this + 0x70);
  }
  playConfig(this,pAVar4);
LAB_00d725a8:
  return *(undefined8 *)(this + 0x78);
}

