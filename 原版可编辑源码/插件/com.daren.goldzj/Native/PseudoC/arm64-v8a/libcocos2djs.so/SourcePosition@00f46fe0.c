
/* v8::internal::FrameSummary::SourcePosition() const */

void __thiscall v8::internal::FrameSummary::SourcePosition(FrameSummary *this)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 != 2) && (iVar1 != 1)) {
    if (iVar1 == 0) {
      local_18 = **(undefined8 **)(this + 0x20);
      AbstractCode::SourcePosition((AbstractCode *)&local_18,*(int *)(this + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  WasmFrameSummary::SourcePosition((WasmFrameSummary *)this);
  return;
}

