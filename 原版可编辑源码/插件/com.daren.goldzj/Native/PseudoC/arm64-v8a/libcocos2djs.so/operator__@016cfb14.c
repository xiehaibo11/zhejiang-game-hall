
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionSequenceAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionSequenceAsJSON *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_40;
  long lStack_38;
  
  lVar3 = *(long *)param_2;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"blocks\": [",0xb);
  plVar2 = *(long **)(lVar3 + 0x10);
  if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 3)) {
    uVar4 = 0;
    bVar1 = false;
    do {
      if (bVar1) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        plVar2 = *(long **)(lVar3 + 0x10);
      }
      if ((ulong)(plVar2[1] - *plVar2 >> 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_40 = *(undefined8 *)(*plVar2 + uVar4 * 8);
      lStack_38 = lVar3;
      operator<<(param_1,(InstructionBlockAsJSON *)&local_40);
      plVar2 = *(long **)(lVar3 + 0x10);
      uVar4 = uVar4 + 1;
      bVar1 = true;
    } while ((long)uVar4 < (long)(int)((ulong)(plVar2[1] - *plVar2) >> 3));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  return param_1;
}

