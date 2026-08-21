
/* v8::internal::compiler::FrameAccessState::SetFrameAccessToDefault() */

void __thiscall
v8::internal::compiler::FrameAccessState::SetFrameAccessToDefault(FrameAccessState *this)

{
  this[8] = (FrameAccessState)
            (this[0x10] != (FrameAccessState)0x0 && FLAG_turbo_sp_frame_access == '\0');
  return;
}

