
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AsRPO const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,AsRPO *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  void *__s;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long *local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  long local_108;
  Zone *local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  Zone *local_e0;
  long *local_d8;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  locale alStack_b8 [8];
  Zone aZStack_b0 [16];
  void *local_a0;
  long lStack_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_d0 = &PTR__AccountingAllocator_01cbced0;
  uStack_c8 = 0;
  local_c0 = 0;
  Zone::Zone(aZStack_b0,(AccountingAllocator *)&local_d0,
             "../../src/compiler/graph-visualizer.cc:837");
  lVar8 = *(long *)param_2;
  uVar11 = *(uint *)(lVar8 + 0x1c);
  if (uVar11 == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = (ulong)uVar11 + 7 & 0x1fffffff8;
    if ((ulong)(lStack_98 - (long)local_a0) < uVar7) {
      __s = (void *)Zone::NewExpand(aZStack_b0,uVar7);
    }
    else {
      __s = local_a0;
      local_a0 = (void *)((long)local_a0 + uVar7);
    }
    memset(__s,0,(ulong)uVar11);
    lVar8 = *(long *)param_2;
  }
  local_f8 = (long *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = (long *)0x0;
  local_108 = 0;
  local_110 = (undefined8 *)0x0;
  local_d8 = (long *)0x0;
  uVar12 = *(undefined8 *)(lVar8 + 0x10);
  local_100 = aZStack_b0;
  local_e0 = aZStack_b0;
  std::__ndk1::
  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::__add_back_capacity
            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              *)&local_120);
  *(undefined8 *)
   (*(long *)((long)puStack_118 + ((ulong)(local_f0 + local_e8) >> 6 & 0x3fffffffffffff8)) +
   (local_f0 + local_e8 & 0x1ffU) * 8) = uVar12;
  local_e8 = local_e8 + 1;
  *(undefined1 *)
   ((long)__s + ((ulong)*(uint *)(*(long *)(*(long *)param_2 + 0x10) + 0x14) & 0xffffff)) = 1;
  while (local_e8 != 0) {
    while( true ) {
      uVar7 = (local_e8 + local_f0) - 1;
      puVar14 = *(undefined8 **)
                 (*(long *)((long)puStack_118 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                 (uVar7 & 0x1ff) * 8);
      plVar3 = puVar14 + 4;
      uVar11 = *(uint *)((long)puVar14 + 0x14) >> 0x18 & 0xf;
      plVar9 = plVar3;
      if (uVar11 == 0xf) {
        uVar11 = *(uint *)(*plVar3 + 8);
        plVar9 = (long *)(*plVar3 + 0x10);
      }
      if (uVar11 == 0) break;
      lVar8 = (long)(int)uVar11 << 3;
      while( true ) {
        lVar13 = *plVar9;
        uVar7 = (ulong)*(uint *)(lVar13 + 0x14) & 0xffffff;
        if (*(char *)((long)__s + uVar7) == '\0') break;
        lVar8 = lVar8 + -8;
        plVar9 = plVar9 + 1;
        if (lVar8 == 0) goto LAB_016ce168;
      }
      *(undefined1 *)((long)__s + uVar7) = 1;
      uVar7 = 0;
      if ((long)local_110 - (long)puStack_118 != 0) {
        uVar7 = ((long)local_110 - (long)puStack_118) * 0x40 - 1;
      }
      uVar10 = local_e8 + local_f0;
      if (uVar7 == uVar10) {
        std::__ndk1::
        deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                    *)&local_120);
        uVar10 = local_f0 + local_e8;
      }
      *(long *)(*(long *)((long)puStack_118 + (uVar10 >> 6 & 0x3fffffffffffff8)) +
               (uVar10 & 0x1ff) * 8) = lVar13;
      local_e8 = local_e8 + 1;
      if (local_e8 == 0) {
        local_e8 = 0;
        goto LAB_016ce404;
      }
    }
LAB_016ce168:
    *(undefined1 *)((long)__s + ((ulong)*(uint *)((long)puVar14 + 0x14) & 0xffffff)) = 2;
    lVar8 = local_e8 + local_f0;
    lVar13 = 0;
    if ((long)local_110 - (long)puStack_118 != 0) {
      lVar13 = ((long)local_110 - (long)puStack_118) * 0x40 + -1;
    }
    local_e8 = local_e8 + -1;
    if (0x3ff < (lVar13 - lVar8) + 1U) {
      plVar9 = (long *)local_110[-1];
      if ((local_d8 == (long *)0x0) || ((ulong)local_d8[1] < 0x201)) {
        plVar9[1] = 0x200;
        *plVar9 = (long)local_d8;
        local_d8 = plVar9;
      }
      local_110 = local_110 + -1;
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"#",1);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)((long)puVar14 + 0x14) & 0xffffff);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,":",1);
    pbVar4 = (basic_ostream *)operator<<(pbVar4,(Operator *)*puVar14);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"(",1);
    uVar11 = *(byte *)((long)puVar14 + 0x17) & 0xf;
    if (uVar11 == 0xf) {
      uVar11 = *(uint *)(*plVar3 + 8);
      plVar3 = (long *)(*plVar3 + 0x10);
    }
    if (uVar11 != 0) {
      plVar9 = (long *)*plVar3;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"#",1);
      if (plVar9 == (long *)0x0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(uint *)((long)plVar9 + 0x14) & 0xffffff;
      }
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar6);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      if (plVar9 == (long *)0x0) {
        pcVar15 = "null";
      }
      else {
        pcVar15 = *(char **)(*plVar9 + 8);
      }
      sVar5 = strlen(pcVar15);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar4,pcVar15,sVar5);
      if (uVar11 != 1) {
        lVar8 = (long)(int)uVar11 * 8 + -8;
        do {
          plVar3 = plVar3 + 1;
          plVar9 = (long *)*plVar3;
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2)
          ;
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"#",1);
          if (plVar9 == (long *)0x0) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(uint *)((long)plVar9 + 0x14) & 0xffffff;
          }
          pbVar4 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar11);
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar4,":",1);
          if (plVar9 == (long *)0x0) {
            pcVar15 = "null";
          }
          else {
            pcVar15 = *(char **)(*plVar9 + 8);
          }
          sVar5 = strlen(pcVar15);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar4,pcVar15,sVar5);
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,")",1);
    if (puVar14[1] != 0) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"  [Type: ",9);
      pbVar4 = (basic_ostream *)operator<<(pbVar4,puVar14[1]);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"]",1);
    }
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_b8,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_b8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  }
LAB_016ce404:
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_120);
  if (puStack_118 == local_110) {
LAB_016ce484:
    if (((local_120 != (long *)0x0) && (0xf < (ulong)(local_108 - (long)local_120))) &&
       ((uVar7 = local_108 - (long)local_120 >> 3, local_f8 == (long *)0x0 ||
        ((ulong)local_f8[1] <= uVar7)))) {
      local_120[1] = uVar7;
      *local_120 = (long)local_f8;
      local_f8 = local_120;
    }
    Zone::~Zone(aZStack_b0);
    AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_d0);
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar9 = (long *)*puStack_118;
  puVar14 = puStack_118;
  plVar3 = local_d8;
  if (local_d8 != (long *)0x0) goto LAB_016ce454;
  do {
    plVar3 = plVar9;
    plVar3[1] = 0x200;
    *plVar3 = (long)local_d8;
    local_d8 = plVar3;
    do {
      puVar14 = puVar14 + 1;
      if (local_110 == puVar14) {
        if ((long)local_110 - (long)puStack_118 != 0) {
          local_110 = local_110 +
                      (((long)local_110 - (long)puStack_118) - 8U >> 3 ^ 0xffffffffffffffff);
        }
        goto LAB_016ce484;
      }
      plVar9 = (long *)*puVar14;
      if (plVar3 == (long *)0x0) break;
LAB_016ce454:
    } while (0x200 < (ulong)plVar3[1]);
  } while( true );
}

