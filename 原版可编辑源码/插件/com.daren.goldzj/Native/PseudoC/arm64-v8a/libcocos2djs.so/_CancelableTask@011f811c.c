
/* non-virtual thunk to v8::internal::CancelableTask::~CancelableTask() */

void __thiscall v8::internal::CancelableTask::~CancelableTask(CancelableTask *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x11f8120);
  (*pcVar1)();
}

