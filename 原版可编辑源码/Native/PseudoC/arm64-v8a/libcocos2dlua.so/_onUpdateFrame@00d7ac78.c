
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
                    /* try { // try from 00d7acc0 to 00e7acd3 has its CatchHandler @ 00d7b92c */
                    /* WARNING: Could not recover jumptable at 0x00d7acc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}

