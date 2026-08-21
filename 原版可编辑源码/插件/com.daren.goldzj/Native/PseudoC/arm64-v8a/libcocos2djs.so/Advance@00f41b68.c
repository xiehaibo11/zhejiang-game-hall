
/* v8::internal::JavaScriptFrameIterator::Advance() */

void __thiscall v8::internal::JavaScriptFrameIterator::Advance(JavaScriptFrameIterator *this)

{
  uint uVar1;
  
  do {
    StackFrameIterator::Advance((StackFrameIterator *)this);
    if (*(long **)(this + 0x588) == (long *)0x0) {
      return;
    }
    uVar1 = (**(code **)(**(long **)(this + 0x588) + 8))();
  } while ((0x14 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x119010U) == 0));
  return;
}

