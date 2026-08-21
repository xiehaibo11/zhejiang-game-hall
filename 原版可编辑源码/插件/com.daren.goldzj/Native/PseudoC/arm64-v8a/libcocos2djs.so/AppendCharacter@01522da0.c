
/* v8::internal::Log::MessageBuilder::AppendCharacter(char) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendCharacter(MessageBuilder *this,char param_1)

{
  char local_14 [4];
  
  if (0x5e < (byte)(param_1 - 0x20U)) {
    if (param_1 == '\n') {
      AppendRawFormatString((char *)this,&DAT_019da8aa);
      return;
    }
    AppendRawFormatString((char *)this,"\\x%02x");
    return;
  }
  if (param_1 != '\\') {
    if (param_1 == ',') {
      AppendRawFormatString((char *)this,&DAT_01a4a0bb);
      return;
    }
    local_14[0] = param_1;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)(*(long *)this + 0x10),local_14,1);
    return;
  }
  AppendRawFormatString((char *)this,&DAT_01896be2);
  return;
}

