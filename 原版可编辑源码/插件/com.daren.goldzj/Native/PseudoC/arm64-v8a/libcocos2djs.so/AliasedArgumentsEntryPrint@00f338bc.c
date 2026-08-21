
/* v8::internal::AliasedArgumentsEntry::AliasedArgumentsEntryPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::AliasedArgumentsEntry::AliasedArgumentsEntryPrint
          (AliasedArgumentsEntry *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"AliasedArgumentsEntry");
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n - aliased_context_slot: ",0x1a);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
             *(int *)(*(long *)this + 3) >> 1);
  return;
}

