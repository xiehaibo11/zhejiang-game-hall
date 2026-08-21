
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Schedule const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Schedule *param_2)

{
  Schedule *pSVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar6;
  basic_ostream *pbVar7;
  int iVar8;
  long *plVar9;
  Node *pNVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  pSVar1 = param_2 + 8;
  if (*(long *)(param_2 + 0x50) != *(long *)(param_2 + 0x48)) {
    pSVar1 = param_2 + 0x48;
  }
  plVar2 = *(long **)pSVar1;
  plVar4 = *(long **)(pSVar1 + 8);
  if (plVar2 != plVar4) {
    lVar11 = *plVar2;
    while( true ) {
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 4) == -1) {
          pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                   std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"--- BLOCK id:",0xd);
          iVar8 = *(int *)(lVar11 + 0xa0);
        }
        else {
          pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                   std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"--- BLOCK B",0xb);
          iVar8 = *(int *)(lVar11 + 4);
        }
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar6,iVar8);
        if (*(char *)(lVar11 + 8) != '\0') {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1," (deferred)",0xb);
        }
        plVar13 = *(long **)(lVar11 + 0x80);
        plVar9 = *(long **)(lVar11 + 0x88);
        if (plVar9 != plVar13) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1," <- ",4);
          plVar13 = *(long **)(lVar11 + 0x80);
          plVar9 = *(long **)(lVar11 + 0x88);
        }
        if (plVar13 != plVar9) {
          lVar12 = *plVar13;
          if (*(int *)(lVar12 + 4) == -1) {
            pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                     std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1,"id:",3);
            iVar8 = *(int *)(lVar12 + 0xa0);
          }
          else {
            pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                     std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1,"B",1);
            iVar8 = *(int *)(lVar12 + 4);
          }
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar6,iVar8);
          while (plVar13 = plVar13 + 1, plVar13 != plVar9) {
            lVar12 = *plVar13;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,", ",2);
            if (*(int *)(lVar12 + 4) == -1) {
              pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                       std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_1,"id:",3);
              iVar8 = *(int *)(lVar12 + 0xa0);
            }
            else {
              pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                       std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_1,"B",1);
              iVar8 = *(int *)(lVar12 + 4);
            }
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (pbVar6,iVar8);
          }
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1," ---\n",5);
        puVar5 = *(undefined8 **)(lVar11 + 0x48);
        for (puVar3 = *(undefined8 **)(lVar11 + 0x40); puVar3 != puVar5; puVar3 = puVar3 + 1) {
          pNVar10 = (Node *)*puVar3;
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"  ",2);
          operator<<(pbVar7,pNVar10);
          if (*(long *)(pNVar10 + 8) != 0) {
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1," : ",3);
            operator<<(pbVar7,*(undefined8 *)(pNVar10 + 8));
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
        }
        if (*(int *)(lVar11 + 0x34) != 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"  ",2)
          ;
          if (*(Node **)(lVar11 + 0x38) == (Node *)0x0) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"Goto",4);
          }
          else {
            operator<<(param_1,*(Node **)(lVar11 + 0x38));
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1," -> ",4);
          plVar13 = *(long **)(lVar11 + 0x60);
          plVar9 = *(long **)(lVar11 + 0x68);
          if (plVar13 != plVar9) {
            lVar11 = *plVar13;
            if (*(int *)(lVar11 + 4) == -1) {
              pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                       std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_1,"id:",3);
              iVar8 = *(int *)(lVar11 + 0xa0);
            }
            else {
              pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                       std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_1,"B",1);
              iVar8 = *(int *)(lVar11 + 4);
            }
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (pbVar6,iVar8);
            while (plVar13 = plVar13 + 1, plVar13 != plVar9) {
              lVar11 = *plVar13;
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,", ",2);
              if (*(int *)(lVar11 + 4) == -1) {
                pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                         std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"id:",3);
                iVar8 = *(int *)(lVar11 + 0xa0);
              }
              else {
                pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                         std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"B",1);
                iVar8 = *(int *)(lVar11 + 4);
              }
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        (pbVar6,iVar8);
            }
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
        }
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar4) break;
      lVar11 = *plVar2;
    }
  }
  return param_1;
}

