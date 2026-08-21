
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(v8::internal::String) */

MessageBuilder * __thiscall
v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this,undefined8 param_2)

{
  AppendString(this,param_2,0);
  return this;
}

