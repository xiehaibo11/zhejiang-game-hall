
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(v8::internal::LogSeparator) */

MessageBuilder * __thiscall v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this)

{
  char local_4 [4];
  
  local_4[0] = ',';
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)(*(long *)this + 0x10),local_4,1);
  return this;
}

