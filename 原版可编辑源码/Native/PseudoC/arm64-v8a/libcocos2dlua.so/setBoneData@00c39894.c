
/* cocostudio::Bone::setBoneData(cocostudio::BoneData*) */

void __thiscall cocostudio::Bone::setBoneData(Bone *this,BoneData *param_1)

{
  ulong uVar1;
  BoneData *pBVar2;
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x2f8);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (BoneData *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x2f8);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(BoneData **)(this + 0x2f8) = param_1;
    this_00 = (Ref *)param_1;
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x1a8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_1 + 0x58)) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    pBVar2 = *(BoneData **)(param_1 + 0x68);
    if (((byte)param_1[0x58] & 1) == 0) {
      pBVar2 = param_1 + 0x59;
      uVar1 = (ulong)((byte)param_1[0x58] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1a8),(char *)pBVar2,uVar1);
    this_00 = *(Ref **)(this + 0x2f8);
  }
  (**(code **)(*(long *)this + 0x28))(this,*(undefined4 *)(this_00 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x00c39934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x310) + 0x10))(*(long **)(this + 0x310),param_1);
  return;
}

