
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::BasicBlockProfiler::Data const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,Data *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  Data DVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  char cVar8;
  basic_ostream *pbVar9;
  size_t sVar10;
  long *plVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  ulong uVar12;
  int *piVar13;
  Data *pDVar14;
  ulong uVar15;
  int *piVar16;
  char *__s;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  int *local_80;
  int *piStack_78;
  int *local_70;
  undefined8 local_48;
  
  piVar13 = *(int **)(param_2 + 0x20);
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar13 == piVar2) {
    return param_1;
  }
  uVar12 = ((ulong)((long)piVar2 + (-4 - (long)piVar13)) >> 2) + 1;
  if (uVar12 < 8) {
    iVar18 = 0;
  }
  else {
    uVar15 = uVar12 & 0x7ffffffffffffff8;
    piVar16 = piVar13 + 4;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    piVar13 = piVar13 + uVar15;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = 0;
    uVar17 = uVar15;
    do {
      piVar1 = piVar16 + -4;
      piVar5 = piVar16 + -2;
      piVar6 = piVar16 + 2;
      uVar26 = *(undefined8 *)piVar16;
      uVar17 = uVar17 - 8;
      piVar16 = piVar16 + 8;
      iVar18 = (int)*(undefined8 *)piVar1 + iVar18;
      iVar19 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar19;
      iVar20 = (int)*(undefined8 *)piVar5 + iVar20;
      iVar21 = (int)((ulong)*(undefined8 *)piVar5 >> 0x20) + iVar21;
      iVar22 = (int)uVar26 + iVar22;
      iVar23 = (int)((ulong)uVar26 >> 0x20) + iVar23;
      iVar24 = (int)*(undefined8 *)piVar6 + iVar24;
      iVar25 = (int)((ulong)*(undefined8 *)piVar6 >> 0x20) + iVar25;
    } while (uVar17 != 0);
    iVar18 = iVar22 + iVar18 + iVar23 + iVar19 + iVar24 + iVar20 + iVar25 + iVar21;
    if (uVar12 == uVar15) goto LAB_014e84f8;
  }
  do {
    piVar16 = piVar13 + 1;
    iVar18 = *piVar13 + iVar18;
    piVar13 = piVar16;
  } while (piVar2 != piVar16);
LAB_014e84f8:
  if (iVar18 != 0) {
    DVar4 = param_2[0x38];
    uVar12 = (ulong)((byte)DVar4 >> 1);
    if (((byte)DVar4 & 1) != 0) {
      uVar12 = *(ulong *)(param_2 + 0x40);
    }
    if (uVar12 == 0) {
      __s = "unknown function";
    }
    else if (((byte)DVar4 & 1) == 0) {
      __s = (char *)(param_2 + 0x39);
    }
    else {
      __s = *(char **)(param_2 + 0x48);
    }
    uVar12 = (ulong)((byte)param_2[0x50] >> 1);
    if (((byte)param_2[0x50] & 1) != 0) {
      uVar12 = *(ulong *)(param_2 + 0x58);
    }
    if (uVar12 != 0) {
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"schedule for ",0xd);
      sVar10 = strlen(__s);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,__s,sVar10);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," (B0 entered ",0xd);
      pbVar9 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,
                          **(uint **)(param_2 + 0x20));
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," times)",7);
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
      std::__ndk1::locale::~locale((locale *)&local_80);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
      pDVar14 = *(Data **)(param_2 + 0x60);
      if (((byte)param_2[0x50] & 1) == 0) {
        pDVar14 = param_2 + 0x51;
      }
      sVar10 = strlen((char *)pDVar14);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,(char *)pDVar14,sVar10);
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
      std::__ndk1::locale::~locale((locale *)&local_80);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
    }
    pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"block counts for ",0x11);
    sVar10 = strlen(__s);
    pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar9,__s,sVar10);
    pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar9,":",1);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
    cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_80);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
    piStack_78 = (int *)0x0;
    local_70 = (int *)0x0;
    local_80 = (int *)0x0;
    uVar12 = *(ulong *)param_2;
    if (uVar12 != 0) {
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_80 = operator_new(uVar12 * 8);
      uVar17 = 0;
      local_70 = local_80 + uVar12 * 2;
      piStack_78 = local_80;
      do {
        local_48 = CONCAT44(*(undefined4 *)(*(long *)(param_2 + 0x20) + uVar17 * 4),
                            *(undefined4 *)(*(long *)(param_2 + 8) + uVar17 * 4));
        if (piStack_78 < local_70) {
          *(undefined8 *)piStack_78 = local_48;
          piStack_78 = piStack_78 + 2;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::pair<int,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<int,unsigned_int>>>
          ::__push_back_slow_path<std::__ndk1::pair<int,unsigned_int>>
                    ((vector<std::__ndk1::pair<int,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<int,unsigned_int>>>
                      *)&local_80,(pair *)&local_48);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(ulong *)param_2);
    }
    FUN_014e8a88(local_80,piStack_78);
    piVar2 = piStack_78;
    for (piVar13 = local_80; (piVar13 != piVar2 && (uVar3 = piVar13[1], uVar3 != 0));
        piVar13 = piVar13 + 2) {
      iVar18 = *piVar13;
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"block B",7);
      pbVar9 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,iVar18);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," : ",3);
      this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,uVar3);
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_48,(id *)&std::__ndk1::ctype<char>::id);
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
      std::__ndk1::locale::~locale((locale *)&local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this,cVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
    }
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_48,(id *)&std::__ndk1::ctype<char>::id);
    cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_48);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
    bVar7 = ((byte)param_2[0x68] & 1) != 0;
    uVar12 = (ulong)((byte)param_2[0x68] >> 1);
    if (bVar7) {
      uVar12 = *(ulong *)(param_2 + 0x70);
    }
    if (uVar12 != 0) {
      pDVar14 = *(Data **)(param_2 + 0x78);
      if (!bVar7) {
        pDVar14 = param_2 + 0x69;
      }
      sVar10 = strlen((char *)pDVar14);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,(char *)pDVar14,sVar10);
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_48,(id *)&std::__ndk1::ctype<char>::id);
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
      std::__ndk1::locale::~locale((locale *)&local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
    }
    if (local_80 != (int *)0x0) {
      piStack_78 = local_80;
      operator_delete(local_80);
    }
  }
  return param_1;
}

