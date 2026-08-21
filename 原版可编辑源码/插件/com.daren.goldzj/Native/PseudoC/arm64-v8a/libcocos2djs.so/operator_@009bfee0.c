
/* cocos2d::renderer::InputAssembler::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::InputAssembler&&)
    */

InputAssembler * __thiscall
cocos2d::renderer::InputAssembler::operator=(InputAssembler *this,InputAssembler *param_1)

{
  undefined8 uVar1;
  
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined2 *)(this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return this;
}

