
/* v8::internal::Log::MessageBuilder&
   v8::internal::Log::MessageBuilder::TEMPNAMEPLACEHOLDERVALUE(void*) */

MessageBuilder * __thiscall
v8::internal::Log::MessageBuilder::operator<<(MessageBuilder *this,void *param_1)

{
  basic_ostream *this_00;
  long *plVar1;
  
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)(*(long *)this + 0x10),"0x",2);
  *(uint *)(this_00 + *(long *)(*(long *)this_00 + -0x18) + 8) =
       *(uint *)(this_00 + *(long *)(*(long *)this_00 + -0x18) + 8) & 0xffffffb5 | 8;
  plVar1 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
                              (long)param_1);
  *(uint *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 8) =
       *(uint *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 8) & 0xffffffb5 | 2;
  return this;
}

