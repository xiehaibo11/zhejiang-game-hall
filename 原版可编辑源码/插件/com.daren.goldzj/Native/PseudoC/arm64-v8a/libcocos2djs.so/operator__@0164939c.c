
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionSequence const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionSequence *param_2)

{
  basic_ostream *pbVar1;
  InstructionSequence *pIVar2;
  InstructionSequence *pIVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  InstructionSequence *pIVar9;
  undefined8 local_70;
  InstructionSequence *pIStack_68;
  
  lVar4 = *(long *)(param_2 + 0x60);
  if (*(long *)(param_2 + 0x68) != lVar4) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      pIStack_68 = (InstructionSequence *)((undefined8 *)(lVar4 + lVar8))[1];
      local_70 = *(undefined8 *)(lVar4 + lVar8);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"IMM#",4);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar6);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,": ",2);
      pbVar1 = (basic_ostream *)operator<<(pbVar1,(Constant *)&local_70);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
      lVar4 = *(long *)(param_2 + 0x60);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(param_2 + 0x68) - lVar4 >> 4));
  }
  if (*(InstructionSequence **)(param_2 + 0x40) != param_2 + 0x48) {
    iVar5 = 0;
    pIVar9 = *(InstructionSequence **)(param_2 + 0x40);
    do {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"CST#",4);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,iVar5);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,": v",3);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                          *(int *)(pIVar9 + 0x20));
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1," = ",3);
      pbVar1 = (basic_ostream *)operator<<(pbVar1,(Constant *)(pIVar9 + 0x28));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
      iVar5 = iVar5 + 1;
      pIVar2 = *(InstructionSequence **)(pIVar9 + 8);
      if (*(InstructionSequence **)(pIVar9 + 8) == (InstructionSequence *)0x0) {
        pIVar2 = pIVar9 + 0x10;
        pIVar3 = *(InstructionSequence **)pIVar2;
        if (*(InstructionSequence **)pIVar3 != pIVar9) {
          do {
            lVar4 = *(long *)pIVar2;
            pIVar2 = (InstructionSequence *)(lVar4 + 0x10);
            pIVar3 = *(InstructionSequence **)pIVar2;
          } while (*(long *)pIVar3 != lVar4);
        }
      }
      else {
        do {
          pIVar3 = pIVar2;
          pIVar2 = *(InstructionSequence **)pIVar3;
        } while (*(InstructionSequence **)pIVar3 != (InstructionSequence *)0x0);
      }
      pIVar9 = pIVar3;
    } while (pIVar3 != param_2 + 0x48);
  }
  lVar4 = **(long **)(param_2 + 0x10);
  uVar6 = (*(long **)(param_2 + 0x10))[1] - lVar4;
  if (0 < (int)(uVar6 >> 3)) {
    uVar7 = 0;
    do {
      if ((ulong)((long)uVar6 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_70 = *(undefined8 *)(lVar4 + uVar7 * 8);
      pIStack_68 = param_2;
      operator<<(param_1,(PrintableInstructionBlock *)&local_70);
      uVar7 = uVar7 + 1;
      lVar4 = **(long **)(param_2 + 0x10);
      uVar6 = (*(long **)(param_2 + 0x10))[1] - lVar4;
    } while ((long)uVar7 < (long)(int)(uVar6 >> 3));
  }
  return param_1;
}

