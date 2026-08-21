
/* dragonBones::SkinData::_onClear() */

void __thiscall dragonBones::SkinData::_onClear(SkinData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  SkinData *pSVar4;
  long lVar5;
  SkinData *pSVar6;
  
  pSVar6 = *(SkinData **)(this + 0x28);
  while (pSVar6 != this + 0x30) {
    puVar2 = *(undefined8 **)(pSVar6 + 0x40);
    for (puVar1 = *(undefined8 **)(pSVar6 + 0x38); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      if ((BaseObject *)*puVar1 != (BaseObject *)0x0) {
        BaseObject::returnToPool((BaseObject *)*puVar1);
      }
    }
    pSVar4 = *(SkinData **)(pSVar6 + 8);
    if (*(SkinData **)(pSVar6 + 8) == (SkinData *)0x0) {
      pSVar4 = pSVar6 + 0x10;
      bVar3 = *(SkinData **)*(SkinData **)pSVar4 != pSVar6;
      pSVar6 = *(SkinData **)pSVar4;
      if (bVar3) {
        do {
          lVar5 = *(long *)pSVar4;
          pSVar4 = (SkinData *)(lVar5 + 0x10);
          pSVar6 = *(SkinData **)pSVar4;
        } while (*(long *)pSVar6 != lVar5);
      }
    }
    else {
      do {
        pSVar6 = pSVar4;
        pSVar4 = *(SkinData **)pSVar6;
      } while (*(SkinData **)pSVar6 != (SkinData *)0x0);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x10),"",0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  *(SkinData **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

