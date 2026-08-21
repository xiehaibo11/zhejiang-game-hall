
/* v8::internal::compiler::Operator1<v8::internal::compiler::ElementsTransition,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  pbVar1 = (basic_ostream *)compiler::operator<<(pbVar1,&local_40);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

