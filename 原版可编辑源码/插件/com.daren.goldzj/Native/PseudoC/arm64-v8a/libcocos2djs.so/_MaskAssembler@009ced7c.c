
/* cocos2d::renderer::MaskAssembler::~MaskAssembler() */

void __thiscall cocos2d::renderer::MaskAssembler::~MaskAssembler(MaskAssembler *this)

{
  *(undefined ***)this = &PTR__MaskAssembler_01c6b640;
  if (*(Ref **)(this + 0xb0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb0));
  }
  if (*(Ref **)(this + 0xb8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb8));
  }
  SimpleSprite2D::~SimpleSprite2D((SimpleSprite2D *)this);
  operator_delete(this);
  return;
}

