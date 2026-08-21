
/* dragonBones::ArmatureData::_onClear() */

void __thiscall dragonBones::ArmatureData::_onClear(ArmatureData *this)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  ArmatureData *pAVar7;
  long lVar8;
  undefined8 *puVar9;
  ArmatureData *pAVar10;
  
  puVar2 = *(undefined8 **)(this + 0x98);
  for (puVar9 = *(undefined8 **)(this + 0x90); puVar9 != puVar2; puVar9 = puVar9 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar9);
  }
  puVar2 = *(undefined8 **)(this + 0xb0);
  for (puVar9 = *(undefined8 **)(this + 0xa8); puVar9 != puVar2; puVar9 = puVar9 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar9);
  }
  pAVar10 = *(ArmatureData **)(this + 0xc0);
  while (pAVar10 != this + 200) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(ArmatureData **)(pAVar10 + 8);
    if (*(ArmatureData **)(pAVar10 + 8) == (ArmatureData *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(ArmatureData **)*(ArmatureData **)pAVar7 != pAVar10;
      pAVar10 = *(ArmatureData **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (ArmatureData *)(lVar8 + 0x10);
          pAVar10 = *(ArmatureData **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
                    /* try { // try from 00d86ea4 to 00e87163 has its CatchHandler @ 00d87fe0 */
        pAVar7 = *(ArmatureData **)pAVar10;
      } while (*(ArmatureData **)pAVar10 != (ArmatureData *)0x0);
    }
  }
  pAVar10 = *(ArmatureData **)(this + 0xd8);
  while (pAVar10 != this + 0xe0) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(ArmatureData **)(pAVar10 + 8);
    if (*(ArmatureData **)(pAVar10 + 8) == (ArmatureData *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(ArmatureData **)*(ArmatureData **)pAVar7 != pAVar10;
      pAVar10 = *(ArmatureData **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (ArmatureData *)(lVar8 + 0x10);
          pAVar10 = *(ArmatureData **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
        pAVar7 = *(ArmatureData **)pAVar10;
      } while (*(ArmatureData **)pAVar10 != (ArmatureData *)0x0);
    }
  }
  pAVar10 = *(ArmatureData **)(this + 0xf0);
  while (pAVar10 != this + 0xf8) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(ArmatureData **)(pAVar10 + 8);
    if (*(ArmatureData **)(pAVar10 + 8) == (ArmatureData *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(ArmatureData **)*(ArmatureData **)pAVar7 != pAVar10;
      pAVar10 = *(ArmatureData **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (ArmatureData *)(lVar8 + 0x10);
          pAVar10 = *(ArmatureData **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
        pAVar7 = *(ArmatureData **)pAVar10;
      } while (*(ArmatureData **)pAVar10 != (ArmatureData *)0x0);
    }
  }
  pAVar10 = *(ArmatureData **)(this + 0x108);
  while (pAVar10 != this + 0x110) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(ArmatureData **)(pAVar10 + 8);
    if (*(ArmatureData **)(pAVar10 + 8) == (ArmatureData *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(ArmatureData **)*(ArmatureData **)pAVar7 != pAVar10;
      pAVar10 = *(ArmatureData **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (ArmatureData *)(lVar8 + 0x10);
          pAVar10 = *(ArmatureData **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
        pAVar7 = *(ArmatureData **)pAVar10;
      } while (*(ArmatureData **)pAVar10 != (ArmatureData *)0x0);
    }
  }
  pAVar10 = *(ArmatureData **)(this + 0x120);
  while (pAVar10 != this + 0x128) {
    BaseObject::returnToPool(*(BaseObject **)(pAVar10 + 0x38));
    pAVar7 = *(ArmatureData **)(pAVar10 + 8);
    if (*(ArmatureData **)(pAVar10 + 8) == (ArmatureData *)0x0) {
      pAVar7 = pAVar10 + 0x10;
      bVar6 = *(ArmatureData **)*(ArmatureData **)pAVar7 != pAVar10;
      pAVar10 = *(ArmatureData **)pAVar7;
      if (bVar6) {
        do {
          lVar8 = *(long *)pAVar7;
          pAVar7 = (ArmatureData *)(lVar8 + 0x10);
          pAVar10 = *(ArmatureData **)pAVar7;
        } while (*(long *)pAVar10 != lVar8);
      }
    }
    else {
      do {
        pAVar10 = pAVar7;
        pAVar7 = *(ArmatureData **)pAVar10;
      } while (*(ArmatureData **)pAVar10 != (ArmatureData *)0x0);
    }
  }
  if (*(BaseObject **)(this + 0x148) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x148));
  }
  if (*(BaseObject **)(this + 0x150) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x150));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"",0);
  pbVar1 = *(byte **)(this + 0x48);
  pbVar3 = *(byte **)(this + 0x50);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
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
  *(byte **)(this + 0x50) = pbVar1;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xa8);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
             *)(this + 0xc0),*(__tree_node **)(this + 200));
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(ArmatureData **)(this + 0xc0) = this + 200;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
             *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
                    /* try { // try from 00d87174 to 00e87183 has its CatchHandler @ 00d87f74 */
  *(ArmatureData **)(this + 0xd8) = this + 0xe0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
             *)(this + 0xf0),*(__tree_node **)(this + 0xf8));
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(ArmatureData **)(this + 0xf0) = this + 0xf8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
             *)(this + 0x108),*(__tree_node **)(this + 0x110));
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(ArmatureData **)(this + 0x108) = this + 0x110;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
             *)(this + 0x120),*(__tree_node **)(this + 0x128));
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(ArmatureData **)(this + 0x120) = this + 0x128;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x158) = 0;
                    /* try { // try from 00d871c4 to 00e8720b has its CatchHandler @ 00d87fe0 */
  return;
}

