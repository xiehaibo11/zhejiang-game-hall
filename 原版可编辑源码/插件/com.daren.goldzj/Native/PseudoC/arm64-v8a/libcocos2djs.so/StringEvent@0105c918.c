
/* v8::internal::Logger::StringEvent(char const*, char const*) */

void __thiscall v8::internal::Logger::StringEvent(Logger *this,char *param_1,char *param_2)

{
  if (FLAG_log != '\0') {
    UncheckedStringEvent(this,param_1,param_2);
    return;
  }
  return;
}

