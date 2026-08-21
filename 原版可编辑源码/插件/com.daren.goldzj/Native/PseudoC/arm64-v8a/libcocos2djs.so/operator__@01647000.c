
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Instruction const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Instruction *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  Instruction *pIVar5;
  uint local_28;
  uint local_24;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"gap ",4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
  if (*(ParallelMove **)(param_2 + 8) != (ParallelMove *)0x0) {
    operator<<(param_1,*(ParallelMove **)(param_2 + 8));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,") ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
  if (*(ParallelMove **)(param_2 + 0x10) != (ParallelMove *)0x0) {
    operator<<(param_1,*(ParallelMove **)(param_2 + 0x10));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,") ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n          ",0xb);
  if (param_2[4] != (Instruction)0x0) {
    if (param_2[4] == (Instruction)0x1) {
      pbVar1 = (basic_ostream *)operator<<(param_1,(InstructionOperand *)(param_2 + 0x28));
      pcVar2 = " = ";
      uVar3 = 3;
    }
    else {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(",1);
      operator<<(pbVar1,(InstructionOperand *)(param_2 + 0x28));
      if (((byte)param_2[4] & 0xfe) != 0) {
        pIVar5 = param_2 + 0x30;
        uVar3 = 1;
        do {
          pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,", ",2);
          operator<<(pbVar1,(InstructionOperand *)pIVar5);
          uVar3 = uVar3 + 1;
          pIVar5 = pIVar5 + 8;
        } while (uVar3 < (byte)param_2[4]);
      }
      pcVar2 = ") = ";
      uVar3 = 4;
      pbVar1 = param_1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar2,uVar3);
  }
  local_24 = *(uint *)param_2 & 0x1ff;
  operator<<(param_1,(ArchOpcode *)&local_24);
  uVar4 = *(uint *)param_2;
  if ((uVar4 & 0x3e00) != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," : ",3);
    local_24 = *(uint *)param_2 >> 9 & 0x1f;
    operator<<(pbVar1,(AddressingMode *)&local_24);
    uVar4 = *(uint *)param_2;
  }
  local_24 = uVar4 >> 0xe & 7;
  if (local_24 != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," && ",4);
    pbVar1 = (basic_ostream *)operator<<(pbVar1,(FlagsMode *)&local_24);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1," if ",4);
    local_28 = *(uint *)param_2 >> 0x11 & 0x1f;
    operator<<(pbVar1,(FlagsCondition *)&local_28);
  }
  if (*(short *)(param_2 + 5) != 0) {
    uVar3 = 0;
    do {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," ",1);
      operator<<(pbVar1,(InstructionOperand *)(param_2 + (uVar3 + (byte)param_2[4]) * 8 + 0x28));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_2 + 5));
  }
  return param_1;
}

