
/* cocos2d::CatmullRomBy::~CatmullRomBy() */

void __thiscall cocos2d::CatmullRomBy::~CatmullRomBy(CatmullRomBy *this)

{
                    /* catch() { ... } // from try @ 00eceb00 with catch @ 00ecea78 */
  *(undefined ***)this = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

