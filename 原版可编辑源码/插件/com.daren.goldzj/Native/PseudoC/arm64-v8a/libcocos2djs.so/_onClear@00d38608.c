
/* dragonBones::ArmatureDisplayData::_onClear() */

void __thiscall dragonBones::ArmatureDisplayData::_onClear(ArmatureDisplayData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  puVar3 = *(undefined8 **)(this + 0x70);
  puVar1 = *(undefined8 **)(this + 0x78);
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar4;
  *(undefined8 *)(this + 0x60) = 0;
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      BaseObject::returnToPool((BaseObject *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x70);
  }
  this[0x68] = (ArmatureDisplayData)0x0;
  *(undefined8 **)(this + 0x78) = puVar3;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}

