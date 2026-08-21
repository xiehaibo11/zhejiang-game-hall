
/* v8::internal::StackFrameIterator::StackFrameIterator(v8::internal::Isolate*,
   v8::internal::ThreadLocalTop*) */

void __thiscall
v8::internal::StackFrameIterator::StackFrameIterator
          (StackFrameIterator *this,Isolate *param_1,ThreadLocalTop *param_2)

{
  StackFrameIteratorBase::StackFrameIteratorBase((StackFrameIteratorBase *)this,param_1,true);
  Reset(this,param_2);
  return;
}

