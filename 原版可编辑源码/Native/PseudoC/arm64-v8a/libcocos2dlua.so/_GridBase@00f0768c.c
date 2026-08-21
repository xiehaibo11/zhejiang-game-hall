
/* cocos2d::GridBase::~GridBase() */

void __thiscall cocos2d::GridBase::~GridBase(GridBase *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f07514 with catch @ 00f07690
                        */
  *(undefined ***)this = &PTR__GridBase_016fd210;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

