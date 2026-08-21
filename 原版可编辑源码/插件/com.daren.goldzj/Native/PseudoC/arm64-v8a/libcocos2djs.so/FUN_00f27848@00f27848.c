
int FUN_00f27848(Isolate *param_1,undefined8 param_2,basic_ostream *param_3,undefined8 param_4,
                undefined8 *param_5,undefined8 param_6,Instruction *param_7,Instruction *param_8,
                Instruction *param_9)

{
  RelocIterator RVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  size_t sVar8;
  basic_ostream *pbVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  long lVar14;
  Instruction *pIVar15;
  ulong uVar16;
  RelocIterator *this;
  int iVar17;
  RelocIterator *pRVar18;
  Instruction *pIVar19;
  Instruction *pIVar20;
  RelocIterator *pRVar21;
  void *__src;
  undefined1 auVar22 [16];
  Instruction *local_e10;
  undefined1 local_e08;
  Instruction *local_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  char local_dd8;
  Instruction *local_dd0;
  undefined1 local_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 *local_da8;
  undefined8 *local_da0;
  undefined8 *puStack_d98;
  undefined8 *local_d90;
  undefined8 *local_d88;
  undefined8 *local_d80;
  undefined8 *local_d78;
  undefined8 *local_d70;
  undefined8 *puStack_d68;
  CodeCommentsIterator aCStack_d60 [24];
  undefined8 local_d48;
  undefined8 *local_d40;
  undefined8 local_d38;
  undefined1 local_d30;
  undefined1 *local_d28;
  undefined8 uStack_d20;
  int local_d18;
  undefined1 *local_d10;
  undefined8 uStack_d08;
  undefined1 auStack_d00 [3072];
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [128];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_d48 = param_4;
  local_d40 = param_5;
  if ((int)param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!code.is_null()");
  }
  local_100 = local_f0;
  local_d28 = auStack_d00;
  local_d18 = 0;
  uStack_f8 = 0x80;
  uStack_d08 = 0xc00;
  uStack_d20 = 0xc00;
  local_d30 = 0;
  local_d38 = param_6;
  local_d10 = local_d28;
  uVar6 = v8::internal::CodeReference::code_comments((CodeReference *)&local_d48);
  uVar4 = v8::internal::CodeReference::code_comments_size((CodeReference *)&local_d48);
  v8::internal::CodeCommentsIterator::CodeCommentsIterator(aCStack_d60,uVar6,uVar4);
  uVar6 = extraout_x1;
  if (param_1 != (Isolate *)0x0) {
    auVar22 = v8::internal::InstructionStream::PcIsOffHeap(param_1,(ulong)param_7);
    uVar6 = auVar22._8_8_;
    if ((auVar22._0_8_ & 1) != 0) {
      this = (RelocIterator *)0x0;
      goto LAB_00f27918;
    }
  }
  this = v8::internal::Malloced::operator_new((Malloced *)0x40,uVar6);
  v8::internal::RelocIterator::RelocIterator(this,local_d48,local_d40,0xffffffff);
LAB_00f27918:
  pIVar19 = param_7;
  if (param_7 < param_8) {
    iVar17 = -1;
LAB_00f279a4:
    iVar5 = disasm::Disassembler::ConstantPoolSizeAt((Disassembler *)&local_d38,(uchar *)pIVar19);
    pIVar20 = pIVar19;
    if (iVar5 < 0) {
      if ((((this == (RelocIterator *)0x0) || (this[0x38] != (RelocIterator)0x0)) ||
          (*(Instruction **)(this + 0x10) != pIVar19)) || (this[0x18] != (RelocIterator)0x8)) {
        *local_100 = 0;
        iVar5 = disasm::Disassembler::InstructionDecode(&local_d38,local_100,uStack_f8,pIVar19);
        lVar14 = (long)iVar5;
      }
      else {
        v8::internal::SNPrintF
                  (local_100,uStack_f8,"%08lx      jump table entry %4zu",*(long *)pIVar19,
                   *(long *)pIVar19 - (long)param_7);
        lVar14 = 8;
      }
    }
    else {
      v8::internal::SNPrintF
                (local_100,uStack_f8,"%08x       constant pool begin (num_const = %d)",
                 *(undefined4 *)pIVar19,iVar5);
      lVar14 = 4;
      iVar17 = iVar5;
    }
    do {
      pIVar19 = pIVar20 + lVar14;
      local_d70 = (undefined8 *)0x0;
      puStack_d68 = (undefined8 *)0x0;
      local_d80 = (undefined8 *)0x0;
      local_d78 = (undefined8 *)0x0;
      local_d90 = (undefined8 *)0x0;
      local_d88 = (undefined8 *)0x0;
      local_da0 = (undefined8 *)0x0;
      puStack_d98 = (undefined8 *)0x0;
      local_da8 = (undefined8 *)0x0;
      if ((this == (RelocIterator *)0x0) || (this[0x38] != (RelocIterator)0x0)) {
        pvVar12 = (void *)0x0;
      }
      else {
        pRVar21 = (RelocIterator *)0x0;
        pRVar18 = (RelocIterator *)0x0;
        __src = (void *)0x0;
        do {
          pIVar15 = *(Instruction **)(this + 0x10);
          pvVar12 = __src;
          if (pIVar19 <= pIVar15) break;
          local_e10 = pIVar15;
          if (local_d88 < local_d80) {
            *local_d88 = pIVar15;
            local_d88 = local_d88 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
            __push_back_slow_path<unsigned_long>
                      ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)&local_d90,
                       (ulong *)&local_e10);
          }
          RVar1 = this[0x18];
          if (pRVar21 < pRVar18) {
            *pRVar21 = RVar1;
          }
          else {
            sVar8 = (long)pRVar21 - (long)__src;
            uVar6 = sVar8 + 1;
            if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar16 = ((long)pRVar18 - (long)__src) * 2;
            if (uVar6 <= uVar16) {
              uVar6 = uVar16;
            }
            if (0x3ffffffffffffffe < (ulong)((long)pRVar18 - (long)__src)) {
              uVar6 = 0x7fffffffffffffff;
            }
            if (uVar6 == 0) {
              pvVar12 = (void *)0x0;
            }
            else {
              pvVar12 = operator_new(uVar6);
            }
            pRVar21 = (RelocIterator *)((long)pvVar12 + sVar8);
            pRVar18 = (RelocIterator *)((long)pvVar12 + uVar6);
            *pRVar21 = RVar1;
            if (0 < (long)sVar8) {
              memcpy(pvVar12,__src,sVar8);
            }
            if (__src != (void *)0x0) {
              operator_delete(__src);
            }
          }
          pRVar21 = pRVar21 + 1;
          local_e10 = *(Instruction **)(this + 0x20);
          if (local_da0 < puStack_d98) {
            *local_da0 = local_e10;
            local_da0 = local_da0 + 1;
          }
          else {
            std::__ndk1::vector<long,std::__ndk1::allocator<long>>::__push_back_slow_path<long>
                      ((vector<long,std::__ndk1::allocator<long>> *)&local_da8,(long *)&local_e10);
          }
          v8::internal::RelocIterator::next(this);
          __src = pvVar12;
        } while (this[0x38] == (RelocIterator)0x0);
      }
      uVar6 = v8::internal::CodeCommentsIterator::HasCurrent(aCStack_d60);
      if ((uVar6 & 1) != 0) {
        do {
          uVar6 = v8::internal::CodeCommentsIterator::GetPCOffset(aCStack_d60);
          if ((ulong)((long)pIVar19 - (long)param_7) <= (uVar6 & 0xffffffff)) break;
          local_e10 = (Instruction *)v8::internal::CodeCommentsIterator::GetComment(aCStack_d60);
          if (local_d70 < puStack_d68) {
            *local_d70 = local_e10;
            local_d70 = local_d70 + 1;
          }
          else {
            std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
            __push_back_slow_path<char_const*>
                      ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)&local_d78,
                       (char **)&local_e10);
          }
          v8::internal::CodeCommentsIterator::Next(aCStack_d60);
          uVar6 = v8::internal::CodeCommentsIterator::HasCurrent(aCStack_d60);
        } while ((uVar6 & 1) != 0);
      }
      if (local_d70 != local_d78) {
        uVar6 = 0;
        do {
          v8::internal::StringBuilder::AddFormatted
                    ((char *)&local_d28,&DAT_019a9451,local_d78[uVar6]);
          pcVar7 = (char *)v8::internal::SimpleStringBuilder::Finalize
                                     ((SimpleStringBuilder *)&local_d28);
          sVar8 = strlen(pcVar7);
          pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_3,pcVar7,sVar8);
          std::__ndk1::ios_base::getloc();
          plVar10 = (long *)std::__ndk1::locale::use_facet
                                      ((locale *)&local_e10,(id *)&std::__ndk1::ctype<char>::id);
          cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
          std::__ndk1::locale::~locale((locale *)&local_e10);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar3);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
          uVar6 = uVar6 + 1;
          local_d18 = 0;
        } while (uVar6 < (ulong)((long)local_d70 - (long)local_d78 >> 3));
      }
      if ((pIVar20 == param_9) && (v8::internal::FLAG_log_colour != '\0')) {
        v8::internal::StringBuilder::AddFormatted((char *)&local_d28,&DAT_019a9466);
      }
      v8::internal::StringBuilder::AddFormatted
                ((char *)&local_d28,"%p  %4tx  ",pIVar20,(long)pIVar20 - (long)param_7);
      v8::internal::StringBuilder::AddFormatted((char *)&local_d28,"%s",local_100);
      if (local_d88 != local_d90) {
        uVar6 = 0;
        if ((int)local_d48 != 0) goto LAB_00f27c90;
LAB_00f27c20:
        uStack_df0 = 0;
        do {
          local_df8 = 0;
          while( true ) {
            local_e08 = *(undefined1 *)((long)pvVar12 + uVar6);
            local_e10 = (Instruction *)local_d90[uVar6];
            local_e00 = (Instruction *)local_da8[uVar6];
            FUN_00f28180(&local_d28,param_1,param_2,param_3,local_d48,local_d40,&local_e10,
                         uVar6 == 0);
            uVar6 = uVar6 + 1;
            if ((ulong)((long)local_d88 - (long)local_d90 >> 3) <= uVar6) goto LAB_00f27cb0;
            if ((int)local_d48 == 0) goto LAB_00f27c20;
LAB_00f27c90:
            uStack_df0 = v8::internal::CodeReference::constant_pool((CodeReference *)&local_d48);
            if ((int)local_d48 != 1) break;
            local_df8 = *local_d40;
          }
        } while( true );
      }
LAB_00f27cb0:
      if ((local_d90 == local_d88) && ((int)local_d48 != 0)) {
        local_dc8 = 0x13;
        local_dc0 = 0;
        uStack_db8 = 0;
        local_db0 = 0;
        local_dd0 = pIVar20;
        uVar6 = v8::internal::RelocInfo::IsInConstantPool((RelocInfo *)&local_dd0);
        if ((uVar6 & 1) != 0) {
          lVar14 = v8::internal::Instruction::ImmPCOffsetTarget(local_dd0);
          v8::internal::RelocIterator::RelocIterator
                    ((RelocIterator *)&local_e10,local_d48,local_d40,0xffffffff);
          while (local_dd8 == '\0') {
            uVar6 = v8::internal::RelocInfo::IsInConstantPool((RelocInfo *)&local_e00);
            if (((uVar6 & 1) != 0) &&
               (lVar11 = v8::internal::Instruction::ImmPCOffsetTarget(local_e00), lVar11 == lVar14))
            {
              FUN_00f28180(&local_d28,param_1,param_2,param_3,local_d48,local_d40,
                           (RelocInfo *)&local_e00,1);
              break;
            }
            v8::internal::RelocIterator::next((RelocIterator *)&local_e10);
          }
        }
      }
      if ((pIVar20 == param_9) && (v8::internal::FLAG_log_colour != '\0')) {
        v8::internal::StringBuilder::AddFormatted((char *)&local_d28,&DAT_019a9479);
      }
      pcVar7 = (char *)v8::internal::SimpleStringBuilder::Finalize
                                 ((SimpleStringBuilder *)&local_d28);
      sVar8 = strlen(pcVar7);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_3,pcVar7,sVar8);
      std::__ndk1::ios_base::getloc();
      plVar10 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_e10,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
      std::__ndk1::locale::~locale((locale *)&local_e10);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
      local_d18 = 0;
      if (local_da8 != (undefined8 *)0x0) {
        local_da0 = local_da8;
        operator_delete(local_da8);
      }
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      if (local_d90 != (undefined8 *)0x0) {
        local_d88 = local_d90;
        operator_delete(local_d90);
      }
      if (local_d78 != (undefined8 *)0x0) {
        local_d70 = local_d78;
        operator_delete(local_d78);
      }
      if (param_8 <= pIVar19) break;
      if (iVar17 < 1) goto LAB_00f279a4;
      v8::internal::SNPrintF(local_100,uStack_f8,"%08x       constant",*(undefined4 *)pIVar19);
      lVar14 = 4;
      pIVar20 = pIVar19;
      iVar17 = iVar17 + -1;
    } while( true );
  }
  auVar22 = v8::internal::CodeCommentsIterator::HasCurrent(aCStack_d60);
  pvVar12 = auVar22._8_8_;
  if ((auVar22._0_8_ & 1) != 0) {
    do {
      auVar22 = v8::internal::CodeCommentsIterator::GetPCOffset(aCStack_d60);
      pvVar12 = auVar22._8_8_;
      if ((ulong)((long)pIVar19 - (long)param_7) <= (auVar22._0_8_ & 0xffffffff)) break;
      uVar13 = v8::internal::CodeCommentsIterator::GetComment(aCStack_d60);
      v8::internal::StringBuilder::AddFormatted((char *)&local_d28,&DAT_019a9451,uVar13);
      pcVar7 = (char *)v8::internal::SimpleStringBuilder::Finalize
                                 ((SimpleStringBuilder *)&local_d28);
      sVar8 = strlen(pcVar7);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_3,pcVar7,sVar8);
      std::__ndk1::ios_base::getloc();
      plVar10 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)&local_e10,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
      std::__ndk1::locale::~locale((locale *)&local_e10);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
      local_d18 = 0;
      v8::internal::CodeCommentsIterator::Next(aCStack_d60);
      auVar22 = v8::internal::CodeCommentsIterator::HasCurrent(aCStack_d60);
      pvVar12 = auVar22._8_8_;
    } while ((auVar22._0_8_ & 1) != 0);
  }
  if (this != (RelocIterator *)0x0) {
    v8::internal::Malloced::operator_delete((Malloced *)this,pvVar12);
  }
  if (-1 < local_d18) {
    v8::internal::SimpleStringBuilder::Finalize((SimpleStringBuilder *)&local_d28);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)pIVar19 - (int)param_7;
}

