
/* cocos2d::Label::setTTFConfigInternal(cocos2d::_ttfConfig const&) */

void __thiscall cocos2d::Label::setTTFConfigInternal(Label *this,_ttfConfig *param_1)

{
  ulong uVar1;
  _ttfConfig *p_Var2;
  Label LVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Size aSStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar5 = FontAtlasCache::getFontAtlasTTF(param_1);
  if (lVar5 == 0) {
    reset(this);
    uVar6 = 0;
    goto LAB_00f0afac;
  }
  *(undefined4 *)(this + 0x308) = 0;
  (**(code **)(*(long *)this + 0x5f0))(this,lVar5,param_1[0x28],1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x360) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    p_Var2 = *(_ttfConfig **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      p_Var2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x360),(char *)p_Var2,uVar1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x24);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x38c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 900) = uVar6;
  *(undefined8 *)(this + 0x380) = uVar9;
  *(undefined8 *)(this + 0x378) = uVar8;
  if (*(int *)(this + 0x38c) < 1) {
    lVar5 = *(long *)this;
    *(undefined4 *)(this + 0x49c) = 0;
  }
  else {
    lVar5 = *(long *)this;
    this[0x388] = (Label)0x0;
    *(undefined2 *)(this + 0x60c) = 0;
    *(undefined4 *)(this + 0x49c) = 1;
  }
  (**(code **)(lVar5 + 0x600))(this);
  if (this[0x390] != (Label)0x0) {
    (**(code **)(*(long *)this + 0x1b0))(0x41400000,this);
  }
  if ((this[0x391] == (Label)0x0) || (this[0x68c] != (Label)0x0)) {
    if (this[0x392] != (Label)0x0) goto LAB_00f0ae98;
LAB_00f0aea0:
    LVar3 = this[0x393];
  }
  else {
    Size::Size(aSStack_40,0.9,0.0);
    (**(code **)(*(long *)this + 0x5a0))(this,&Color4B::WHITE,aSStack_40,0);
    if ((*(int *)(this + 0x308) != 3) &&
       (fVar7 = *(float *)(this + 0x42c) + 1.0, *(float *)(this + 0x42c) != fVar7)) {
      *(float *)(this + 0x42c) = fVar7;
      this[0x30c] = (Label)0x1;
    }
    this[0x68c] = (Label)0x1;
    if (this[0x392] == (Label)0x0) goto LAB_00f0aea0;
LAB_00f0ae98:
    if (*(long *)(this + 0x690) != 0) goto LAB_00f0aea0;
    uVar6 = DrawNode::create(2.0);
    *(undefined8 *)(this + 0x690) = uVar6;
    (**(code **)(*(long *)this + 0x210))(this,uVar6,100000);
    this[0x30c] = (Label)0x1;
    LVar3 = this[0x393];
  }
  if ((LVar3 == (Label)0x0) || (this[0x698] != (Label)0x0)) {
    uVar6 = 1;
  }
  else {
    if (*(long *)(this + 0x690) == 0) {
      uVar6 = DrawNode::create(2.0);
      *(undefined8 *)(this + 0x690) = uVar6;
      (**(code **)(*(long *)this + 0x210))(this,uVar6,100000);
      this[0x30c] = (Label)0x1;
    }
    uVar6 = 1;
    this[0x698] = (Label)0x1;
  }
LAB_00f0afac:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

