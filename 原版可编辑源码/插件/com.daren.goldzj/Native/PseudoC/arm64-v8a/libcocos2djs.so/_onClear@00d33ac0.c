
/* dragonBones::AnimationData::_onClear() */

void __thiscall dragonBones::AnimationData::_onClear(AnimationData *this)

{
  undefined8 *puVar1;
  bool bVar2;
  BaseObject *this_00;
  AnimationData *pAVar3;
  long lVar4;
  AnimationData *pAVar5;
  undefined8 *puVar6;
  
  pAVar5 = *(AnimationData **)(this + 0x68);
  while (pAVar5 != this + 0x70) {
    puVar1 = *(undefined8 **)(pAVar5 + 0x40);
    for (puVar6 = *(undefined8 **)(pAVar5 + 0x38); puVar6 != puVar1; puVar6 = puVar6 + 1) {
      BaseObject::returnToPool((BaseObject *)*puVar6);
    }
    pAVar3 = *(AnimationData **)(pAVar5 + 8);
    if (*(AnimationData **)(pAVar5 + 8) == (AnimationData *)0x0) {
      pAVar3 = pAVar5 + 0x10;
      bVar2 = *(AnimationData **)*(AnimationData **)pAVar3 != pAVar5;
      pAVar5 = *(AnimationData **)pAVar3;
      if (bVar2) {
        do {
          lVar4 = *(long *)pAVar3;
          pAVar3 = (AnimationData *)(lVar4 + 0x10);
          pAVar5 = *(AnimationData **)pAVar3;
        } while (*(long *)pAVar5 != lVar4);
      }
    }
    else {
      do {
        pAVar5 = pAVar3;
        pAVar3 = *(AnimationData **)pAVar5;
      } while (*(AnimationData **)pAVar5 != (AnimationData *)0x0);
    }
  }
  pAVar5 = *(AnimationData **)(this + 0x80);
  while (pAVar5 != this + 0x88) {
    puVar1 = *(undefined8 **)(pAVar5 + 0x40);
    for (puVar6 = *(undefined8 **)(pAVar5 + 0x38); puVar6 != puVar1; puVar6 = puVar6 + 1) {
      BaseObject::returnToPool((BaseObject *)*puVar6);
    }
    pAVar3 = *(AnimationData **)(pAVar5 + 8);
    if (*(AnimationData **)(pAVar5 + 8) == (AnimationData *)0x0) {
      pAVar3 = pAVar5 + 0x10;
      bVar2 = *(AnimationData **)*(AnimationData **)pAVar3 != pAVar5;
      pAVar5 = *(AnimationData **)pAVar3;
      if (bVar2) {
        do {
          lVar4 = *(long *)pAVar3;
          pAVar3 = (AnimationData *)(lVar4 + 0x10);
          pAVar5 = *(AnimationData **)pAVar3;
        } while (*(long *)pAVar5 != lVar4);
      }
    }
    else {
      do {
        pAVar5 = pAVar3;
        pAVar3 = *(AnimationData **)pAVar5;
      } while (*(AnimationData **)pAVar5 != (AnimationData *)0x0);
    }
  }
  pAVar5 = *(AnimationData **)(this + 0x98);
  while (pAVar5 != this + 0xa0) {
    puVar1 = *(undefined8 **)(pAVar5 + 0x40);
    for (puVar6 = *(undefined8 **)(pAVar5 + 0x38); puVar6 != puVar1; puVar6 = puVar6 + 1) {
      BaseObject::returnToPool((BaseObject *)*puVar6);
    }
    pAVar3 = *(AnimationData **)(pAVar5 + 8);
    if (*(AnimationData **)(pAVar5 + 8) == (AnimationData *)0x0) {
      pAVar3 = pAVar5 + 0x10;
      bVar2 = *(AnimationData **)*(AnimationData **)pAVar3 != pAVar5;
      pAVar5 = *(AnimationData **)pAVar3;
      if (bVar2) {
        do {
          lVar4 = *(long *)pAVar3;
          pAVar3 = (AnimationData *)(lVar4 + 0x10);
          pAVar5 = *(AnimationData **)pAVar3;
        } while (*(long *)pAVar5 != lVar4);
      }
    }
    else {
      do {
        pAVar5 = pAVar3;
        pAVar3 = *(AnimationData **)pAVar5;
      } while (*(AnimationData **)pAVar5 != (AnimationData *)0x0);
    }
  }
  this_00 = *(BaseObject **)(this + 0xe0);
  if (this_00 != (BaseObject *)0x0) {
    BaseObject::returnToPool(this_00);
  }
  if (*(BaseObject **)(this + 0xe8) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0xe8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0x3f800000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x38),"",0);
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
             *)(this + 0x68),*(__tree_node **)(this + 0x70));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(AnimationData **)(this + 0x68) = this + 0x70;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
             *)(this + 0x80),*(__tree_node **)(this + 0x88));
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(AnimationData **)(this + 0x80) = this + 0x88;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
             *)(this + 0x98),*(__tree_node **)(this + 0xa0));
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(AnimationData **)(this + 0x98) = this + 0xa0;
  pAVar5 = this + 0xb8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
             *)(this + 0xb0),*(__tree_node **)pAVar5);
  *(AnimationData **)(this + 0xb0) = pAVar5;
  *(undefined8 *)pAVar5 = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
             *)(this + 200),*(__tree_node **)(this + 0xd0));
  *(AnimationData **)(this + 200) = this + 0xd0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}

