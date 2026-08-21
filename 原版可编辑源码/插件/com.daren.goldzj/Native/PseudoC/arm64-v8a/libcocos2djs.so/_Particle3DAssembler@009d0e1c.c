
/* cocos2d::renderer::Particle3DAssembler::~Particle3DAssembler() */

void __thiscall
cocos2d::renderer::Particle3DAssembler::~Particle3DAssembler(Particle3DAssembler *this)

{
  *(undefined ***)this = &PTR__Particle3DAssembler_01c6bb00;
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  Assembler::~Assembler((Assembler *)this);
  return;
}

