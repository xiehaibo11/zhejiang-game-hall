
/* v8::internal::compiler::LiveRange::CanCover(v8::internal::compiler::LifetimePosition) const */

bool __thiscall v8::internal::compiler::LiveRange::CanCover(LiveRange *this,int param_2)

{
  if ((*(int **)(this + 0x10) != (int *)0x0) && (**(int **)(this + 0x10) <= param_2)) {
    return param_2 < *(int *)(*(long *)(this + 8) + 4);
  }
  return false;
}

