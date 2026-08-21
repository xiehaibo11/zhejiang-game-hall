
/* cocos2d::CardinalSplineTo::~CardinalSplineTo() */

void __thiscall cocos2d::CardinalSplineTo::~CardinalSplineTo(CardinalSplineTo *this)

{
  *(undefined ***)this = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  Action::~Action((Action *)this);
  return;
}

