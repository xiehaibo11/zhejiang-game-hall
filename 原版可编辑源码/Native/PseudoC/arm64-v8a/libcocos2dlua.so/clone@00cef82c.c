
/* cocosbuilder::CCBSoundEffect::clone() const */

Action * __thiscall cocosbuilder::CCBSoundEffect::clone(CCBSoundEffect *this)

{
  ulong uVar1;
  CCBSoundEffect *pCVar2;
  undefined4 uVar3;
  Action *this_00;
  undefined8 uVar4;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    cocos2d::Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined ***)this_00 = &PTR__CCBSoundEffect_016cf1a0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016cf200;
  }
  uVar4 = *(undefined8 *)(this + 0x70);
  uVar3 = *(undefined4 *)(this + 0x78);
  if (this_00 != (Action *)this) {
    uVar1 = *(ulong *)(this + 0x60);
    pCVar2 = *(CCBSoundEffect **)(this + 0x68);
    if (((byte)this[0x58] & 1) == 0) {
      pCVar2 = this + 0x59;
      uVar1 = (ulong)((byte)this[0x58] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x58),(char *)pCVar2,uVar1);
  }
  *(undefined8 *)(this_00 + 0x70) = uVar4;
  *(undefined4 *)(this_00 + 0x78) = uVar3;
  cocos2d::Ref::autorelease((Ref *)this_00);
  return this_00;
}

