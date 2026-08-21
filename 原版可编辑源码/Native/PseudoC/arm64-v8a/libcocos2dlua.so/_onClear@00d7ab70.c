
/* dragonBones::IKConstraintTimelineState::_onClear() */

void __thiscall dragonBones::IKConstraintTimelineState::_onClear(IKConstraintTimelineState *this)

{
                    /* try { // try from 00d7ab74 to 00e7ab8b has its CatchHandler @ 00d7b4f8 */
  ConstraintTimelineState::_onClear((ConstraintTimelineState *)this);
  *(undefined8 *)(this + 0xc0) = 0;
                    /* try { // try from 00d7ab8c to 00e7ab9f has its CatchHandler @ 00d7b46c */
  return;
}

