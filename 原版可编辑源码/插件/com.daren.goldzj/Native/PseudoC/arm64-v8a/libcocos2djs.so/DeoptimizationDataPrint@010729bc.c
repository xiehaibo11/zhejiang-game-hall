
/* v8::internal::DeoptimizationData::DeoptimizationDataPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::DeoptimizationData::DeoptimizationDataPrint
          (DeoptimizationData *this,basic_ostream *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  basic_ostream *pbVar10;
  long *plVar11;
  char *pcVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong local_128;
  ulong local_120;
  ulong local_118 [2];
  undefined **local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar14 = tpidr_el0;
  local_70 = *(long *)(lVar14 + 0x28);
  if (*(uint *)(*(long *)this + 3) < 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Deoptimization Input Data invalidated by lazy deoptimization\n",0x3d);
    lVar14 = *(long *)(lVar14 + 0x28);
  }
  else {
    puStack_100 = auStack_f0;
    local_108 = &PTR__NameConverter_01cbdfa8;
    local_f8 = 0x80;
    iVar6 = *(int *)(*(long *)this + 0xb);
    iVar5 = iVar6 >> 1;
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"Inlined functions (count = ",0x1b);
    pbVar10 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,")\n",2);
    if (1 < iVar6) {
      iVar6 = 0;
      lVar17 = 0;
      do {
        uVar15 = *(ulong *)this & 0xffffffff00000000;
        uVar1 = *(uint *)((uVar15 | *(uint *)(*(ulong *)this + 0xf)) + (long)iVar6 + 7);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1," ",1);
        local_118[0] = uVar15 | uVar1;
        pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)local_118);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,"\n",1);
        lVar17 = lVar17 + 1;
        iVar6 = iVar6 + 4;
      } while (lVar17 < iVar5);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    iVar5 = *(int *)(*(long *)this + 3) >> 1;
    iVar6 = iVar5 + -9;
    uVar1 = iVar6 / 3;
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"Deoptimization Input Data (deopt points = ",0x2a);
    pbVar10 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,uVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,")\n",2);
    if (4 < iVar5 - 7U) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1," index  bytecode-offset    pc",0x1d);
      if (FLAG_print_code_verbose != '\0') {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"  commands",10);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    }
    if (2 < iVar6) {
      uVar15 = 0;
      do {
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 6;
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                             (int)uVar15);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,"  ",2);
        *(undefined8 *)(pbVar10 + *(long *)(*(long *)pbVar10 + -0x18) + 0x18) = 0xf;
        iVar6 = (int)uVar15 * 0xc;
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                             *(int *)(*(long *)this + (long)(iVar6 + 0x24) + 7) >> 1);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,"  ",2);
        *(undefined8 *)(pbVar10 + *(long *)(*(long *)pbVar10 + -0x18) + 0x18) = 4;
        iVar5 = *(int *)(*(long *)this + (long)(iVar6 + 0x2c) + 7) >> 1;
        if (iVar5 == -1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"NA",2)
          ;
        }
        else {
          *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
               *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffffb5 | 8;
          plVar11 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1
                                       ,iVar5);
          *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) =
               *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) & 0xffffffb5 | 2;
        }
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 2;
        if (FLAG_print_code_verbose == '\0') {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
        }
        else {
          uVar16 = *(ulong *)this;
          TranslationIterator::TranslationIterator
                    ((TranslationIterator *)local_118,
                     uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 7),
                     *(int *)(uVar16 + 7 + (long)(iVar6 + 0x28)) >> 1);
          uVar4 = TranslationIterator::Next((TranslationIterator *)local_118);
          iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
          iVar6 = TranslationIterator::Next((TranslationIterator *)local_118);
          iVar7 = TranslationIterator::Next((TranslationIterator *)local_118);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1,"  ",2);
          pcVar12 = (char *)Translation::StringFor(uVar4);
          sVar13 = strlen(pcVar12);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10,pcVar12,sVar13);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10," {frame count=",0xe);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar5);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10,", js frame count=",0x11);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar6);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar10,", update_feedback_count=",0x18);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar7);
          uVar16 = 2;
          pcVar12 = "}\n";
          while( true ) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar10,pcVar12,uVar16);
            uVar16 = TranslationIterator::HasNext((TranslationIterator *)local_118);
            if (((uVar16 & 1) == 0) ||
               (iVar5 = TranslationIterator::Next((TranslationIterator *)local_118), iVar5 == 0))
            break;
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0x1f;
            pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,"    ",4);
            pcVar12 = (char *)Translation::StringFor(iVar5);
            sVar13 = strlen(pcVar12);
            pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar10,pcVar12,sVar13);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar10," ",1);
            switch(iVar5) {
            case 1:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              iVar6 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar9 = TranslationIterator::Next((TranslationIterator *)local_118);
              iVar7 = TranslationIterator::Next((TranslationIterator *)local_118);
              iVar8 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = *(ulong *)this & 0xffffffff00000000;
              uVar2 = *(uint *)((uVar16 | *(uint *)(*(ulong *)this + 0xf)) + (long)(iVar6 << 2) + 7)
              ;
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{bytecode_offset=",0x11);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", function=",0xb);
              local_128 = uVar16 | uVar2;
              local_120 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_128);
              pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)&local_120);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", height=",9);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   uVar9);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", retval=@",10);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar7);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,"(#",2);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar8);
              goto LAB_0107327c;
            case 2:
            case 3:
            case 4:
            case 5:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              iVar6 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = *(ulong *)this & 0xffffffff00000000;
              uVar2 = *(uint *)((uVar16 | *(uint *)(*(ulong *)this + 0xf)) + (long)(iVar6 << 2) + 7)
              ;
              uVar9 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{bailout_id=",0xc);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", function=",0xb);
              local_128 = uVar16 | uVar2;
              local_120 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_128);
              pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)&local_120);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", height=",9);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   uVar9);
              break;
            case 6:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = *(ulong *)this & 0xffffffff00000000;
              uVar2 = *(uint *)((uVar16 | *(uint *)(*(ulong *)this + 0xf)) + (long)(iVar5 << 2) + 7)
              ;
              uVar9 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{function=",10);
              local_128 = uVar16 | uVar2;
              local_120 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_128);
              pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)&local_120);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", height=",9);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   uVar9);
              break;
            case 7:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = 0xe;
              pcVar12 = "{object_index=";
              goto LAB_010733bc;
            case 8:
            case 9:
              cVar3 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{arguments_type=",0x10);
              if (cVar3 == '\x02') {
                sVar13 = 0xe;
                pcVar12 = "REST_PARAMETER";
              }
              else if (cVar3 == '\x01') {
                sVar13 = 0x12;
                pcVar12 = "UNMAPPED_ARGUMENTS";
              }
              else {
                if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                }
                sVar13 = 0x10;
                pcVar12 = "MAPPED_ARGUMENTS";
              }
              goto LAB_01073528;
            case 10:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = 8;
              pcVar12 = "{length=";
              goto LAB_010733bc;
            case 0xb:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pcVar12 = (char *)disasm::NameConverter::NameOfCPURegister
                                          ((NameConverter *)&local_108,iVar5);
              sVar13 = strlen(pcVar12);
LAB_01073528:
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              break;
            case 0xc:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pcVar12 = (char *)disasm::NameConverter::NameOfCPURegister
                                          ((NameConverter *)&local_108,iVar5);
              sVar13 = strlen(pcVar12);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              goto LAB_010732d4;
            case 0xd:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pcVar12 = (char *)disasm::NameConverter::NameOfCPURegister
                                          ((NameConverter *)&local_108,iVar5);
              sVar13 = strlen(pcVar12);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              goto LAB_01073390;
            case 0xe:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pcVar12 = (char *)disasm::NameConverter::NameOfCPURegister
                                          ((NameConverter *)&local_108,iVar5);
              sVar13 = strlen(pcVar12);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              goto LAB_01073488;
            case 0xf:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pcVar12 = (char *)disasm::NameConverter::NameOfCPURegister
                                          ((NameConverter *)&local_108,iVar5);
              sVar13 = strlen(pcVar12);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              goto LAB_010734c0;
            case 0x10:
            case 0x11:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              if (iVar5 == -1) {
                pcVar12 = "invalid";
              }
              else {
                pcVar12 = (char *)(&RegisterName(v8::internal::VRegister)::Names)[iVar5];
              }
              sVar13 = strlen(pcVar12);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,pcVar12,sVar13);
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar10,"}",1);
              goto switchD_01072e88_default;
            case 0x12:
            case 0x17:
            case 0x18:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = 7;
              pcVar12 = "{input=";
LAB_010733bc:
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,pcVar12,uVar16);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
              break;
            case 0x13:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
LAB_010732d4:
              uVar16 = 9;
              pcVar12 = " (int32)}";
              goto LAB_01073538;
            case 0x14:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
LAB_01073390:
              uVar16 = 9;
              pcVar12 = " (int64)}";
              goto LAB_01073538;
            case 0x15:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
LAB_01073488:
              uVar16 = 10;
              pcVar12 = " (uint32)}";
              goto LAB_01073538;
            case 0x16:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{input=",7);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
LAB_010734c0:
              uVar16 = 8;
              pcVar12 = " (bool)}";
              goto LAB_01073538;
            case 0x19:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar16 = *(ulong *)this & 0xffffffff00000000;
              uVar2 = *(uint *)((uVar16 | *(uint *)(*(ulong *)this + 0xf)) + (long)(iVar5 << 2) + 7)
              ;
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{literal_id=",0xc);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10," (",2);
              local_120 = uVar16 | uVar2;
              pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)&local_120);
LAB_0107327c:
              uVar16 = 2;
              pcVar12 = ")}";
              goto LAB_01073538;
            case 0x1a:
              iVar5 = TranslationIterator::Next((TranslationIterator *)local_118);
              uVar4 = TranslationIterator::Next((TranslationIterator *)local_118);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_1,"{feedback={vector_index=",0x18);
              pbVar10 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                                   iVar5);
              pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar10,", slot=",7);
              pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,uVar4);
              uVar16 = 2;
              pcVar12 = "}}";
              goto LAB_01073538;
            default:
              goto switchD_01072e88_default;
            }
            uVar16 = 1;
            pcVar12 = "}";
LAB_01073538:
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar10,pcVar12,uVar16);
switchD_01072e88_default:
            uVar16 = 1;
            pbVar10 = param_1;
            pcVar12 = "\n";
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar1);
    }
    lVar14 = *(long *)(lVar14 + 0x28);
  }
  if (lVar14 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

