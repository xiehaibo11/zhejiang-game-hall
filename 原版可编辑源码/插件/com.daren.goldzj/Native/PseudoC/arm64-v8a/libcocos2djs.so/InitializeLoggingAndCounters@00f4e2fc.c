
/* v8::internal::Isolate::InitializeLoggingAndCounters() */

void __thiscall v8::internal::Isolate::InitializeLoggingAndCounters(Isolate *this)

{
  Logger *this_00;
  
  if (*(long *)(this + 0x9558) == 0) {
    this_00 = operator_new(0x88);
    Logger::Logger(this_00,this);
    *(Logger **)(this + 0x9558) = this_00;
  }
  InitializeCounters(this);
  return;
}

