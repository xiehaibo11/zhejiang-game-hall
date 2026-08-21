
/* v8::internal::compiler::LiveRange::AdvanceLastProcessedMarker(v8::internal::compiler::UseInterval*,
   v8::internal::compiler::LifetimePosition) const */

void __thiscall
v8::internal::compiler::LiveRange::AdvanceLastProcessedMarker
          (LiveRange *this,uint *param_1,int param_3)

{
  uint uVar1;
  
  if ((param_1 != (uint *)0x0) && (uVar1 = *param_1, (int)uVar1 <= param_3)) {
    if (*(int **)(this + 0x30) == (int *)0x0) {
      if (0x7fffffff < uVar1) {
        return;
      }
    }
    else if ((int)uVar1 <= **(int **)(this + 0x30)) {
      return;
    }
    *(uint **)(this + 0x30) = param_1;
  }
  return;
}

