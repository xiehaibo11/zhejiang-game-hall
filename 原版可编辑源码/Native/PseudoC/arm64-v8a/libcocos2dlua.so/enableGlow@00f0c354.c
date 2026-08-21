
/* cocos2d::Label::enableGlow(cocos2d::Color4B const&) */

void __thiscall cocos2d::Label::enableGlow(Label *this,Color4B *param_1)

{
  long lVar1;
  float fVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 uStack_48;
  undefined3 uStack_47;
  ulong uStack_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x308) == 0) {
    if (this[0x388] == (Label)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_70,(basic_string *)(this + 0x360));
      uStack_58 = *(undefined8 *)(this + 0x378);
      uStack_50 = (undefined4)*(undefined8 *)(this + 0x380);
      local_4c = (undefined4)((ulong)*(undefined8 *)(this + 0x380) >> 0x20);
      uStack_44 = *(ulong *)(this + 0x38c) & 0xffffffff00000000;
      _uStack_48 = CONCAT31((int3)((ulong)*(undefined8 *)(this + 900) >> 0x28),1);
      (**(code **)(*(long *)this + 0x530))(this,local_70);
      this[0x30c] = (Label)0x1;
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
    }
    *(undefined4 *)(this + 0x49c) = 3;
    fVar2 = (float)NEON_ucvtf((uint)(byte)*param_1);
    *(float *)(this + 0x4a0) = fVar2 / 255.0;
    fVar2 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
    *(float *)(this + 0x4a4) = fVar2 / 255.0;
    fVar2 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
    *(float *)(this + 0x4a8) = fVar2 / 255.0;
    fVar2 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
    *(float *)(this + 0x4ac) = fVar2 / 255.0;
    (**(code **)(*(long *)this + 0x600))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

