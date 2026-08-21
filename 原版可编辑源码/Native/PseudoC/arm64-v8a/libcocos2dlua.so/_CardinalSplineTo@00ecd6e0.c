
/* non-virtual thunk to cocos2d::CardinalSplineTo::~CardinalSplineTo() */

void __thiscall cocos2d::CardinalSplineTo::~CardinalSplineTo(CardinalSplineTo *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)this = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

