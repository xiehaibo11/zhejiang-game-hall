
/* v8::internal::Log::MessageBuilder::AppendString(char const*, unsigned long) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendString(MessageBuilder *this,char *param_1,ulong param_2)

{
  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      AppendCharacter(this,*param_1);
      param_1 = param_1 + 1;
    }
  }
  return;
}

