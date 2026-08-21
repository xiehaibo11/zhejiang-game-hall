
/* p2t::Triangle::DebugPrint() */

void __thiscall p2t::Triangle::DebugPrint(Triangle *this)

{
  long lVar1;
  char cVar2;
  basic_ostream *pbVar3;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  long *plVar4;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)std::__ndk1::cout,
                      **(double **)(this + 8));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(double *)(*(long *)(this + 8) + 8));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)std::__ndk1::cout,
                      **(double **)(this + 0x10));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(double *)(*(long *)(this + 0x10) + 8));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)std::__ndk1::cout,
                      **(double **)(this + 0x18));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,",",1);
  this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(*(long *)(this + 0x18) + 8));
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale(alStack_50);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this_00,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this_00);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

