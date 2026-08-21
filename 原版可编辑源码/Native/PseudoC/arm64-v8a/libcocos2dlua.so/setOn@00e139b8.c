
/* cocos2d::extension::ControlSwitch::setOn(bool, bool) */

void __thiscall
cocos2d::extension::ControlSwitch::setOn(ControlSwitch *this,bool param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ControlSwitchSprite *this_00;
  float fVar5;
  float fVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00e139cc to 00f13a4f has its CatchHandler @ 00e139cc
                       catch() { ... } // from try @ 00e139cc with catch @ 00e139cc
                       catch() { ... } // from try @ 00e13a7c with catch @ 00e139cc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(ControlSwitchSprite **)(this + 0x358);
  this[0x365] = (ControlSwitch)param_1;
  if (param_2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"sliderXPosition");
    fVar6 = *(float *)(*(long **)(this + 0x358) + 0xa7);
    lVar3 = **(long **)(this + 0x358);
    if (this[0x365] == (ControlSwitch)0x0) {
      fVar5 = (float)(**(code **)(lVar3 + 0x688))();
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x678))();
    }
                    /* try { // try from 00e13a74 to 00f13a7b has its CatchHandler @ 00e13b18 */
                    /* try { // try from 00e13a7c to 00f13b4b has its CatchHandler @ 00e139cc */
    uVar2 = ActionTween::create(0.2,(basic_string *)local_50,fVar6,fVar5);
    (**(code **)(*(long *)this_00 + 0x3a8))(this_00,uVar2);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    if (param_1) {
      pcVar4 = *(code **)(*(long *)this_00 + 0x678);
    }
    else {
      pcVar4 = *(code **)(*(long *)this_00 + 0x688);
    }
    fVar5 = (float)(*pcVar4)(this_00);
    fVar6 = *(float *)(this_00 + 0x540);
                    /* try { // try from 00e13a50 to 00f13a5b has its CatchHandler @ 00e13b04 */
    if ((*(float *)(this_00 + 0x540) < fVar5) &&
       (fVar6 = fVar5, *(float *)(this_00 + 0x53c) <= fVar5)) {
      fVar6 = *(float *)(this_00 + 0x53c);
    }
    *(float *)(this_00 + 0x538) = fVar6;
    ControlSwitchSprite::needsLayout(this_00);
  }
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

