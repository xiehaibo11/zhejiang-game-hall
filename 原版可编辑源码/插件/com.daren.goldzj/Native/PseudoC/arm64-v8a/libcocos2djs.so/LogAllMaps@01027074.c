
/* v8::internal::Bootstrapper::LogAllMaps() */

void __thiscall v8::internal::Bootstrapper::LogAllMaps(Bootstrapper *this)

{
  ulong uVar1;
  Logger *this_00;
  
  if ((FLAG_trace_maps != '\0') && (*(char *)(*(long *)this + 0xb6ba) == '\0')) {
    this_00 = *(Logger **)(*(long *)this + 0x9558);
    uVar1 = Logger::is_logging(this_00);
    if ((uVar1 & 1) != 0) {
      Logger::LogAllMaps(this_00);
      return;
    }
  }
  return;
}

