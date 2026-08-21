
/* dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState() */

void __thiscall
dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState(IKConstraintTimelineState *this)

{
                    /* catch() { ... } // from try @ 00d7aa80 with catch @ 00d7b47c */
                    /* catch() { ... } // from try @ 00d7aa28 with catch @ 00d7b48c */
  *(undefined ***)this = &PTR__IKConstraintTimelineState_016d6680;
  ConstraintTimelineState::_onClear((ConstraintTimelineState *)this);
                    /* catch() { ... } // from try @ 00d7b028 with catch @ 00d7b49c */
  operator_delete(this);
  return;
}

