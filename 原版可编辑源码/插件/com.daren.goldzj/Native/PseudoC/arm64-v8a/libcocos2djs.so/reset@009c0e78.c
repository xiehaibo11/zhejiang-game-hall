
/* cocos2d::renderer::Model::reset() */

void __thiscall cocos2d::renderer::Model::reset(Model *this)

{
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(Ref **)this != (Ref *)0x0) {
                    /* try { // try from 009c0ea0 to 00ac0eb7 has its CatchHandler @ 009c1074 */
    Ref::release(*(Ref **)this);
    *(undefined8 *)this = 0;
  }
  InputAssembler::clear((InputAssembler *)(this + 0x50));
  return;
}

