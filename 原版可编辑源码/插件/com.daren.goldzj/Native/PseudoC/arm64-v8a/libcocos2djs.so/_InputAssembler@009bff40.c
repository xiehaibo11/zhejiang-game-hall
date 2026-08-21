
/* cocos2d::renderer::InputAssembler::~InputAssembler() */

void __thiscall cocos2d::renderer::InputAssembler::~InputAssembler(InputAssembler *this)

{
                    /* try { // try from 009bff48 to 00ac002b has its CatchHandler @ 009bfd9c */
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  return;
}

