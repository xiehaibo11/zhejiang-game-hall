
/* v8::internal::Logger::CodeMovingGCEvent() */

void __thiscall v8::internal::Logger::CodeMovingGCEvent(Logger *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x88))();
  if (((((uVar1 & 1) != 0) && (**(char **)(this + 0x28) == '\0')) &&
      (*(long *)(*(char **)(this + 0x28) + 8) != 0)) && (FLAG_ll_prof != '\0')) {
    base::OS::SignalCodeMovingGC();
    return;
  }
  return;
}

