
/* v8::internal::ScopeIterator::Restart() */

void __thiscall v8::internal::ScopeIterator::Restart(ScopeIterator *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(*(FrameInspector **)(this + 0x10) + 0x38);
  uVar1 = FrameInspector::GetContext(*(FrameInspector **)(this + 0x10));
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x48);
  UnwrapEvaluationContext(this);
  return;
}

