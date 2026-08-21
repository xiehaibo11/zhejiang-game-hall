
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Hints const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Hints *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar3;
  long *plVar4;
  undefined8 *puVar5;
  VirtualBoundFunction *pVVar6;
  VirtualClosure *pVVar7;
  VirtualContext *pVVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  locale alStack_38 [8];
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"(impl_ = ",9);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(void **)param_2
                     );
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")\n",2);
  puVar5 = *(undefined8 **)param_2;
  if (puVar5 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar5;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)*puVar9;
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"  constant ",0xb);
        local_58 = *puVar5;
        pbVar3 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                 internal::operator<<(pbVar2,(Brief *)&local_58);
        std::__ndk1::ios_base::getloc();
        plVar4 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::__ndk1::locale::~locale(alStack_38);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar3,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar3);
        puVar9 = (undefined8 *)puVar9[1];
      } while (puVar9 != (undefined8 *)0x0);
      puVar5 = *(undefined8 **)param_2;
      if (puVar5 == (undefined8 *)0x0) {
        return param_1;
      }
    }
    puVar9 = (undefined8 *)puVar5[1];
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)*puVar9;
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"  map ",6);
        local_58 = *puVar5;
        pbVar3 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                 internal::operator<<(pbVar2,(Brief *)&local_58);
        std::__ndk1::ios_base::getloc();
        plVar4 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::__ndk1::locale::~locale(alStack_38);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar3,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar3);
        puVar9 = (undefined8 *)puVar9[1];
      } while (puVar9 != (undefined8 *)0x0);
      puVar5 = *(undefined8 **)param_2;
      if (puVar5 == (undefined8 *)0x0) {
        return param_1;
      }
    }
    pVVar7 = (VirtualClosure *)puVar5[2];
    if (pVVar7 != (VirtualClosure *)0x0) {
      do {
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"  virtual closure ",0x12);
        operator<<(pbVar2,pVVar7);
        std::__ndk1::ios_base::getloc();
        plVar4 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::__ndk1::locale::~locale(alStack_38);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
        pVVar7 = *(VirtualClosure **)(pVVar7 + 0x18);
      } while (pVVar7 != (VirtualClosure *)0x0);
      puVar5 = *(undefined8 **)param_2;
      if (puVar5 == (undefined8 *)0x0) {
        return param_1;
      }
    }
    pVVar8 = (VirtualContext *)puVar5[3];
    if (pVVar8 != (VirtualContext *)0x0) {
      do {
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"  virtual context ",0x12);
        operator<<(pbVar2,pVVar8);
        std::__ndk1::ios_base::getloc();
        plVar4 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::__ndk1::locale::~locale(alStack_38);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
        pVVar8 = *(VirtualContext **)(pVVar8 + 0x10);
      } while (pVVar8 != (VirtualContext *)0x0);
      puVar5 = *(undefined8 **)param_2;
      if (puVar5 == (undefined8 *)0x0) {
        return param_1;
      }
    }
    for (pVVar6 = (VirtualBoundFunction *)puVar5[4]; pVVar6 != (VirtualBoundFunction *)0x0;
        pVVar6 = *(VirtualBoundFunction **)(pVVar6 + 0x28)) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"  virtual bound function ",0x19);
      operator<<(pbVar2,pVVar6);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_38,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale(alStack_38);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
    }
  }
  return param_1;
}

