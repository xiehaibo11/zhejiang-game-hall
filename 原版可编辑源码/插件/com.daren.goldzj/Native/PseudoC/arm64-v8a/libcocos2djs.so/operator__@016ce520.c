
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AsScheduledGraph const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,AsScheduledGraph *param_2)

{
  long *plVar1;
  char cVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  locale alStack_68 [8];
  
  lVar6 = *(long *)param_2;
  lVar11 = *(long *)(lVar6 + 0x48);
  if (*(long *)(lVar6 + 0x50) != lVar11) {
    uVar10 = 0;
    do {
      lVar11 = *(long *)(lVar11 + uVar10 * 8);
      iVar12 = *(int *)(lVar11 + 0x30);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"  + Block B",0xb);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                          *(int *)(lVar11 + 4));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," (pred:",7)
      ;
      plVar1 = *(long **)(lVar11 + 0x88);
      for (plVar7 = *(long **)(lVar11 + 0x80); plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar8 = *plVar7;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1," B",2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(lVar8 + 4))
        ;
      }
      plVar7 = (long *)(lVar11 + 0x28);
      if (*plVar7 == 0) {
        plVar7 = (long *)(lVar11 + 0x20);
        if (*plVar7 != 0) {
          uVar5 = 0xb;
          pcVar4 = ", in loop B";
          goto LAB_016ce680;
        }
      }
      else {
        uVar5 = 0xe;
        pcVar4 = ", loop until B";
LAB_016ce680:
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,pcVar4,uVar5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                   *(int *)(*plVar7 + 4));
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,")",1);
      std::__ndk1::ios_base::getloc();
      plVar7 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_68,(id *)&std::__ndk1::ctype<char>::id);
      cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
      std::__ndk1::locale::~locale(alStack_68);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,cVar2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3);
      for (puVar9 = *(undefined8 **)(lVar11 + 0x40); puVar9 != *(undefined8 **)(lVar11 + 0x48);
          puVar9 = puVar9 + 1) {
        FUN_016d07dc(param_1,iVar12,*puVar9);
        std::__ndk1::ios_base::getloc();
        plVar7 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_68,(id *)&std::__ndk1::ctype<char>::id);
        cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
        std::__ndk1::locale::~locale(alStack_68);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
      }
      if (*(long *)(lVar11 + 0x68) != *(long *)(lVar11 + 0x60)) {
        if (*(long *)(lVar11 + 0x38) == 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,"     ",5);
          if (0 < iVar12) {
            do {
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,". ",2);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,"Goto",4);
        }
        else {
          FUN_016d07dc(param_1,iVar12);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ->",3);
        plVar7 = *(long **)(lVar11 + 0x60);
        plVar1 = *(long **)(lVar11 + 0x68);
        if (plVar7 != plVar1) {
          lVar11 = *plVar7;
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1," B",2);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                     *(int *)(lVar11 + 4));
          while (plVar7 = plVar7 + 1, plVar7 != plVar1) {
            lVar11 = *plVar7;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,",",1);
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1," B",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(int *)(lVar11 + 4));
          }
        }
        std::__ndk1::ios_base::getloc();
        plVar7 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_68,(id *)&std::__ndk1::ctype<char>::id);
        cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
        std::__ndk1::locale::~locale(alStack_68);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar2);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
      }
      uVar10 = uVar10 + 1;
      lVar11 = *(long *)(lVar6 + 0x48);
    } while (uVar10 < (ulong)(*(long *)(lVar6 + 0x50) - lVar11 >> 3));
  }
  return param_1;
}

