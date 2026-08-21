
/* dragonBones::AnimationState::~AnimationState() */

void __thiscall dragonBones::AnimationState::~AnimationState(AnimationState *this)

{
  byte bVar1;
  AnimationState AVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* try { // try from 00d774d0 to 00e774db has its CatchHandler @ 00d780ec */
  *(undefined ***)this = &PTR__AnimationState_016d5fd0;
  _onClear(this);
                    /* try { // try from 00d774e0 to 00e774e7 has its CatchHandler @ 00d780e8 */
                    /* try { // try from 00d774e8 to 00e774ef has its CatchHandler @ 00d780f4 */
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
             *)(this + 0x118),*(__tree_node **)(this + 0x120));
  pvVar3 = *(void **)(this + 0x100);
                    /* try { // try from 00d774f0 to 00e774f7 has its CatchHandler @ 00d780f0 */
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xe8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar3;
    operator_delete(pvVar3);
  }
                    /* try { // try from 00d7750c to 00e77513 has its CatchHandler @ 00d78110 */
  pvVar3 = *(void **)(this + 0xd0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar3;
    operator_delete(pvVar3);
  }
                    /* try { // try from 00d7751c to 00e77533 has its CatchHandler @ 00d78134 */
  pvVar3 = *(void **)(this + 0xb8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar3;
    operator_delete(pvVar3);
  }
  pbVar6 = *(byte **)(this + 0xa0);
  if (pbVar6 != (byte *)0x0) {
                    /* try { // try from 00d77534 to 00e77557 has its CatchHandler @ 00d78138 */
    pbVar5 = *(byte **)(this + 0xa8);
    pbVar4 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar4 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar1 = pbVar4[-0x18];
        pbVar5 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
      pbVar4 = *(byte **)(this + 0xa0);
    }
    *(byte **)(this + 0xa8) = pbVar6;
    operator_delete(pbVar4);
  }
  if (((byte)this[0x48] & 1) == 0) {
    AVar2 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    AVar2 = this[0x30];
  }
  if (((byte)AVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
    return;
  }
  return;
}

