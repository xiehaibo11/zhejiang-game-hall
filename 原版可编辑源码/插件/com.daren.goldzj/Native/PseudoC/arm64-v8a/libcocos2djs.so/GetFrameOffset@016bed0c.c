
/* v8::internal::compiler::FrameAccessState::GetFrameOffset(int) const */

uint __thiscall
v8::internal::compiler::FrameAccessState::GetFrameOffset(FrameAccessState *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 * -8 + 8;
  if (this[8] != (FrameAccessState)0x0) {
    return uVar1;
  }
  if (this[0x10] == (FrameAccessState)0x0) {
    iVar2 = -2;
  }
  else {
    iVar2 = *(int *)(*(long *)this + 4) + -2;
  }
  return uVar1 + (*(int *)(this + 0xc) + iVar2) * 8 | 1;
}

