
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(char) */

MessageBuilder * __thiscall
v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this,char param_1)

{
  AppendCharacter(this,param_1);
  return this;
}

