
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(v8::internal::Name) */

MessageBuilder * __thiscall
v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this,ulong param_2)

{
  if (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x40) {
    AppendString(this,param_2,0);
  }
  else {
    AppendSymbolName();
  }
  return this;
}

