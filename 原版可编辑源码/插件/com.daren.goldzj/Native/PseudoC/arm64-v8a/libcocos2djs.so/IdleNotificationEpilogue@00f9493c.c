
/* v8::internal::Heap::IdleNotificationEpilogue(v8::internal::GCIdleTimeAction,
   v8::internal::GCIdleTimeHeapState, double, double) */

void __thiscall
v8::internal::Heap::IdleNotificationEpilogue
          (double param_1,double param_2,Heap *this,byte param_4,GCIdleTimeHeapState *param_5)

{
  long *plVar1;
  double dVar2;
  
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar2 = (double)(**(code **)(*plVar1 + 0x78))();
  *(undefined4 *)(this + 0xe0) = 0;
  *(double *)(this + 0x7e8) = dVar2 * 1000.0;
  if (FLAG_trace_idle_notification != '\0') {
    Isolate::PrintWithTimestamp
              (*(char **)(this + 0x30),param_2 - param_1,
               (param_2 - param_1) - (param_2 - dVar2 * 1000.0),
               "Idle notification: requested idle time %.2f ms, used idle time %.2f ms, deadline usage %.2f ms ["
              );
    if (param_4 < 3) {
      PrintF((&PTR_s_done_018a2150_5_01ca7f80)[(char)param_4]);
    }
    PrintF("]");
    if (FLAG_trace_idle_notification_verbose != '\0') {
      PrintF("[");
      GCIdleTimeHeapState::Print(param_5);
      PrintF("]");
    }
    PrintF("\n");
    return;
  }
  return;
}

