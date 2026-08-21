
/* v8::internal::Code::CodePrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
    */

void __thiscall v8::internal::Code::CodePrint(Code *this,basic_ostream *param_1)

{
  HeapObject::PrintHeader((HeapObject *)this,param_1,"Code");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  if (FLAG_use_verbose_printer != '\0') {
    Disassemble(this,(char *)0x0,param_1,(Isolate *)((ulong)*(uint *)(this + 4) << 0x20),0);
    return;
  }
  return;
}

