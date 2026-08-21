
/* v8::internal::compiler::Operator1<v8::internal::compiler::DeoptimizeParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  long lVar1;
  basic_ostream *pbVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  local_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  pbVar2 = (basic_ostream *)compiler::operator<<(pbVar2,&local_50);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

