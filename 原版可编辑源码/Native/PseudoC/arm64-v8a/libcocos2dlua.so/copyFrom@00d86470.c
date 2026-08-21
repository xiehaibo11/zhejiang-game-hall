
/* dragonBones::AnimationConfig::copyFrom(dragonBones::AnimationConfig*) */

void __thiscall
dragonBones::AnimationConfig::copyFrom(AnimationConfig *this,AnimationConfig *param_1)

{
  ulong uVar1;
  AnimationConfig *pAVar2;
  undefined8 uVar3;
  
  this[0xd] = param_1[0xd];
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  this[0x1c] = param_1[0x1c];
  this[0x1d] = param_1[0x1d];
  this[0x1e] = param_1[0x1e];
  this[0x1f] = param_1[0x1f];
  this[0x20] = param_1[0x20];
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    pAVar2 = *(AnimationConfig **)(param_1 + 0x58);
                    /* try { // try from 00d86504 to 00e865f7 has its CatchHandler @ 00d86504
                       catch() { ... } // from try @ 00d86504 with catch @ 00d86504
                       catch() { ... } // from try @ 00d87220 with catch @ 00d86504
                       catch() { ... } // from try @ 00d87c18 with catch @ 00d86504
                       catch() { ... } // from try @ 00d87ea0 with catch @ 00d86504 */
    if (((byte)param_1[0x48] & 1) == 0) {
      pAVar2 = param_1 + 0x49;
      uVar1 = (ulong)((byte)param_1[0x48] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pAVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x60] >> 1);
    pAVar2 = param_1 + 0x61;
    if (((byte)param_1[0x60] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x68);
      pAVar2 = *(AnimationConfig **)(param_1 + 0x70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x60),(char *)pAVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x78] >> 1);
    pAVar2 = param_1 + 0x79;
    if (((byte)param_1[0x78] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x80);
      pAVar2 = *(AnimationConfig **)(param_1 + 0x88);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),(char *)pAVar2,uVar1);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x90),*(basic_string **)(param_1 + 0x90),
               *(basic_string **)(param_1 + 0x98));
    return;
  }
  return;
}

