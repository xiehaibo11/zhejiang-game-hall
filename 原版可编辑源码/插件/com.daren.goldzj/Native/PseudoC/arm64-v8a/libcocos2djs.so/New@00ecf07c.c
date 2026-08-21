
/* v8::MicrotaskQueue::New(v8::Isolate*, v8::MicrotasksPolicy) */

void __thiscall v8::MicrotaskQueue::New(long *param_1_00,MicrotaskQueue *this,Isolate *param_1)

{
  long local_28;
  
  internal::MicrotaskQueue::New((MicrotaskQueue *)this,param_1);
  *(int *)(local_28 + 0x48) = (int)param_1;
  *param_1_00 = local_28;
  return;
}

