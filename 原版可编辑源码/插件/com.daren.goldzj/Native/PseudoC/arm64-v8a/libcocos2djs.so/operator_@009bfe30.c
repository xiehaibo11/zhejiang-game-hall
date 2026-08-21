
/* cocos2d::renderer::InputAssembler::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::InputAssembler
   const&) */

InputAssembler * __thiscall
cocos2d::renderer::InputAssembler::operator=(InputAssembler *this,InputAssembler *param_1)

{
  Ref *this_00;
  Ref *this_01;
  
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  this_01 = *(Ref **)param_1;
  *(Ref **)this = this_01;
  this_00 = *(Ref **)(param_1 + 8);
  *(Ref **)(this + 8) = this_00;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined2 *)(this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  if (this_01 != (Ref *)0x0) {
    Ref::retain(this_01);
    this_00 = *(Ref **)(this + 8);
  }
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  return this;
}

