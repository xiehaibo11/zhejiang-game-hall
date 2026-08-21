
/* v8::internal::compiler::CodeGenerator::AssembleCode() */

void __thiscall v8::internal::compiler::CodeGenerator::AssembleCode(CodeGenerator *this)

{
  AssemblerBase *this_00;
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  CodeGenerator CVar4;
  byte bVar5;
  InstructionBlock IVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  basic_ostream *pbVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  InstructionBlock *pIVar21;
  byte *pbVar22;
  byte local_1f0 [16];
  char *local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8 [2];
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198 [2];
  long local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  this_00 = (AssemblerBase *)(this + 0xd0);
  CVar4 = this[0x260];
  pbVar22 = *(byte **)(this + 0xa0);
  this[0x260] = (CodeGenerator)0x1;
  if ((*pbVar22 >> 4 & 1) != 0) {
    AssembleSourcePosition(this,*(undefined8 *)(this + 0xc0));
  }
  iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  *(int *)(this + 0x480) = iVar11;
  if ((FLAG_debug_code != '\0') && (*(uint *)(pbVar22 + 8) < 2)) {
    AssemblerBase::RecordComment(this_00,"-- Prologue: check code start register --");
    AssembleCodeStartRegisterCheck(this);
    iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  }
  *(int *)(this + 0x484) = iVar11;
  if (*(int *)(pbVar22 + 8) == 0) {
    AssemblerBase::RecordComment(this_00,"-- Prologue: check for deoptimization --");
    BailoutIfDeoptimized(this);
    iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  }
  *(int *)(this + 0x488) = iVar11;
  if (*(int *)(this + 0x45c) != 1) {
    if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 1 & 1) == 0) {
      TurboAssembler::ResetSpeculationPoisonRegister((TurboAssembler *)this_00);
    }
    else {
      AssemblerBase::RecordComment(this_00,"-- Prologue: generate speculation poison --");
      GenerateSpeculationPoisonFromCodeStartRegister(this);
      if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 2 & 1) != 0) {
        AssembleRegisterArgumentPoisoning(this);
      }
    }
  }
  plVar2 = *(long **)(pbVar22 + 0x60);
  lVar14 = local_190;
  for (plVar17 = *(long **)(pbVar22 + 0x58); plVar17 != plVar2; plVar17 = plVar17 + 4) {
    local_190 = *plVar17;
    if (local_190 != *(long *)(pbVar22 + 0x18)) {
      local_198[0] = 0;
      local_188 = 0;
      uStack_180 = 0;
      uVar9 = DefineDeoptimizationLiteral(this,local_198);
      *(undefined4 *)(plVar17 + 3) = uVar9;
      lVar14 = local_190;
    }
    local_190 = lVar14;
    lVar14 = local_190;
  }
  *(undefined8 *)(this + 0x390) = *(undefined8 *)(this + 0x378);
  local_190 = lVar14;
  if (*(long *)(pbVar22 + 0x10) != 0) {
    local_1b8[0] = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    local_1b0 = *(long *)(pbVar22 + 0x10);
    DefineDeoptimizationLiteral(this,local_1b8);
  }
  lVar19 = *(long *)(pbVar22 + 0x60);
  for (lVar14 = *(long *)(pbVar22 + 0x58); lVar14 != lVar19; lVar14 = lVar14 + 0x20) {
    local_1d0 = *(undefined8 *)(lVar14 + 8);
    local_1d8[0] = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    DefineDeoptimizationLiteral(this,local_1d8);
  }
  if (FLAG_perf_prof_unwinding_info != '\0') {
    lVar14 = *(long *)(this + 0x80);
    uVar16 = ((*(long **)(*(long *)(this + 0x28) + 0x10))[1] -
             **(long **)(*(long *)(this + 0x28) + 0x10)) * 0x20000000 >> 0x20;
    uVar15 = *(long *)(this + 0x88) - lVar14 >> 3;
    if (uVar16 >= uVar15 && uVar16 - uVar15 != 0) {
      std::__ndk1::
      vector<v8::internal::compiler::UnwindingInfoWriter::BlockInitialState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::UnwindingInfoWriter::BlockInitialState_const*>>
      ::__append((vector<v8::internal::compiler::UnwindingInfoWriter::BlockInitialState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::UnwindingInfoWriter::BlockInitialState_const*>>
                  *)(this + 0x80),uVar16 - uVar15);
      bVar5 = pbVar22[1];
      goto joined_r0x0162c2a0;
    }
    if (uVar16 < uVar15) {
      *(ulong *)(this + 0x88) = lVar14 + uVar16 * 8;
    }
  }
  bVar5 = pbVar22[1];
joined_r0x0162c2a0:
  if ((bVar5 >> 5 & 1) != 0) {
    uVar16 = (ulong)local_178 >> 0x20;
    local_178 = (undefined **)CONCAT44((int)uVar16,0xffffffff);
    std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::assign
              ((vector<int,v8::internal::ZoneAllocator<int>> *)(this + 0x460),
               (*(long **)(*(long *)(this + 0x28) + 0x10))[1] -
               **(long **)(*(long *)(this + 0x28) + 0x10) >> 3,(int *)&local_178);
    std::__ndk1::
    vector<v8::internal::compiler::TurbolizerInstructionStartInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TurbolizerInstructionStartInfo>>
    ::assign((vector<v8::internal::compiler::TurbolizerInstructionStartInfo,v8::internal::ZoneAllocator<v8::internal::compiler::TurbolizerInstructionStartInfo>>
              *)(this + 0x4a0),*(ulong *)(*(long *)(this + 0x28) + 0xb8),
             (TurbolizerInstructionStartInfo *)&DAT_01a56d70);
  }
  iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  *(int *)(this + 0x48c) = iVar11;
  puVar18 = (undefined8 *)**(long **)(*(long *)(this + 0x28) + 0x18);
  puVar3 = (undefined8 *)(*(long **)(*(long *)(this + 0x28) + 0x18))[1];
  if (puVar18 != puVar3) {
    do {
      pIVar21 = (InstructionBlock *)*puVar18;
      if ((pIVar21[0x7b] == (InstructionBlock)0x0) || (*(long *)(this + 0x198) != 0)) {
        bVar5 = pbVar22[1];
      }
      else {
        Assembler::CodeTargetAlign((Assembler *)this_00);
        bVar5 = pbVar22[1];
      }
      if ((bVar5 >> 5 & 1) != 0) {
        *(int *)(*(long *)(this + 0x460) + (long)*(int *)(pIVar21 + 100) * 4) =
             *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
      }
      *(undefined4 *)(this + 0xb8) = *(undefined4 *)(pIVar21 + 100);
      UnwindingInfoWriter::BeginInstructionBlock
                ((UnwindingInfoWriter *)(this + 0x30),*(int *)(this + 0xf0) - *(int *)(this + 0xe0),
                 pIVar21);
      if (FLAG_code_comments != '\0') {
        local_178 = (undefined **)0x1c6c8a8;
        local_108[0] = (undefined **)0x1c6c8d0;
        std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
        local_78 = 0xffffffff;
        local_80 = 0;
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        local_170 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::locale(alStack_168);
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_158 = 0;
        local_160 = 0;
        local_170 = &PTR__basic_stringbuf_01c67100;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (void *)0x0;
        local_110 = 0x10;
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_178,"-- B",4);
        pbVar12 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                             *(int *)(pIVar21 + 100));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar12," start",6);
        if (pIVar21[0x78] != (InstructionBlock)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_178," (deferred)",0xb);
        }
        if (pIVar21[0x7c] == (InstructionBlock)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_178," (no frame)",0xb);
          IVar6 = pIVar21[0x7d];
        }
        else {
          IVar6 = pIVar21[0x7d];
        }
        if (IVar6 != (InstructionBlock)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_178," (construct frame)",0x12);
        }
        if (pIVar21[0x7e] != (InstructionBlock)0x0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_178," (deconstruct frame)",0x14);
        }
        if (-1 < *(int *)(pIVar21 + 0x6c)) {
          pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_178," (loop up to ",0xd);
          pbVar12 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                               *(int *)(pIVar21 + 0x6c));
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar12,")",1);
        }
        if (-1 < *(int *)(pIVar21 + 0x68)) {
          pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              ((basic_ostream *)&local_178," (in loop ",10);
          pbVar12 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                               *(int *)(pIVar21 + 0x68));
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar12,")",1);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_178," --",3);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pcVar1 = (char *)((ulong)local_1f0 | 1);
        if ((local_1f0[0] & 1) != 0) {
          pcVar1 = local_1e0;
        }
        AssemblerBase::RecordComment(this_00,pcVar1);
        if ((local_1f0[0] & 1) != 0) {
          operator_delete(local_1e0);
        }
        local_178 = &PTR__basic_ostringstream_01c6c858;
        local_108[0] = &PTR__basic_ostringstream_01c6c880;
        local_170 = &PTR__basic_stringbuf_01c67100;
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        local_170 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::~locale(alStack_168);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      }
      FrameAccessState::MarkHasFrame(*(FrameAccessState **)(this + 0x18),(bool)pIVar21[0x7c]);
      Assembler::bind((Label *)this_00);
      TryInsertBranchPoisoning(this,pIVar21);
      if ((pIVar21[0x7d] != (InstructionBlock)0x0) &&
         (AssembleConstructFrame(this), (*(byte *)(**(long **)(this + 0x20) + 0x48) >> 3 & 1) != 0))
      {
        uStack_158 = ExternalReference::isolate_root(*(Isolate **)(this + 0x248));
        local_150 = CONCAT71(local_150._1_7_,7);
        local_178 = (undefined **)((ulong)local_178 & 0xffffffffffffff00);
        local_170 = (undefined **)((ulong)local_170 & 0xffffffffffffff00);
                    /* WARNING: Ignoring partial resolution of indirect */
        local_140._0_4_ = 2;
        uStack_148 = 0xffffffff;
        TurboAssembler::Mov((TurboAssembler *)this_00,&DAT_01a56d7c,&local_178,0);
      }
      iVar11 = *(int *)(pIVar21 + 0x70);
      if (iVar11 < *(int *)(pIVar21 + 0x74)) {
        do {
          iVar10 = AssembleInstruction(this,iVar11,pIVar21);
          if (iVar10 != 0) {
            *(int *)(this + 0x458) = iVar10;
            goto LAB_0162ca30;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(pIVar21 + 0x74));
      }
      *(undefined4 *)(this + 0x458) = 0;
      UnwindingInfoWriter::EndInstructionBlock((UnwindingInfoWriter *)(this + 0x30),pIVar21);
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar3);
    iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  }
  *(int *)(this + 0x490) = iVar11;
  if (*(long *)(this + 0x3d8) != 0) {
    AssemblerBase::RecordComment(this_00,"-- Out of line code --");
    for (plVar17 = *(long **)(this + 0x3d8); plVar17 != (long *)0x0; plVar17 = (long *)plVar17[5]) {
      Assembler::bind((Label *)this_00);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      if (*(int *)(plVar17 + 2) < 0) {
        Assembler::b((Assembler *)this_00,(Label *)(plVar17 + 2));
        Assembler::CheckVeneerPool((Assembler *)this_00,false,false,0x400);
      }
    }
  }
  Assembler::hint((Assembler *)this_00,0);
  PrepareForDeoptimizationExits(this,*(int *)(this + 0x328));
  iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  *(int *)(this + 0x2ec) = iVar11;
  lVar14 = *(long *)(this + 0x2f8);
  *(int *)(this + 0x494) = iVar11;
  if (*(long *)(this + 0x300) != lVar14) {
    uVar16 = *(ulong *)(this + 800);
    plVar17 = (long *)(lVar14 + (uVar16 >> 6 & 0x3fffffffffffff8));
    puVar18 = (undefined8 *)(*plVar17 + (uVar16 & 0x1ff) * 8);
    puVar3 = (undefined8 *)
             (*(long *)(lVar14 + (*(long *)(this + 0x328) + uVar16 >> 6 & 0x3fffffffffffff8)) +
             (*(long *)(this + 0x328) + uVar16 & 0x1ff) * 8);
    if (puVar3 != puVar18) {
      iVar11 = 0;
      do {
        puVar20 = (uint *)*puVar18;
        if (*(char *)((long)puVar20 + 0x26) == '\0') {
          uVar13 = *(uint *)(this + 0x2e8);
          *(uint *)(this + 0x2e8) = uVar13 + 1;
          *puVar20 = uVar13;
          Assembler::bind((Label *)this_00);
          if ((char)puVar20[9] == '\x02') {
            iVar11 = SafepointTableBuilder::UpdateDeoptimizationInfo
                               ((SafepointTableBuilder *)(this + 0x298),puVar20[8],
                                *(int *)(this + 0xf0) - *(int *)(this + 0xe0),iVar11,*puVar20);
          }
          uVar13 = *puVar20;
          if (0x4000 < (int)uVar13) {
            *(undefined4 *)(this + 0x458) = 1;
            goto LAB_0162ca30;
          }
          uVar7 = *(undefined1 *)((long)puVar20 + 0x25);
          iVar10 = Deoptimizer::GetDeoptimizationEntry
                             (*(undefined8 *)(this + 0x248),(char)puVar20[9]);
          if ((**(byte **)(this + 0xa0) >> 4 & 1) != 0) {
            Assembler::RecordDeoptReason
                      ((Assembler *)this_00,uVar7,*(undefined8 *)(puVar20 + 2),uVar13);
          }
          TurboAssembler::CallForDeoptimization((ulong)this_00,iVar10);
          *(undefined1 *)((long)puVar20 + 0x26) = 1;
          *(undefined4 *)(this + 0x458) = 0;
        }
        puVar18 = puVar18 + 1;
        if ((long)puVar18 - *plVar17 == 0x1000) {
          plVar17 = plVar17 + 1;
          puVar18 = (undefined8 *)*plVar17;
        }
      } while (puVar3 != puVar18);
      iVar11 = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
    }
  }
  *(int *)(this + 0x498) = iVar11;
  FinishCode(this);
  *(int *)(this + 0x49c) = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  if (*(long *)(this + 0x3d0) != 0) {
    Assembler::Align((Assembler *)this_00,8);
    for (lVar14 = *(long *)(this + 0x3d0); lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
      Assembler::bind((Label *)this_00);
      AssembleJumpTable((Label **)this,*(ulong *)(lVar14 + 0x10));
    }
  }
  if (FLAG_perf_prof_unwinding_info != '\0') {
    EhFrameWriter::Finish
              ((EhFrameWriter *)(this + 0x38),*(int *)(this + 0xf0) - *(int *)(this + 0xe0));
  }
  SafepointTableBuilder::Emit
            ((SafepointTableBuilder *)(this + 0x298),(Assembler *)this_00,
             *(int *)(**(long **)(this + 0x18) + 4));
  if (*(long *)(this + 0x2c8) != *(long *)(this + 0x2d0)) {
    uVar9 = HandlerTable::EmitReturnTableStart((Assembler *)this_00);
    lVar14 = *(long *)(this + 0x2c8);
    *(undefined4 *)(this + 0x3b8) = uVar9;
    if (*(long *)(this + 0x2d0) != lVar14) {
      lVar19 = 0;
      uVar16 = 0;
      do {
        uVar13 = **(uint **)(lVar14 + lVar19);
        if ((int)uVar13 < 0) {
          uVar13 = ~uVar13;
        }
        else {
          if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar13 = uVar13 - 1;
        }
        HandlerTable::EmitReturnEntry
                  ((Assembler *)this_00,*(int *)((undefined8 *)(lVar14 + lVar19) + 1),uVar13);
        lVar14 = *(long *)(this + 0x2c8);
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 0x10;
      } while (uVar16 < (ulong)(*(long *)(this + 0x2d0) - lVar14 >> 4));
    }
  }
  *(undefined4 *)(this + 0x458) = 0;
LAB_0162ca30:
  this[0x260] = CVar4;
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

