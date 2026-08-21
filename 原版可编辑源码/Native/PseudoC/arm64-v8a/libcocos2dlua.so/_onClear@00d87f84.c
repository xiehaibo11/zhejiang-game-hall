
/* dragonBones::BoneData::_onClear() */

void __thiscall dragonBones::BoneData::_onClear(BoneData *this)

{
  BaseObject *this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00d87340 with catch @ 00d87f88 */
                    /* catch() { ... } // from try @ 00d87650 with catch @ 00d87f8c */
  this_00 = *(BaseObject **)(this + 0x48);
  if (this_00 != (BaseObject *)0x0) {
    BaseObject::returnToPool(this_00);
  }
                    /* catch() { ... } // from try @ 00d87368 with catch @ 00d87fac */
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xd) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

