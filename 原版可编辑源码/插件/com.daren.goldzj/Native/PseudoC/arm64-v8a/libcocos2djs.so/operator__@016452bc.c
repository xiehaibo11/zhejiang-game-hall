
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ParallelMove const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,ParallelMove *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  basic_ostream *pbVar4;
  char *__s;
  InstructionOperand *pIVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)param_2;
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar6 != puVar1) {
    __s = "";
    do {
      pIVar5 = (InstructionOperand *)*puVar6;
      if (((byte)*pIVar5 & 7) != 0) {
        sVar2 = strlen(__s);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,__s,sVar2);
        operator<<(pbVar3,pIVar5 + 8);
        if (*(long *)pIVar5 != *(long *)(pIVar5 + 8)) {
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3," = ",3);
          operator<<(pbVar4,pIVar5);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,";",1);
        __s = " ";
      }
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
  }
  return param_1;
}

