
/* v8::internal::Code::Disassemble(char const*, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Isolate*, unsigned long) */

void __thiscall
v8::internal::Code::Disassemble
          (Code *this,char *param_1,basic_ostream *param_2,Isolate *param_3,ulong param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  basic_ostream *pbVar8;
  size_t sVar9;
  ulong *puVar10;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 local_b8;
  ulong uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  int aiStack_98 [2];
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_80;
  char local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"kind = ",7);
  uVar16 = (ulong)(*(uint *)(*(long *)this + 0x17) >> 1) & 0x1f;
  if (0xb < (uint)uVar16) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar19 = (&PTR_s_OPTIMIZED_FUNCTION_019d1195_0x16_01cb2748)[uVar16];
  pIVar1 = param_3 + 0x95a0;
  sVar9 = strlen(pcVar19);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar8,pcVar19,sVar9);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  if (param_1 == (char *)0x0) {
    if ((*(uint *)(*(long *)this + 0x17) & 0x3e) == 2) {
      param_1 = (char *)interpreter::Interpreter::LookupNameOfBytecodeHandler
                                  (*(Interpreter **)(param_3 + 0xb6e8));
    }
    else {
      param_1 = (char *)Builtins::Lookup((Builtins *)(param_3 + 0x9e00),*(long *)this + 0x3f);
    }
    if (param_1 != (char *)0x0) goto LAB_0107367c;
  }
  else {
LAB_0107367c:
    if (*param_1 != '\0') {
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2,"name = ",7);
      sVar9 = strlen(param_1);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,param_1,sVar9);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
    }
  }
  if ((*(byte *)(*(long *)this + 0x17) & 0x3e) == 0) {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"stack_slots = ",0xe);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                        *(uint *)(*(long *)this + 0x17) >> 7 & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"compiler = ",0xb);
  bVar5 = (*(uint *)(*(long *)this + 0x17) & 0x40) != 0;
  pcVar19 = "unknown";
  if (bVar5) {
    pcVar19 = "turbofan";
  }
  uVar16 = 7;
  if (bVar5) {
    uVar16 = 8;
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar8,pcVar19,uVar16);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"address = ",10);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,*(void **)this);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n\n",2);
  lVar17 = *(long *)this;
  if (*(int *)(lVar17 + 0x17) < 0) {
    iVar6 = *(int *)(lVar17 + 0x13);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"Trampoline (size = ",0x13);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
    uVar16 = *(ulong *)this;
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = puVar2;
      if (puVar3 == puVar2) {
        puVar10 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar10 + 1;
      *puVar10 = uVar16;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
    }
    Disassembler::Decode
              ((Disassembler *)param_3,param_2,uVar16 + 0x3f,uVar16 + 0x3f + (long)iVar6,1,puVar10,
               param_4);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
    lVar17 = *(long *)this;
  }
  iVar6 = *(int *)(lVar17 + 0x1b);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"Instructions (size = ",0x15);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
  uVar16 = *(ulong *)this;
  if (*(int *)(uVar16 + 0x17) < 0) {
    lVar17 = Isolate::CurrentEmbeddedBlob();
    if (lVar17 == 0) {
      lVar17 = *(long *)this + 0x3f;
    }
    else {
      uVar14 = Isolate::CurrentEmbeddedBlob();
      uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
      uStack_b0 = uStack_b0 & 0xffffffff;
      local_b8 = uVar14;
      lVar17 = EmbeddedData::InstructionStartOfBuiltin
                         ((EmbeddedData *)&local_b8,*(int *)(*(long *)this + 0x27));
    }
  }
  else {
    lVar17 = uVar16 + 0x3f;
  }
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = puVar2;
    if (puVar3 == puVar2) {
      puVar10 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar16;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
  }
  Disassembler::Decode((Disassembler *)param_3,param_2,lVar17,lVar17 + iVar6,1,puVar10,param_4);
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  uVar16 = *(ulong *)this & 0xffffffff00000000;
  uVar18 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar18 == *(uint *)(uVar16 + 0xa0)) || (uVar18 == *(uint *)(uVar16 + 0x180))) {
    uVar15 = *(ulong *)(uVar16 + 0x3c0);
  }
  else {
    uVar15 = uVar16 | uVar18;
    if (((uVar18 & 1) == 0) || (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x85)) {
      uVar15 = uVar16 | *(uint *)(uVar15 + 3);
    }
  }
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)&local_a8,uVar15,0);
  if (local_90 != -1) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2,"Source positions:\n pc offset  position\n",0x27);
    if (local_90 != -1) {
      do {
        *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 10;
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar11 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,local_88)
        ;
        *(uint *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 8) =
             *(uint *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 8) & 0xffffffb5 | 2;
        *(undefined8 *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 0x18) = 10;
        pbVar8 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           (pbVar11,(local_80 >> 1 & 0x3fffffff) - 1);
        pcVar19 = "";
        if (local_78 != '\0') {
          pcVar19 = "  statement";
        }
        uVar16 = 0;
        if (local_78 != '\0') {
          uVar16 = 0xb;
        }
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar8,pcVar19,uVar16);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
        SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
      } while (local_90 != -1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  uVar16 = *(ulong *)this & 0xffffffff00000000;
  uVar18 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar18 == *(uint *)(uVar16 + 0xa0)) || (uVar18 == *(uint *)(uVar16 + 0x180))) {
    uVar15 = *(ulong *)(uVar16 + 0x3c0);
  }
  else {
    uVar15 = uVar16 | uVar18;
    if (((uVar18 & 1) == 0) || (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x85)) {
      uVar15 = uVar16 | *(uint *)(uVar15 + 3);
    }
  }
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)&local_a8,uVar15,1);
  if (local_90 != -1) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2,"External Source positions:\n pc offset  fileid  line\n",0x34);
    while (local_90 != -1) {
      *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 10;
      *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
           *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
      pbVar11 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,local_88);
      *(uint *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 8) =
           *(uint *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 8) & 0xffffffb5 | 2;
      *(undefined8 *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 0x18) = 10;
      pbVar11 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          (pbVar11,local_80 >> 0x15 & 0x3ff);
      *(undefined8 *)(pbVar11 + *(long *)(*(long *)pbVar11 + -0x18) + 0x18) = 10;
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         (pbVar11,local_80 >> 1 & 0xfffff);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  uVar16 = *(ulong *)this;
  if ((*(byte *)(uVar16 + 0x17) & 0x3e) == 0) {
    local_a8 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 7);
    DeoptimizationData::DeoptimizationDataPrint((DeoptimizationData *)&local_a8,param_2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  lVar17 = *(long *)this;
  if (((*(uint *)(lVar17 + 0x17) & 0x3e) == 10) || ((*(uint *)(lVar17 + 0x17) >> 6 & 1) != 0)) {
    SafepointTable::SafepointTable((SafepointTable *)&local_a8);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"Safepoints (size = ",0x13);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                        (aiStack_98[0] + 0xc) * uStack_a0._4_4_ + 8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
    if (uStack_a0._4_4_ != 0) {
      uVar15 = 0;
      uVar16 = 0;
      do {
        lVar17 = *(long *)this;
        uVar20 = uVar15 & 0xfffffffc;
        uVar18 = *(uint *)(CONCAT44(uStack_8c,local_90) + uVar20);
        if (*(int *)(lVar17 + 0x17) < 0) {
          lVar17 = Isolate::CurrentEmbeddedBlob();
          if (lVar17 == 0) {
            lVar17 = *(long *)this;
            goto LAB_01073d68;
          }
          uVar14 = Isolate::CurrentEmbeddedBlob();
          uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
          uStack_b0 = uStack_b0 & 0xffffffff;
          local_b8 = uVar14;
          lVar17 = EmbeddedData::InstructionStartOfBuiltin
                             ((EmbeddedData *)&local_b8,*(int *)(*(long *)this + 0x27));
        }
        else {
LAB_01073d68:
          lVar17 = lVar17 + 0x3f;
        }
        pbVar8 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,
                            (void *)(lVar17 + (ulong)uVar18));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"  ",2);
        *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 6;
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar8 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,uVar18);
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar8,"  ",2);
        *(undefined8 *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 0x18) = 4;
        iVar6 = *(int *)(uVar20 + CONCAT44(uStack_8c,local_90) + 8);
        if (iVar6 == -1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"NA",2)
          ;
        }
        else {
          *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
               *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
          plVar12 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2
                                       ,iVar6);
          *(uint *)((long)plVar12 + *(long *)(*plVar12 + -0x18) + 8) =
               *(uint *)((long)plVar12 + *(long *)(*plVar12 + -0x18) + 8) & 0xffffffb5 | 2;
        }
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 2;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"  ",2);
        SafepointTable::PrintEntry((SafepointTable *)&local_a8,(uint)uVar16,param_2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_2," (sp -> fp)  ",0xd);
        iVar6 = *(int *)(uVar20 + CONCAT44(uStack_8c,local_90) + 4);
        if (iVar6 == -1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_2,"<none>",6);
        }
        else {
          *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 6;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,iVar6);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
        uVar16 = uVar16 + 1;
        uVar15 = uVar15 + 0xc;
      } while (uVar16 < uStack_a0 >> 0x20);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
    lVar17 = *(long *)this;
  }
  if (*(int *)(lVar17 + 0x1f) < *(int *)(lVar17 + 0x23)) {
    HandlerTable::HandlerTable((HandlerTable *)&local_a8);
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"Handler Table (size = ",0x16);
    iVar6 = HandlerTable::NumberOfReturnEntries((HandlerTable *)&local_a8);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
    if ((*(byte *)(*(long *)this + 0x17) & 0x3e) == 0) {
      HandlerTable::HandlerTableReturnPrint((HandlerTable *)&local_a8,param_2);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"RelocInfo (size = ",0x12);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)((*(ulong *)this & 0xffffffff00000000 |
                               (ulong)*(uint *)(*(ulong *)this + 3)) + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
  RelocIterator::RelocIterator((RelocIterator *)&local_a8,*(undefined8 *)this,0xffffffff);
  if (local_70 == '\0') {
    do {
      RelocInfo::Print((RelocInfo *)aiStack_98,param_3,param_2);
      RelocIterator::next((RelocIterator *)&local_a8);
    } while (local_70 == '\0');
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  lVar17 = *(long *)this;
  uVar18 = *(uint *)(lVar17 + 0x17);
  if ((uVar18 & 1) != 0) {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"UnwindingInfo (size = ",0x16);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                        *(int *)(*(long *)this +
                                 ((long)(*(int *)(*(long *)this + 0x13) + 0x47) &
                                 0xfffffffffffffff8U) + -1));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
    lVar17 = *(long *)this + (long)(int)(*(int *)(*(long *)this + 0x13) + 0x47U & 0xfffffff8);
    local_a8 = lVar17 + 7;
    uStack_a0 = *(int *)(lVar17 + -1) + lVar17 + 7;
    EhFrameDisassembler::DisassembleToStream((EhFrameDisassembler *)&local_a8,param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
    lVar17 = *(long *)this;
    uVar18 = *(uint *)(lVar17 + 0x17);
  }
  if ((int)uVar18 < 0) {
    lVar17 = Isolate::CurrentEmbeddedBlob();
    if (lVar17 == 0) {
      lVar17 = *(long *)this;
      goto LAB_010740d0;
    }
    uVar14 = Isolate::CurrentEmbeddedBlob();
    uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
    uStack_b0 = uStack_b0 & 0xffffffff;
    local_b8 = uVar14;
    iVar6 = EmbeddedData::InstructionSizeOfBuiltin
                      ((EmbeddedData *)&local_b8,*(int *)(*(long *)this + 0x27));
    lVar17 = *(long *)this;
  }
  else {
LAB_010740d0:
    iVar6 = *(int *)(lVar17 + 0x13);
  }
  if (iVar6 <= *(int *)(lVar17 + 0x23)) goto LAB_01074200;
  if (*(int *)(lVar17 + 0x17) < 0) {
    lVar17 = Isolate::CurrentEmbeddedBlob();
    if (lVar17 == 0) {
      lVar17 = *(long *)this;
      goto LAB_0107411c;
    }
    uVar14 = Isolate::CurrentEmbeddedBlob();
    uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
    uStack_b0 = uStack_b0 & 0xffffffff;
    local_b8 = uVar14;
    lVar13 = EmbeddedData::InstructionStartOfBuiltin
                       ((EmbeddedData *)&local_b8,*(int *)(*(long *)this + 0x27));
    lVar17 = *(long *)this;
  }
  else {
LAB_0107411c:
    lVar13 = lVar17 + 0x3f;
  }
  iVar6 = *(int *)(lVar17 + 0x23);
  if (*(int *)(lVar17 + 0x17) < 0) {
    lVar17 = Isolate::CurrentEmbeddedBlob();
    if (lVar17 == 0) {
      lVar17 = *(long *)this;
      goto LAB_010741b4;
    }
    uVar14 = Isolate::CurrentEmbeddedBlob();
    uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
    uStack_b0 = uStack_b0 & 0xffffffff;
    local_b8 = uVar14;
    iVar7 = EmbeddedData::InstructionSizeOfBuiltin
                      ((EmbeddedData *)&local_b8,*(int *)(*(long *)this + 0x27));
    lVar17 = *(long *)this;
  }
  else {
LAB_010741b4:
    iVar7 = *(int *)(lVar17 + 0x13);
  }
  PrintCodeCommentsSection(param_2,lVar13 + iVar6,iVar7 - *(int *)(lVar17 + 0x23));
LAB_01074200:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

