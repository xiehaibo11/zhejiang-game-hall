
/* v8::internal::Logger::is_logging() */

bool __thiscall v8::internal::Logger::is_logging(Logger *this)

{
  if (*(char *)(*(long *)(this + 8) + 0xb7fc) != '\0') {
    return false;
  }
  return this[0x20] != (Logger)0x0;
}

