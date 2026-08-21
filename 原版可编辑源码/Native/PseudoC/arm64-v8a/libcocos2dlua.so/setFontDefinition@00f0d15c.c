
/* cocos2d::Label::setFontDefinition(cocos2d::FontDefinition const&) */

void __thiscall cocos2d::Label::setFontDefinition(Label *this,FontDefinition *param_1)

{
  ulong uVar1;
  FontDefinition *pFVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  Color4B aCStack_48 [3];
  FontDefinition local_45;
  Color4B aCStack_40 [3];
  FontDefinition local_3d;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x3a0) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pFVar2 = *(FontDefinition **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pFVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x3a0),(char *)pFVar2,uVar1);
  }
  *(float *)(this + 0x3b8) = (float)*(int *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x450) = *(undefined8 *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = 0.0;
  if (*(int *)(this + 0x684) != 3) {
    fVar5 = *(float *)(param_1 + 0x2c);
  }
  if ((fVar5 != *(float *)(this + 0x44c)) || (*(float *)(this + 0x448) != fVar4)) {
    *(float *)(this + 0x448) = fVar4;
    *(float *)(this + 0x44c) = fVar5;
    *(float *)(this + 0x440) = fVar4;
    *(float *)(this + 0x444) = fVar5;
    *(float *)(this + 0x43c) = fVar4;
    this[0x30c] = (Label)0x1;
    if ((*(int *)(this + 0x684) == 2) && (0.0 < *(float *)(this + 0x688))) {
      restoreFontSize(this);
    }
  }
  Color4B::Color4B(aCStack_40,(Color3B *)(param_1 + 0x30),0xff);
  local_3d = param_1[0x33];
  (**(code **)(*(long *)this + 0x598))(this,aCStack_40);
  if ((param_1[0x48] != (FontDefinition)0x0) && (0.0 < *(float *)(param_1 + 0x50))) {
    Color4B::Color4B(aCStack_48,(Color3B *)(param_1 + 0x49),0xff);
    local_45 = param_1[0x4c];
    (**(code **)(*(long *)this + 0x5a8))(this,aCStack_48,(int)*(float *)(param_1 + 0x50));
  }
  if (param_1[0x34] != (FontDefinition)0x0) {
    Color4B::Color4B(aCStack_48,'\0','\0','\0',(uchar)(int)(*(float *)(param_1 + 0x44) * 255.0));
    (**(code **)(*(long *)this + 0x5a0))
              (this,aCStack_48,param_1 + 0x38,(int)*(float *)(param_1 + 0x40));
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

