
/* v8::internal::Log::MessageBuilder::AppendRawCharacter(char) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendRawCharacter(MessageBuilder *this,char param_1)

{
  char local_14 [4];
  
  local_14[0] = param_1;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)(*(long *)this + 0x10),local_14,1);
  return;
}

