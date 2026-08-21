
/* dragonBones::Animation::_onClear() */

void __thiscall dragonBones::Animation::_onClear(Animation *this)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  
  puVar2 = *(undefined8 **)(this + 0x40);
  for (puVar4 = *(undefined8 **)(this + 0x38); puVar4 != puVar2; puVar4 = puVar4 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar4);
  }
  if (*(BaseObject **)(this + 0x70) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x70));
  }
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  this[0x14] = (Animation)0x0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  pbVar1 = *(byte **)(this + 0x20);
  *(Animation **)(this + 0x50) = this + 0x58;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  pbVar5 = *(byte **)(this + 0x28);
  while (pbVar3 = pbVar5, pbVar3 != pbVar1) {
    pbVar5 = pbVar3 + -0x18;
    if ((*pbVar5 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + -8));
    }
  }
  *(byte **)(this + 0x28) = pbVar1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  return;
}

