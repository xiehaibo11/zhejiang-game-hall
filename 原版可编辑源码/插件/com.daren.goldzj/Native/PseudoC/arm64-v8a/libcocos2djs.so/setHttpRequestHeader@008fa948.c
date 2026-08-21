
/* XMLHttpRequest::setHttpRequestHeader() */

void __thiscall XMLHttpRequest::setHttpRequestHeader(XMLHttpRequest *this)

{
  char *pcVar1;
  long lVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  size_t sVar5;
  size_t sVar6;
  char *__dest;
  void *__dest_00;
  basic_string *pbVar7;
  basic_string *pbVar8;
  char *__s;
  char *__s_00;
  ulong uVar9;
  long *plVar10;
  ulong local_98;
  size_t sStack_90;
  void *local_88;
  basic_string *local_80;
  basic_string *local_78;
  basic_string *pbStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = (basic_string *)0x0;
  pbStack_70 = (basic_string *)0x0;
  local_80 = (basic_string *)0x0;
  plVar10 = *(long **)(this + 0x198);
  if (plVar10 != (long *)0x0) {
    do {
      if ((*(byte *)(plVar10 + 2) & 1) == 0) {
        __s = (char *)((long)plVar10 + 0x11);
      }
      else {
        __s = (char *)plVar10[4];
      }
      if ((*(byte *)(plVar10 + 5) & 1) == 0) {
        __s_00 = (char *)((long)plVar10 + 0x29);
      }
      else {
        __s_00 = (char *)plVar10[7];
      }
      sVar5 = strlen(__s);
      sVar6 = strlen(__s_00);
      sVar5 = sVar5 + sVar6 + 3;
      __dest = malloc(sVar5);
      memset(__dest,0,sVar5);
      strcpy(__dest,__s);
      sVar5 = strlen(__s);
      pcVar1 = __dest + sVar5;
      pcVar1[2] = '\0';
      pcVar1[0] = ':';
      pcVar1[1] = ' ';
      sVar5 = strlen(__s);
      strcpy(__dest + sVar5 + 2,__s_00);
      local_98 = 0;
      sStack_90 = 0;
      local_88 = (void *)0x0;
      sVar5 = strlen(__dest);
      if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar5 << 1));
        __dest_00 = (void *)((ulong)&local_98 | 1);
        if (sVar5 != 0) goto LAB_008faa88;
      }
      else {
        uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
        __dest_00 = operator_new(uVar9);
        local_98 = uVar9 | 1;
        sStack_90 = sVar5;
        local_88 = __dest_00;
LAB_008faa88:
        memcpy(__dest_00,__dest,sVar5);
      }
      *(undefined1 *)((long)__dest_00 + sVar5) = 0;
      if (local_78 < pbStack_70) {
        *(void **)(local_78 + 0x10) = local_88;
        *(size_t *)(local_78 + 8) = sStack_90;
        *(ulong *)local_78 = local_98;
        sStack_90 = 0;
        local_88 = (void *)0x0;
        local_98 = 0;
        local_78 = local_78 + 0x18;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_80,(basic_string *)&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
      }
      free(__dest);
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    pbVar8 = local_78;
    if ((local_80 != local_78) &&
       (pbVar8 = local_80,
       (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        *)(*(long *)(this + 0x250) + 0x98) !=
       (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        *)&local_80)) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(*(long *)(this + 0x250) + 0x98),local_80,local_78);
      pbVar8 = local_80;
    }
    pbVar3 = pbVar8;
    pbVar7 = local_78;
    if (pbVar8 != (basic_string *)0x0) {
      while (pbVar4 = pbVar7, pbVar4 != pbVar8) {
        pbVar7 = pbVar4 + -0x18;
        pbVar3 = local_80;
        if (((byte)*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
          pbVar3 = local_80;
        }
      }
      local_78 = pbVar8;
      operator_delete(pbVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

