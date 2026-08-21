
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::AsPrintableStatistics const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,AsPrintableStatistics *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long *__s;
  long *plVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  char *__s2;
  long lVar10;
  long lVar11;
  AsPrintableStatistics AVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  ulong uVar16;
  void *__s1;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  locale alStack_68 [8];
  
  lVar11 = *(long *)param_2;
  uVar17 = *(ulong *)(lVar11 + 0x50);
  if (uVar17 == 0) {
    plVar20 = (long *)0x0;
    __s = (long *)0x0;
  }
  else {
    if (uVar17 >> 0x3d != 0) goto LAB_014e9fb0;
    __s = operator_new(uVar17 << 3);
    memset(__s,0,uVar17 << 3);
    plVar20 = __s;
    if (1 < uVar17) {
      uVar13 = uVar17 & 0xfffffffffffffffe;
      plVar20 = __s + uVar13;
      uVar16 = uVar13;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
      bVar4 = uVar17 == uVar13;
      uVar17 = uVar17 - uVar13;
      if (bVar4) goto LAB_014e9b80;
    }
    do {
      uVar17 = uVar17 - 1;
      plVar20 = plVar20 + 1;
    } while (uVar17 != 0);
  }
LAB_014e9b80:
  plVar21 = *(long **)(lVar11 + 0x40);
  while ((long *)(lVar11 + 0x48) != plVar21) {
    __s[plVar21[0xe]] = (long)plVar21;
    plVar7 = (long *)plVar21[1];
    if ((long *)plVar21[1] == (long *)0x0) {
      plVar7 = plVar21 + 2;
      bVar4 = *(long **)*plVar7 != plVar21;
      plVar21 = (long *)*plVar7;
      if (bVar4) {
        do {
          lVar19 = *plVar7;
          plVar7 = (long *)(lVar19 + 0x10);
          plVar21 = (long *)*plVar7;
        } while (*plVar21 != lVar19);
      }
    }
    else {
      do {
        plVar21 = plVar7;
        plVar7 = (long *)*plVar21;
      } while ((long *)*plVar21 != (long *)0x0);
    }
  }
  uVar17 = *(ulong *)(lVar11 + 0x68);
  if (uVar17 == 0) {
    plVar7 = (long *)0x0;
    plVar21 = (long *)0x0;
  }
  else {
    if (uVar17 >> 0x3d != 0) {
LAB_014e9fb0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar7 = operator_new(uVar17 << 3);
    memset(plVar7,0,uVar17 << 3);
    plVar21 = plVar7;
    if (1 < uVar17) {
      uVar13 = uVar17 & 0xfffffffffffffffe;
      plVar21 = plVar7 + uVar13;
      uVar16 = uVar13;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
      bVar4 = uVar17 == uVar13;
      uVar17 = uVar17 - uVar13;
      if (bVar4) goto LAB_014e9c70;
    }
    do {
      uVar17 = uVar17 - 1;
      plVar21 = plVar21 + 1;
    } while (uVar17 != 0);
  }
LAB_014e9c70:
  plVar15 = *(long **)(lVar11 + 0x58);
  while ((long *)(lVar11 + 0x60) != plVar15) {
    plVar7[plVar15[0xe]] = (long)plVar15;
    plVar9 = (long *)plVar15[1];
    if ((long *)plVar15[1] == (long *)0x0) {
      plVar9 = plVar15 + 2;
      bVar4 = *(long **)*plVar9 != plVar15;
      plVar15 = (long *)*plVar9;
      if (bVar4) {
        do {
          lVar19 = *plVar9;
          plVar9 = (long *)(lVar19 + 0x10);
          plVar15 = (long *)*plVar9;
        } while (*plVar15 != lVar19);
      }
    }
    else {
      do {
        plVar15 = plVar9;
        plVar9 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
    }
  }
  plVar15 = __s;
  if (param_2[8] == (AsPrintableStatistics)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,
               "----------------------------------------------------------------------------------------------------------------------\n"
               ,0x77);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"                Turbofan phase            Time (ms)    ",0x37);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8,"                   Space (bytes)             Function\n",0x36);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8,"                                                       ",0x37);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar8,"          Total          Max.     Abs. max.\n",0x2c);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,
               "----------------------------------------------------------------------------------------------------------------------\n"
               ,0x77);
  }
  do {
    if (plVar20 == plVar15) {
      if (param_2[8] == (AsPrintableStatistics)0x0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,
                   "----------------------------------------------------------------------------------------------------------------------\n"
                   ,0x77);
        bVar4 = param_2[8] != (AsPrintableStatistics)0x0;
      }
      else {
        bVar4 = true;
      }
      FUN_014e9fb4(param_1,bVar4,"totals",lVar11,lVar11);
      if (plVar7 != (long *)0x0) {
        operator_delete(plVar7);
      }
      if (__s != (long *)0x0) {
        operator_delete(__s);
      }
      return param_1;
    }
    lVar19 = *plVar15;
    if (param_2[8] == (AsPrintableStatistics)0x0) {
      if (plVar21 != plVar7) {
        plVar9 = plVar7;
        do {
          lVar18 = *plVar9;
          bVar2 = *(byte *)(lVar18 + 0x78);
          bVar3 = *(byte *)(lVar19 + 0x20);
          uVar17 = (ulong)(bVar2 >> 1);
          __n = uVar17;
          if ((bVar2 & 1) != 0) {
            __n = *(size_t *)(lVar18 + 0x80);
          }
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = *(size_t *)(lVar19 + 0x28);
          }
          if (__n == sVar1) {
            __s1 = *(void **)(lVar18 + 0x88);
            if ((bVar2 & 1) == 0) {
              __s1 = (void *)(lVar18 + 0x79);
            }
            __s2 = (char *)(lVar19 + 0x21);
            if ((bVar3 & 1) != 0) {
              __s2 = *(char **)(lVar19 + 0x30);
            }
            if ((bVar2 & 1) == 0) {
              if (__n != 0) {
                pcVar14 = (char *)(lVar18 + 0x79);
                do {
                  if (*pcVar14 != *__s2) goto LAB_014e9de4;
                  uVar17 = uVar17 - 1;
                  pcVar14 = pcVar14 + 1;
                  __s2 = __s2 + 1;
                } while (uVar17 != 0);
              }
            }
            else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_014e9de4;
            if ((*(byte *)(lVar18 + 0x20) & 1) == 0) {
              lVar10 = lVar18 + 0x21;
            }
            else {
              lVar10 = *(long *)(lVar18 + 0x30);
            }
            FUN_014e9fb4(param_1,param_2[8] != (AsPrintableStatistics)0x0,lVar10,lVar18 + 0x38,
                         lVar11);
          }
LAB_014e9de4:
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar21);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,
                 "                                   -----------------------------------------------------------------------------------\n"
                 ,0x77);
      lVar18 = *plVar15;
      AVar12 = param_2[8];
      if ((*(byte *)(lVar19 + 0x20) & 1) == 0) goto LAB_014e9d18;
LAB_014e9ec4:
      lVar19 = *(long *)(lVar19 + 0x30);
    }
    else {
      AVar12 = (AsPrintableStatistics)0x1;
      lVar18 = lVar19;
      if ((*(byte *)(lVar19 + 0x20) & 1) != 0) goto LAB_014e9ec4;
LAB_014e9d18:
      lVar19 = lVar19 + 0x21;
    }
    FUN_014e9fb4(param_1,AVar12 != (AsPrintableStatistics)0x0,lVar19,lVar18 + 0x38,lVar11);
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale(alStack_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
    plVar15 = plVar15 + 1;
  } while( true );
}

