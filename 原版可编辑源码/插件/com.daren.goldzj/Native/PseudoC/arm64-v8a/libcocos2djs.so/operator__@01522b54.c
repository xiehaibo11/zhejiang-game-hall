
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(char const*) */

MessageBuilder * __thiscall
v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    for (; sVar1 != 0; sVar1 = sVar1 - 1) {
      AppendCharacter(this,*param_1);
      param_1 = param_1 + 1;
    }
  }
  return this;
}

