
/* v8::internal::compiler::CodeAssembler::Comment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
v8::internal::compiler::CodeAssembler::Comment(CodeAssembler *this,basic_string *param_2)

{
  if (FLAG_code_comments != '\0') {
    RawMachineAssembler::Comment((RawMachineAssembler *)**(undefined8 **)this,param_2);
    return;
  }
  return;
}

