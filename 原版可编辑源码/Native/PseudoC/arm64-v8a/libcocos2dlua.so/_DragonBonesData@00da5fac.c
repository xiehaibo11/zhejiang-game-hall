
/* dragonBones::DragonBonesData::~DragonBonesData() */

void __thiscall dragonBones::DragonBonesData::~DragonBonesData(DragonBonesData *this)

{
  byte bVar1;
  DragonBonesData DVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  *(undefined ***)this = &PTR__DragonBonesData_016d8598;
  _onClear(this);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  pbVar6 = *(byte **)(this + 0x78);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x80);
    pbVar3 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar3 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x78);
    }
    *(byte **)(this + 0x80) = pbVar6;
    operator_delete(pbVar3);
  }
  pvVar4 = *(void **)(this + 0x60);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  if (((byte)this[0x30] & 1) == 0) {
    DVar2 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    DVar2 = this[0x18];
  }
  if (((byte)DVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
    return;
  }
  return;
}

