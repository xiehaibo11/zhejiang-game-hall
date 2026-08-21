
/* cocos2d::renderer::MaskAssembler::setClearSubHandle(cocos2d::renderer::Assembler*) */

void __thiscall
cocos2d::renderer::MaskAssembler::setClearSubHandle(MaskAssembler *this,Assembler *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xb8);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Assembler **)(this + 0xb8) = param_1;
    if (param_1 != (Assembler *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

