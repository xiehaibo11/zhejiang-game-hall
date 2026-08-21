
/* dragonBones::AnimationState::_onClear() */

void __thiscall dragonBones::AnimationState::_onClear(AnimationState *this)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  AnimationState *pAVar7;
  long lVar8;
  undefined8 *puVar9;
  AnimationState *pAVar10;
  
  puVar2 = *(undefined8 **)(this + 0xc0);
  for (puVar9 = *(undefined8 **)(this + 0xb8); puVar9 != puVar2; puVar9 = puVar9 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar9);
  }
  puVar2 = *(undefined8 **)(this + 0xd8);
  for (puVar9 = *(undefined8 **)(this + 0xd0); puVar9 != puVar2; puVar9 = puVar9 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar9);
  }
  puVar2 = *(undefined8 **)(this + 0xf0);
  for (puVar9 = *(undefined8 **)(this + 0xe8); puVar9 != puVar2; puVar9 = puVar9 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar9);
  }
  pAVar10 = *(AnimationState **)(this + 0x118);
  while (pAVar10 != this + 0x120) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(AnimationState **)(pAVar10 + 8);
    if (*(AnimationState **)(pAVar10 + 8) == (AnimationState *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(AnimationState **)*(AnimationState **)pAVar7 != pAVar10;
      pAVar10 = *(AnimationState **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (AnimationState *)(lVar8 + 0x10);
          pAVar10 = *(AnimationState **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
        pAVar7 = *(AnimationState **)pAVar10;
      } while (*(AnimationState **)pAVar10 != (AnimationState *)0x0);
    }
  }
  if (*(BaseObject **)(this + 0x88) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x88));
  }
  if (*(BaseObject **)(this + 0x138) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x138));
  }
  *(undefined4 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x14) = 1;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x48),"",0);
  pbVar1 = *(byte **)(this + 0xa0);
  pbVar3 = *(byte **)(this + 0xa8);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffff00000000;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 2;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  if (pbVar3 != pbVar1) {
    bVar4 = pbVar3[-0x18];
    pbVar5 = pbVar3 + -0x18;
    while( true ) {
      if ((bVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      if (pbVar1 == pbVar5) break;
      bVar4 = pbVar5[-0x18];
      pbVar3 = pbVar5;
      pbVar5 = pbVar5 + -0x18;
    }
  }
  *(byte **)(this + 0xa8) = pbVar1;
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
             *)(this + 0x118),*(__tree_node **)(this + 0x120));
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(AnimationState **)(this + 0x118) = this + 0x120;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  return;
}

