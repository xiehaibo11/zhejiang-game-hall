
/* v8::internal::FrameSummary::AreSourcePositionsAvailable() const */

undefined8 __thiscall v8::internal::FrameSummary::AreSourcePositionsAvailable(FrameSummary *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 8) != 0) {
    return 1;
  }
  uVar1 = JavaScriptFrameSummary::AreSourcePositionsAvailable((JavaScriptFrameSummary *)this);
  return uVar1;
}

