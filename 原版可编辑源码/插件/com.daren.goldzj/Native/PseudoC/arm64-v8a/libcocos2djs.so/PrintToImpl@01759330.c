
/* v8::internal::compiler::Operator1<v8::internal::BinaryOperationHint,
   v8::internal::compiler::OpEqualTo<v8::internal::BinaryOperationHint>,
   v8::internal::compiler::OpHash<v8::internal::BinaryOperationHint>
   >::PrintToImpl(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::BinaryOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::BinaryOperationHint>,v8::internal::compiler::OpHash<v8::internal::BinaryOperationHint>>
::PrintToImpl(Operator1<v8::internal::BinaryOperationHint,v8::internal::compiler::OpEqualTo<v8::internal::BinaryOperationHint>,v8::internal::compiler::OpHash<v8::internal::BinaryOperationHint>>
              *this,basic_ostream *param_1,undefined4 param_3)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)(this + 8);
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar1);
                    /* WARNING: Could not recover jumptable at 0x01759388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_1,param_3);
  return;
}

