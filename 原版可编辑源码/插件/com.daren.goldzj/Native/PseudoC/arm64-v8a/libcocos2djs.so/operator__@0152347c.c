
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(v8::internal::Symbol) */

MessageBuilder * __thiscall v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this)

{
  AppendSymbolName();
  return this;
}

