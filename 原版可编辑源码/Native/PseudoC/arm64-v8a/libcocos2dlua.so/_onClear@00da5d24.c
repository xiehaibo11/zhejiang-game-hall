
/* dragonBones::DragonBonesData::_onClear() */

void __thiscall dragonBones::DragonBonesData::_onClear(DragonBonesData *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  void *pvVar6;
  DragonBonesData *pDVar7;
  long lVar8;
  DragonBonesData *pDVar9;
  
  pDVar9 = *(DragonBonesData **)(this + 0x90);
  while (pDVar9 != this + 0x98) {
    BaseObject::returnToPool(*(BaseObject **)(pDVar9 + 0x38));
    pDVar7 = *(DragonBonesData **)(pDVar9 + 8);
    if (*(DragonBonesData **)(pDVar9 + 8) == (DragonBonesData *)0x0) {
                    /* catch() { ... } // from try @ 00da5c7c with catch @ 00da5d80 */
      pDVar7 = pDVar9 + 0x10;
      bVar5 = *(DragonBonesData **)*(DragonBonesData **)pDVar7 != pDVar9;
      pDVar9 = *(DragonBonesData **)pDVar7;
      if (bVar5) {
        do {
          lVar8 = *(long *)pDVar7;
          pDVar7 = (DragonBonesData *)(lVar8 + 0x10);
          pDVar9 = *(DragonBonesData **)pDVar7;
        } while (*(long *)pDVar9 != lVar8);
      }
    }
    else {
      do {
        pDVar9 = pDVar7;
        pDVar7 = *(DragonBonesData **)pDVar9;
      } while (*(DragonBonesData **)pDVar9 != (DragonBonesData *)0x0);
    }
  }
  pvVar6 = *(void **)(this + 0xa8);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
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
  pbVar2 = *(byte **)(this + 0x80);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
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

