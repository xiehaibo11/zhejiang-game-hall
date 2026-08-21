
/* v8::internal::Logger::IntPtrTEvent(char const*, long) */

void __thiscall v8::internal::Logger::IntPtrTEvent(Logger *this,char *param_1,long param_2)

{
  if (FLAG_log != '\0') {
    UncheckedIntPtrTEvent(this,param_1,param_2);
    return;
  }
  return;
}

