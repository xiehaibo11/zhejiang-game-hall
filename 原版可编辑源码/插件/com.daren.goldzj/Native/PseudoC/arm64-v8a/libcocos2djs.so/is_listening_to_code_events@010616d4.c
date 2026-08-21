
/* v8::internal::Logger::is_listening_to_code_events() */

bool __thiscall v8::internal::Logger::is_listening_to_code_events(Logger *this)

{
  if ((*(char *)(*(long *)(this + 8) + 0xb7fc) == '\0') && (this[0x20] != (Logger)0x0)) {
    return true;
  }
  return *(long *)(this + 0x48) != 0;
}

