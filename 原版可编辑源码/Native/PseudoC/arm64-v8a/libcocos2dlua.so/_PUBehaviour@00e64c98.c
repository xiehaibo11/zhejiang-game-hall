
/* cocos2d::PUBehaviour::~PUBehaviour() */

void __thiscall cocos2d::PUBehaviour::~PUBehaviour(PUBehaviour *this)

{
  *(undefined ***)this = &PTR__PUBehaviour_016f36f0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

