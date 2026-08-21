
/* cocos2d::renderer::InputAssembler::clear() */

void __thiscall cocos2d::renderer::InputAssembler::clear(InputAssembler *this)

{
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x10) = 4;
  *(undefined8 *)(this + 0x14) = 0xffffffff00000000;
                    /* catch() { ... } // from try @ 009bfe1c with catch @ 009bffbc */
  return;
}

