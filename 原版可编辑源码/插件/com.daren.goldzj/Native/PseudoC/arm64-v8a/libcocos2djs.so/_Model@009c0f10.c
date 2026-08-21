
/* cocos2d::renderer::Model::~Model() */

void __thiscall cocos2d::renderer::Model::~Model(Model *this)

{
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
    *(undefined8 *)this = 0;
  }
  InputAssembler::clear((InputAssembler *)(this + 0x50));
  InputAssembler::~InputAssembler((InputAssembler *)(this + 0x50));
  Mat4::~Mat4((Mat4 *)(this + 8));
  return;
}

