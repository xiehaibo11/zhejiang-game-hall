
/* v8::internal::StackFrameIterator::StackFrameIterator(v8::internal::Isolate*) */

void __thiscall
v8::internal::StackFrameIterator::StackFrameIterator(StackFrameIterator *this,Isolate *param_1)

{
  StackFrameIteratorBase::StackFrameIteratorBase((StackFrameIteratorBase *)this,param_1,true);
  Reset(this,(ThreadLocalTop *)(param_1 + 0x2bb8));
  return;
}

