
/* v8::internal::Isolate::PushStackTraceAndDie(void*, void*, void*, void*) */

void __thiscall
v8::internal::Isolate::PushStackTraceAndDie
          (Isolate *this,void *param_1,void *param_2,void *param_3,void *param_4)

{
  StackTraceFailureMessage aSStack_8078 [32856];
  
  StackTraceFailureMessage::StackTraceFailureMessage
            (aSStack_8078,this,param_1,param_2,param_3,param_4);
  StackTraceFailureMessage::Print(aSStack_8078);
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

