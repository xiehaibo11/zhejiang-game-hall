
/* dragonBones::DragonBonesData::_onClear() */

void __thiscall dragonBones::DragonBonesData::_onClear(DragonBonesData *this)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  void *pvVar4;
  DragonBonesData *pDVar5;
  long lVar6;
  DragonBonesData *pDVar7;
  byte *pbVar8;
  
  pDVar7 = *(DragonBonesData **)(this + 0x90);
  while (pDVar7 != this + 0x98) {
    BaseObject::returnToPool(*(BaseObject **)(pDVar7 + 0x38));
    pDVar5 = *(DragonBonesData **)(pDVar7 + 8);
    if (*(DragonBonesData **)(pDVar7 + 8) == (DragonBonesData *)0x0) {
      pDVar5 = pDVar7 + 0x10;
      bVar3 = *(DragonBonesData **)*(DragonBonesData **)pDVar5 != pDVar7;
      pDVar7 = *(DragonBonesData **)pDVar5;
      if (bVar3) {
        do {
          lVar6 = *(long *)pDVar5;
          pDVar5 = (DragonBonesData *)(lVar6 + 0x10);
          pDVar7 = *(DragonBonesData **)pDVar5;
        } while (*(long *)pDVar7 != lVar6);
      }
    }
    else {
      do {
        pDVar7 = pDVar5;
        pDVar5 = *(DragonBonesData **)pDVar7;
      } while (*(DragonBonesData **)pDVar7 != (DragonBonesData *)0x0);
    }
  }
  pvVar4 = *(void **)(this + 0xa8);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (*(BaseObject **)(this + 0xe0) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0xe0));
  }
  this[0xd] = (DragonBonesData)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  pbVar1 = *(byte **)(this + 0x78);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  pbVar8 = *(byte **)(this + 0x80);
  while (pbVar2 = pbVar8, pbVar2 != pbVar1) {
    pbVar8 = pbVar2 + -0x18;
    if ((*pbVar8 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  *(byte **)(this + 0x80) = pbVar1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(DragonBonesData **)(this + 0x90) = this + 0x98;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}

