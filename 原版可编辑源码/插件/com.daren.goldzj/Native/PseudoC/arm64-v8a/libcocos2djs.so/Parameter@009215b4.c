
/* cocos2d::renderer::Technique::Parameter::Parameter(cocos2d::renderer::Technique::Parameter&&) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter(Parameter *this,Parameter *param_1)

{
  ulong uVar1;
  Parameter *pPVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  this[0x11] = (Parameter)0x0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  if (this != param_1) {
    freeValue(this);
    uVar1 = (ulong)((byte)param_1[0x10] >> 1);
    pPVar2 = param_1 + 0x11;
    if (((byte)param_1[0x10] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x18);
      pPVar2 = *(Parameter **)(param_1 + 0x20);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),(char *)pPVar2,uVar1);
    this[0x31] = param_1[0x31];
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    this[0x30] = param_1[0x30];
    *(undefined2 *)(this + 0x40) = *(undefined2 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

