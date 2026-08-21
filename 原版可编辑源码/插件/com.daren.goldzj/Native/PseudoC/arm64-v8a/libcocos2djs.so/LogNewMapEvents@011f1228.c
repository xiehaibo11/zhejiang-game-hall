
/* v8::internal::StartupDeserializer::LogNewMapEvents() */

void __thiscall v8::internal::StartupDeserializer::LogNewMapEvents(StartupDeserializer *this)

{
  ulong uVar1;
  Logger *this_00;
  
  if (FLAG_trace_maps != '\0') {
    this_00 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar1 = Logger::is_logging(this_00);
    if ((uVar1 & 1) != 0) {
      Logger::LogAllMaps(this_00);
      return;
    }
  }
  return;
}

