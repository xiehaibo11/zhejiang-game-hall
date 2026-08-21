
/* v8::internal::compiler::FrameAccessState::MarkHasFrame(bool) */

void __thiscall
v8::internal::compiler::FrameAccessState::MarkHasFrame(FrameAccessState *this,bool param_1)

{
  this[0x10] = (FrameAccessState)param_1;
  this[8] = (FrameAccessState)(FLAG_turbo_sp_frame_access == '\0' && param_1);
  return;
}

