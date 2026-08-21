
/* v8::internal::Isolate::LogObjectRelocation() */

bool __thiscall v8::internal::Isolate::LogObjectRelocation(Isolate *this)

{
  ulong uVar1;
  
  uVar1 = Logger::is_logging(*(Logger **)(this + 0x9558));
  if ((((uVar1 & 1) == 0) && (this[0xb7fc] == (Isolate)0x0)) &&
     (uVar1 = (**(code **)(**(long **)(this + 0x9558) + 0x88))(), (uVar1 & 1) == 0)) {
    if ((*(long *)(this + 0xb6d0) == 0) || (*(char *)(*(long *)(this + 0xb6d0) + 0x38) == '\0')) {
      return *(long *)(this + 0x9458) != *(long *)(this + 0x9460);
    }
  }
  return true;
}

