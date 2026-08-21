
/* dragonBones::IKConstraintTimelineState::_onUpdateFrame() */

void __thiscall
dragonBones::IKConstraintTimelineState::_onUpdateFrame(IKConstraintTimelineState *this)

{
  long *plVar1;
  
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  plVar1 = *(long **)(this + 0xb8);
  *(float *)((long)plVar1 + 0x3c) =
       *(float *)(this + 0xc0) + *(float *)(this + 0xc4) * *(float *)(this + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00d26084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}

