
/* v8::internal::IC::TraceIC(char const*, v8::internal::Handle<v8::internal::Object>) */

void __thiscall v8::internal::IC::TraceIC(IC *this,undefined8 param_1,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (TracingFlags::ic_stats == 0) {
    return;
  }
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
    uVar2 = *(undefined4 *)(this + 0x18);
  }
  TraceIC(this,param_1,param_3,uVar2,uVar1);
  return;
}

