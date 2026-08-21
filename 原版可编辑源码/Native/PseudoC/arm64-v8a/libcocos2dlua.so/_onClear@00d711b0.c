
/* dragonBones::Animation::_onClear() */

void __thiscall dragonBones::Animation::_onClear(Animation *this)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)(this + 0x40);
                    /* try { // try from 00d711c4 to 00e711d7 has its CatchHandler @ 00d71450 */
  for (puVar6 = *(undefined8 **)(this + 0x38); puVar6 != puVar2; puVar6 = puVar6 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar6);
                    /* try { // try from 00d711dc to 00e711ef has its CatchHandler @ 00d7144c */
  }
  if (*(BaseObject **)(this + 0x70) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x70));
  }
                    /* try { // try from 00d711f8 to 00e7120f has its CatchHandler @ 00d71424 */
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  this[0x14] = (Animation)0x0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  pbVar1 = *(byte **)(this + 0x20);
  pbVar3 = *(byte **)(this + 0x28);
  *(Animation **)(this + 0x50) = this + 0x58;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00d71214 to 00e7122b has its CatchHandler @ 00d71420 */
  *(undefined8 *)(this + 0x60) = 0;
  if (pbVar3 != pbVar1) {
    bVar4 = pbVar3[-0x18];
    pbVar5 = pbVar3 + -0x18;
    while( true ) {
      if ((bVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
                    /* try { // try from 00d71230 to 00e7124f has its CatchHandler @ 00d7141c */
      if (pbVar1 == pbVar5) break;
      bVar4 = pbVar5[-0x18];
      pbVar3 = pbVar5;
      pbVar5 = pbVar5 + -0x18;
    }
  }
                    /* try { // try from 00d71250 to 00e71263 has its CatchHandler @ 00d714c4 */
  *(byte **)(this + 0x28) = pbVar1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
                    /* try { // try from 00d71268 to 00e71283 has its CatchHandler @ 00d71448 */
  return;
}

