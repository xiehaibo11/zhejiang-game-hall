
/* btDefaultMotionState::~btDefaultMotionState() */

void __thiscall btDefaultMotionState::~btDefaultMotionState(btDefaultMotionState *this)

{
  btAlignedFreeInternal(this);
  return;
}

