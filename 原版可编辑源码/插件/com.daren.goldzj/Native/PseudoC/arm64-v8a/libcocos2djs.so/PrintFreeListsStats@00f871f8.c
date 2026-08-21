
/* v8::internal::Heap::PrintFreeListsStats() */

void __thiscall v8::internal::Heap::PrintFreeListsStats(Heap *this)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *__s;
  basic_ostream *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  FreeListCategory *this_00;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  void *local_208;
  byte local_1b0 [16];
  void *local_1a0;
  undefined **local_198;
  undefined **local_190;
  locale alStack_188 [8];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined **local_128 [17];
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  if (FLAG_trace_gc_freelists_verbose != '\0') {
    PrintIsolate(*(void **)(this + 0x30),
                 "Freelists statistics per Page: [category: length || total free bytes]\n");
  }
  plVar12 = *(long **)(this + 0xf0);
  iVar4 = *(int *)(plVar12[0xc] + 8);
  if (iVar4 == 0) {
    local_208 = (void *)0x0;
  }
  else {
    if (iVar4 < 0) {
LAB_00f87958:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_208 = operator_new((long)iVar4 << 2);
    memset(local_208,0,(long)iVar4 << 2);
    iVar4 = *(int *)(plVar12[0xc] + 8);
    if (iVar4 != 0) {
      if (iVar4 < 0) goto LAB_00f87958;
      __s = operator_new((long)iVar4 << 3);
      memset(__s,0,(long)iVar4 << 3);
      goto LAB_00f872c4;
    }
  }
  __s = (void *)0x0;
LAB_00f872c4:
  lVar16 = plVar12[4];
  if (lVar16 == 0) {
    uVar15 = 0;
  }
  else {
    uVar11 = 0;
    do {
      local_198 = (undefined **)0x1c6c8a8;
      local_128[0] = (undefined **)0x1c6c8d0;
      std::__ndk1::ios_base::init((ios_base *)local_128,&local_190);
      local_98 = 0xffffffff;
      local_a0 = 0;
      local_198 = &PTR__basic_ostringstream_01c6c858;
      local_128[0] = &PTR__basic_ostringstream_01c6c880;
      local_190 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::locale(alStack_188);
      local_190 = &PTR__basic_stringbuf_01c67100;
      local_150 = 0;
      local_140 = (void *)0x0;
      local_130 = 0x10;
      if (FLAG_trace_gc_freelists_verbose != '\0') {
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_198,"Page ",5);
        *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 4;
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar11);
      }
      if (-1 < *(int *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc)) {
        uVar15 = 0;
        do {
          this_00 = *(FreeListCategory **)(*(long *)(lVar16 + 0xf0) + uVar15 * 8);
          iVar4 = FreeListCategory::FreeListLength(this_00);
          uVar6 = FreeListCategory::SumFreeList(this_00);
          if (FLAG_trace_gc_freelists_verbose != '\0') {
            pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               ((basic_ostream *)&local_198,"[",1);
            pbVar5 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                                (int)uVar15);
            pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar5,": ",2);
            *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 4;
            pbVar5 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
            pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar5," || ",4);
            *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 6;
            pbVar5 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar6);
            pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar5," ]",2);
            bVar3 = uVar15 != *(uint *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc);
            pcVar1 = "\n";
            if (bVar3) {
              pcVar1 = ", ";
            }
            uVar7 = 1;
            if (bVar3) {
              uVar7 = 2;
            }
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar5,pcVar1,uVar7);
          }
          *(int *)((long)local_208 + uVar15 * 4) = *(int *)((long)local_208 + uVar15 * 4) + iVar4;
          *(ulong *)((long)__s + uVar15 * 8) = *(long *)((long)__s + uVar15 * 8) + uVar6;
          bVar3 = (long)uVar15 < (long)*(int *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc);
          uVar15 = uVar15 + 1;
        } while (bVar3);
      }
      if (FLAG_trace_gc_freelists_verbose != '\0') {
        pvVar13 = *(void **)(this + 0x30);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pvVar14 = (void *)((ulong)local_1b0 | 1);
        if ((local_1b0[0] & 1) != 0) {
          pvVar14 = local_1a0;
        }
        PrintIsolate(pvVar13,"%s",pvVar14);
        if ((local_1b0[0] & 1) != 0) {
          operator_delete(local_1a0);
        }
      }
      uVar11 = uVar11 + 1;
      local_198 = &PTR__basic_ostringstream_01c6c858;
      local_128[0] = &PTR__basic_ostringstream_01c6c880;
      local_190 = &PTR__basic_stringbuf_01c67100;
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      local_190 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_188);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_128);
      lVar16 = *(long *)(lVar16 + 0xe0);
    } while (lVar16 != 0);
    uVar15 = (ulong)uVar11;
    plVar12 = *(long **)(this + 0xf0);
  }
  pvVar14 = *(void **)(this + 0x30);
  uVar6 = (**(code **)(*plVar12 + 0x60))(plVar12);
  uVar7 = (**(code **)(**(long **)(this + 0xf0) + 0x90))(*(long **)(this + 0xf0));
  uVar8 = (**(code **)(**(long **)(this + 0xf0) + 0x48))(*(long **)(this + 0xf0));
  uVar10 = *(ulong *)(*(long *)(this + 0xf0) + 0xa8);
  uVar9 = (**(code **)(**(long **)(this + 0xf0) + 0x48))(*(long **)(this + 0xf0));
  PrintIsolate(pvVar14,
               "%d pages. Free space: %.1f MB (waste: %.2f). Usage: %.1f/%.1f (MB) -> %.2f%%.\n",
               (double)uVar6 * 9.5367431640625e-07,(double)uVar7 * 9.5367431640625e-07,
               (double)uVar8 * 9.5367431640625e-07,(double)uVar10 * 9.5367431640625e-07,
               ((double)uVar9 / (double)*(ulong *)(*(long *)(this + 0xf0) + 0xa8)) * 100.0,uVar15);
  PrintIsolate(*(void **)(this + 0x30),
               "FreeLists global statistics: [category: length || total free KB]\n");
  local_198 = (undefined **)0x1c6c8a8;
  local_128[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_128,&local_190);
  local_190 = &PTR__basic_streambuf_01c671a8;
  local_198 = &PTR__basic_ostringstream_01c6c858;
  local_128[0] = &PTR__basic_ostringstream_01c6c880;
  local_98 = 0xffffffff;
  local_a0 = 0;
  std::__ndk1::locale::locale(alStack_188);
  local_190 = &PTR__basic_stringbuf_01c67100;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_130 = 0x10;
  if (-1 < *(int *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc)) {
    uVar15 = 0;
    do {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_198,"[",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,(int)uVar15);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,": ",2);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(int *)((long)local_208 + uVar15 * 4));
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," || ",4);
      *(uint *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 8) =
           *(uint *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 8) & 0xfffffeff | 4;
      *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x10) = 2;
      dVar17 = (double)NEON_ucvtf(*(undefined8 *)((long)__s + uVar15 * 8));
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          dVar17 * 0.0009765625);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," KB]",4);
      bVar3 = uVar15 != *(uint *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc);
      pcVar1 = "\n";
      if (bVar3) {
        pcVar1 = ", ";
      }
      uVar6 = 1;
      if (bVar3) {
        uVar6 = 2;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,pcVar1,uVar6);
      bVar3 = (long)uVar15 < (long)*(int *)(*(long *)(*(long *)(this + 0xf0) + 0x60) + 0xc);
      uVar15 = uVar15 + 1;
    } while (bVar3);
  }
  pvVar13 = *(void **)(this + 0x30);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pvVar14 = (void *)((ulong)local_1b0 | 1);
  if ((local_1b0[0] & 1) != 0) {
    pvVar14 = local_1a0;
  }
  PrintIsolate(pvVar13,"%s",pvVar14);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  local_198 = &PTR__basic_ostringstream_01c6c858;
  local_128[0] = &PTR__basic_ostringstream_01c6c880;
  local_190 = &PTR__basic_stringbuf_01c67100;
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  local_190 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_188);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_128);
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (local_208 != (void *)0x0) {
    operator_delete(local_208);
  }
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

