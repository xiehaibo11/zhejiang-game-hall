
/* dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState() */

void __thiscall
dragonBones::IKConstraintTimelineState::~IKConstraintTimelineState(IKConstraintTimelineState *this)

{
                    /* catch() { ... } // from try @ 00d7acf0 with catch @ 00d7b44c */
                    /* catch() { ... } // from try @ 00d7abe4 with catch @ 00d7b45c */
  *(undefined ***)this = &PTR__IKConstraintTimelineState_016d6680;
  ConstraintTimelineState::_onClear((ConstraintTimelineState *)this);
  *(undefined8 *)(this + 0xc0) = 0;
                    /* catch() { ... } // from try @ 00d7ab8c with catch @ 00d7b46c */
  return;
}

