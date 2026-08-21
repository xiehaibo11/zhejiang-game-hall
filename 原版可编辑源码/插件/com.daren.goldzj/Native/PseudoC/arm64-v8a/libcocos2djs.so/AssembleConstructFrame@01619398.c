
/* v8::internal::compiler::CodeGenerator::AssembleConstructFrame() */

void __thiscall v8::internal::compiler::CodeGenerator::AssembleConstructFrame(CodeGenerator *this)

{
  uint uVar1;
  TurboAssembler *this_00;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  Zone *pZVar10;
  ulong uVar11;
  UseScratchRegisterScope *this_01;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  CodeGenerator **ppCVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  int *piVar18;
  long lVar19;
  CodeGenerator *pCVar20;
  uint *puVar21;
  undefined8 local_138;
  CodeGenerator *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  CodeGenerator *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  CodeGenerator *local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  CodeGenerator *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  this_00 = (TurboAssembler *)(this + 0xd0);
  puVar21 = (uint *)**(undefined8 **)(this + 0x20);
  TurboAssembler::AssertSpAligned(this_00);
  uVar12 = *(ulong *)(puVar21 + 0xc);
  uVar4 = *(ulong *)(puVar21 + 0xe);
  piVar18 = (int *)**(undefined8 **)(this + 0x18);
  iVar5 = piVar18[3];
  uVar2 = iVar5 + 1U & 0xfffffffe;
  if (*(char *)(*(undefined8 **)(this + 0x18) + 2) == '\0') goto LAB_0161a21c;
  iVar8 = *piVar18;
  iVar3 = piVar18[1];
  if (*puVar21 == 1) {
    TurboAssembler::Prologue(this_00);
  }
  else {
    TurboAssembler::Push
              (this_00,(CPURegister *)&DAT_01a56388,(CPURegister *)&DAT_01a5637c,
               (CPURegister *)&DAT_01a56394,(CPURegister *)&DAT_01a56394);
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
    local_c0 = local_c0 & 0xffffff00;
    local_a8 = 0;
    local_98 = (CodeGenerator *)0x400000003f;
    uStack_88 = 0xffffffff;
    uStack_84 = 0;
    local_90 = 0;
    uStack_8c = 0;
    TurboAssembler::Mov(this_00,&DAT_01a5637c,&local_c8,0);
  }
  iVar3 = iVar3 - iVar8;
  UnwindingInfoWriter::MarkFrameConstructed
            ((UnwindingInfoWriter *)(this + 0x30),*(int *)(this + 0xf0) - *(int *)(this + 0xe0));
  lVar19 = *(long *)(this + 0xa0);
  if (*(int *)(lVar19 + 0x38) != -1) {
    TurboAssembler::Abort(this_00,0x21);
    if (FLAG_code_comments != '\0') {
      AssemblerBase::RecordComment((AssemblerBase *)this_00,"-- OSR entrypoint --");
    }
    *(int *)(this + 0x3f8) = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
    iVar3 = iVar3 - *(int *)(this + 0x3f0);
    ResetSpeculationPoison(this);
    lVar19 = *(long *)(this + 0xa0);
  }
  if ((0x80 < iVar3) && (*(int *)(lVar19 + 8) == 5)) {
    local_118 = 0;
    if (iVar3 * 8 < FLAG_stack_size * 0x400) {
      local_110 = this + 0x268;
      local_108 = this + 0x278;
      local_100 = *(undefined8 *)(this + 0x268);
      local_f8 = *(undefined8 *)(this + 0x278);
      uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
      local_c8 = (CodeGenerator *)0x4000000007;
      local_b0 = 0xa3;
      local_138 = (CodeGenerator *)0x400000003f;
      if (uVar7 != 0x3f) {
        local_138 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
      }
      local_130 = (CodeGenerator *)((ulong)local_130 & 0xffffffff00000000);
      local_c0 = 0;
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_a8 = 0xffffffff00000000;
      local_a0 = 0xffffffff;
      TurboAssembler::LoadStoreMacro(this_00,&local_138,&local_c8,0xc0400000);
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_b0 = 0;
      local_c8 = local_138;
      local_c0 = (uint)local_130;
      local_a8 = 0xffffffff00000000;
      local_a0 = 0xffffffff;
      if ((uint)local_130 == 0) {
        uVar17 = 0xc0400000;
        if (local_138._4_4_ != 0x40) {
          uVar17 = 0x80400000;
        }
      }
      else {
        uVar7 = local_138._4_4_ - 8U >> 3 | local_138._4_4_ << 0x1d;
        if (uVar7 < 8) {
          uVar17 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar7 * 4);
        }
        else {
          uVar17 = 0x4c00000;
        }
      }
      TurboAssembler::LoadStoreMacro(this_00,&local_138,&local_c8,uVar17);
      local_a8 = (long)(iVar3 * 8);
      local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_98 = (CodeGenerator *)0xffffffff;
      local_a0._0_1_ = 0x13;
      local_90 = 2;
      TurboAssembler::AddSubMacro(this_00,&local_138,&local_138,&local_c8,0,0);
      local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_a8 = 0;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_98 = local_138;
      local_90 = (uint)local_130;
      uStack_8c = 0;
      uStack_88 = 0xffffffff;
      uStack_84 = 0;
      TurboAssembler::AddSubMacro(this_00,&DAT_01a5640c,&DAT_01a56370,&local_c8,1,0x40000000);
      TurboAssembler::B(this_00,&local_118,2);
      UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
    }
    local_110 = this + 0x268;
    local_108 = this + 0x278;
    local_100 = *(undefined8 *)(this + 0x268);
    local_f8 = *(undefined8 *)(this + 0x278);
    local_a8 = 0x10;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
    local_c0 = local_c0 & 0xffffff00;
    local_98 = (CodeGenerator *)0xffffffff;
    local_90 = 2;
    TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,&local_c8,0,0x40000000);
    uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
    local_138 = (CodeGenerator *)0x400000003f;
    if (uVar7 != 0x3f) {
      local_138 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
    }
    local_130 = (CodeGenerator *)((ulong)local_130 & 0xffffffff00000000);
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    TurboAssembler::Mov(this_00,(Register *)&local_138,(long)(iVar8 << 1));
    local_b0 = 0xfffffffffffffff8;
    local_c8 = (CodeGenerator *)0x400000001d;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_a8 = 0xffffffff00000000;
    local_a0 = 0xffffffff;
    if ((uint)local_130 == 0) {
      uVar17 = 0xc0000000;
      if (local_138._4_4_ != 0x40) {
        uVar17 = 0x80000000;
      }
    }
    else {
      uVar7 = local_138._4_4_ - 8U >> 3 | local_138._4_4_ << 0x1d;
      if (uVar7 < 8) {
        uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar17 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro(this_00,&local_138,&local_c8,uVar17);
    local_c8 = (CodeGenerator *)0x400000001d;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_b0 = 0xfffffffffffffff0;
    local_a8 = -0x100000000;
    local_a0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro(this_00,&DAT_01a56418,&local_c8,0xc0000000);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
    TurboAssembler::Call(this_00,0x14,5);
    pZVar10 = *(Zone **)(this + 8);
    puVar13 = *(undefined8 **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar13) < 0x28) {
      puVar13 = (undefined8 *)Zone::NewExpand(pZVar10,0x28);
    }
    else {
      *(undefined8 **)(pZVar10 + 0x10) = puVar13 + 5;
    }
    pZVar10 = *(Zone **)(this + 8);
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = pZVar10;
    puVar14 = *(undefined8 **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar14) < 0x40) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar10,0x40);
    }
    else {
      *(undefined8 **)(pZVar10 + 0x10) = puVar14 + 8;
    }
    *puVar13 = puVar14;
    puVar13[1] = puVar14;
    puVar13[2] = puVar14 + 8;
    *puVar14 = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    lVar19 = puVar13[1];
    puVar13[1] = lVar19 + 8;
    *(undefined8 *)(lVar19 + 8) = 0;
    *(undefined4 *)(puVar13 + 4) = 0xffffffff;
    puVar13[1] = puVar13[1] + 8;
    RecordSafepoint(this,puVar13,0);
    if (FLAG_debug_code != '\0') {
      Assembler::brk((int)this_00);
    }
    Assembler::bind((Label *)this_00);
  }
  iVar8 = CountSetBits(uVar12,0x40);
  iVar9 = CountSetBits(uVar4,0x40);
  if (5 < *puVar21) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar7 = ((iVar3 - uVar2) - iVar8) - iVar9;
  switch(*puVar21) {
  case 0:
    local_138 = this + 0x268;
    local_130 = this + 0x278;
    local_128 = *(undefined8 *)(this + 0x268);
    local_120 = *(undefined8 *)(this + 0x278);
    uVar1 = uVar7 + 1;
    if (uVar7 != 0xffffffff) {
      local_f0 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      local_110 = (CodeGenerator *)((ulong)local_110._1_7_ << 8);
      local_108 = (CodeGenerator *)((ulong)local_108._1_7_ << 8);
      local_e8 = 0x13;
      local_e0 = 0xffffffff;
      local_d8 = 2;
      if ((int)uVar1 < 0) {
        lVar19 = -local_f0;
        uVar11 = Assembler::IsImmAddSub(lVar19);
        if ((uVar11 & 1) == 0) goto LAB_0161a0c4;
        local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_c0 & 0xffffff00;
        local_98 = (CodeGenerator *)0xffffffff;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        ppCVar15 = &local_c8;
        uVar16 = 0;
        local_a8 = lVar19;
      }
      else {
LAB_0161a0c4:
        ppCVar15 = (CodeGenerator **)&local_110;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
    }
    uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_138);
    local_110 = (CodeGenerator *)0x400000003f;
    if (uVar7 != 0x3f) {
      local_110 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
    }
    local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffff00000000);
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    TurboAssembler::Mov(this_00,(Register *)&local_110,(long)(iVar8 << 1));
    local_b0 = 0xfffffffffffffff8;
    if ((int)local_108 == 0) {
      uVar17 = 0xc0000000;
      if (local_110._4_4_ != 0x40) {
        uVar17 = 0x80000000;
      }
    }
    else {
      uVar7 = local_110._4_4_ - 8U >> 3 | local_110._4_4_ << 0x1d;
      if (uVar7 < 8) {
        uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar17 = 0x4800000;
      }
    }
    puVar13 = &local_110;
    goto LAB_0161a20c;
  case 1:
    if (((byte)puVar21[0x12] >> 5 & 1) != 0) {
      uVar1 = uVar7 + 1;
      if (uVar7 != 0xffffffff) {
        local_f0 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        local_110 = (CodeGenerator *)((ulong)local_110._1_7_ << 8);
        local_108 = (CodeGenerator *)((ulong)local_108._1_7_ << 8);
        local_e8 = 0x13;
        local_e0 = 0xffffffff;
        local_d8 = 2;
        if ((int)uVar1 < 0) {
          lVar19 = -local_f0;
          uVar11 = Assembler::IsImmAddSub(lVar19);
          if ((uVar11 & 1) == 0) goto LAB_0161a33c;
          local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
          local_c0 = local_c0 & 0xffffff00;
          local_98 = (CodeGenerator *)0xffffffff;
          local_a0 = CONCAT71(local_a0._1_7_,0x13);
          local_90 = 2;
          ppCVar15 = &local_c8;
          uVar16 = 0;
          local_a8 = lVar19;
        }
        else {
LAB_0161a33c:
          ppCVar15 = (CodeGenerator **)&local_110;
          uVar16 = 0x40000000;
        }
        TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
      }
      local_c8 = (CodeGenerator *)0x400000001d;
      local_c0 = 0;
      local_b0 = 0xffffffffffffffe8;
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_a8 = -0x100000000;
      local_a0 = 0xffffffff;
      TurboAssembler::LoadStoreMacro(this_00,&DAT_01a563dc,&local_c8,0xc0000000);
      break;
    }
    if (uVar7 == 0) break;
    local_f0 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3;
    local_110 = (CodeGenerator *)((ulong)local_110._1_7_ << 8);
    local_108 = (CodeGenerator *)((ulong)local_108._1_7_ << 8);
    local_e8 = 0x13;
    local_e0 = 0xffffffff;
    local_d8 = 2;
    if ((int)uVar7 < 0) {
      lVar19 = -local_f0;
      uVar11 = Assembler::IsImmAddSub(lVar19);
      if ((uVar11 & 1) == 0) goto LAB_0161a318;
      local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_98 = (CodeGenerator *)0xffffffff;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      ppCVar15 = &local_c8;
      uVar16 = 0;
      local_a8 = lVar19;
    }
    else {
LAB_0161a318:
      ppCVar15 = (CodeGenerator **)&local_110;
      uVar16 = 0x40000000;
    }
    TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
    break;
  case 2:
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    uVar1 = uVar7 + 2;
    if (iVar8 != 9) {
      uVar1 = uVar7;
    }
    if (uVar1 != 0) {
      local_f0 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      local_110 = (CodeGenerator *)((ulong)local_110 & 0xffffffffffffff00);
      local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffffffffff00);
      local_e8 = 0x13;
      local_e0 = 0xffffffff;
      local_d8 = 2;
      if ((int)uVar1 < 0) {
        lVar19 = -local_f0;
        uVar11 = Assembler::IsImmAddSub(lVar19);
        if ((uVar11 & 1) == 0) goto LAB_01619e88;
        local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_c0 & 0xffffff00;
        local_98 = (CodeGenerator *)0xffffffff;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        ppCVar15 = &local_c8;
        uVar16 = 0;
        local_a8 = lVar19;
      }
      else {
LAB_01619e88:
        ppCVar15 = (CodeGenerator **)&local_110;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
    }
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    if (iVar8 != 9) break;
    local_110 = this + 0x268;
    local_108 = this + 0x278;
    local_100 = *(undefined8 *)(this + 0x268);
    local_f8 = *(undefined8 *)(this + 0x278);
    uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
    local_138 = (CodeGenerator *)0x400000003f;
    if (uVar7 != 0x3f) {
      local_138 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
    }
    local_130 = (CodeGenerator *)((ulong)local_130 & 0xffffffff00000000);
    TurboAssembler::Mov(this_00,(Register *)&local_138,0x12);
    local_b0 = 0xfffffffffffffff8;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_c8 = (CodeGenerator *)0x400000001d;
    local_c0 = 0;
    local_a8 = -0x100000000;
    local_a0 = 0xffffffff;
    if ((uint)local_130 == 0) {
      uVar17 = 0xc0000000;
      if (local_138._4_4_ != 0x40) {
        uVar17 = 0x80000000;
      }
    }
    else {
      uVar7 = local_138._4_4_ - 8U >> 3 | local_138._4_4_ << 0x1d;
      if (uVar7 < 8) {
        uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar17 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro(this_00,&local_138,&local_c8,uVar17);
    this_01 = (UseScratchRegisterScope *)&local_110;
    goto LAB_0161a218;
  default:
    local_130 = this + 0x278;
    local_128 = *(undefined8 *)(this + 0x268);
    local_120 = *(undefined8 *)(this + 0x278);
    local_b0 = 7;
    local_c8 = (CodeGenerator *)0x4000000007;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_a8 = 0xffffffff00000000;
    local_a0 = 0xffffffff;
    local_138 = this + 0x268;
    TurboAssembler::LoadTaggedPointerField
              (this_00,(Register *)&DAT_01a563c4,(MemOperand *)&local_c8);
    local_c8 = (CodeGenerator *)0x4000000007;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_b0 = 3;
    local_a8 = -0x100000000;
    local_a0 = 0xffffffff;
    TurboAssembler::LoadTaggedPointerField
              (this_00,(Register *)&DAT_01a56418,(MemOperand *)&local_c8);
    iVar8 = 2;
    if (*puVar21 != 5) {
      iVar8 = 3;
    }
    uVar7 = iVar8 + uVar7;
    pCVar20 = this + 0x268;
    if (uVar7 != 0) {
      local_f0 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3;
      local_110 = (CodeGenerator *)((ulong)local_110 & 0xffffffffffffff00);
      local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffffffffff00);
      local_e0 = 0xffffffff;
      local_e8 = 0x13;
      local_d8 = 2;
      if ((int)uVar7 < 0) {
        lVar19 = -local_f0;
        uVar11 = Assembler::IsImmAddSub(lVar19);
        if ((uVar11 & 1) == 0) goto LAB_01619af0;
        local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_c0 & 0xffffff00;
        local_98 = (CodeGenerator *)0xffffffff;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        ppCVar15 = &local_c8;
        uVar16 = 0;
        local_a8 = lVar19;
      }
      else {
LAB_01619af0:
        ppCVar15 = (CodeGenerator **)&local_110;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
      pCVar20 = local_138;
    }
    uVar7 = UseScratchRegisterScope::AcquireNextAvailable(pCVar20);
    local_110 = (CodeGenerator *)0x400000003f;
    if (uVar7 != 0x3f) {
      local_110 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
    }
    local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffff00000000);
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    TurboAssembler::Mov(this_00,(Register *)&local_110,(long)(iVar8 << 1));
    local_c8 = (CodeGenerator *)0x400000001d;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_b0 = 0xfffffffffffffff8;
    local_a8 = 0xffffffff00000000;
    local_a0 = 0xffffffff;
    if ((int)local_108 == 0) {
      uVar17 = 0xc0000000;
      if (local_110._4_4_ != 0x40) {
        uVar17 = 0x80000000;
      }
    }
    else {
      uVar7 = local_110._4_4_ - 8U >> 3 | local_110._4_4_ << 0x1d;
      if (uVar7 < 8) {
        uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar17 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro(this_00,&local_110,&local_c8,uVar17);
    local_c8 = (CodeGenerator *)0x400000001d;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_b0 = 0xfffffffffffffff0;
    local_a8 = -0x100000000;
    local_a0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro(this_00,&DAT_01a56418,&local_c8,0xc0000000);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_138);
    break;
  case 4:
    local_138 = this + 0x268;
    local_130 = this + 0x278;
    local_128 = *(undefined8 *)(this + 0x268);
    local_120 = *(undefined8 *)(this + 0x278);
    uVar7 = uVar7 + 2;
    if (uVar7 != 0) {
      local_f0 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3;
      local_110 = (CodeGenerator *)((ulong)local_110._1_7_ << 8);
      local_108 = (CodeGenerator *)((ulong)local_108._1_7_ << 8);
      local_e8 = 0x13;
      local_e0 = 0xffffffff;
      local_d8 = 2;
      if ((int)uVar7 < 0) {
        lVar19 = -local_f0;
        uVar11 = Assembler::IsImmAddSub(lVar19);
        if ((uVar11 & 1) == 0) goto LAB_01619f68;
        local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_c0 & 0xffffff00;
        local_98 = (CodeGenerator *)0xffffffff;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        ppCVar15 = &local_c8;
        uVar16 = 0;
        local_a8 = lVar19;
      }
      else {
LAB_01619f68:
        ppCVar15 = (CodeGenerator **)&local_110;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
    }
    uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_138);
    local_110 = (CodeGenerator *)0x400000003f;
    if (uVar7 != 0x3f) {
      local_110 = (CodeGenerator *)((ulong)uVar7 | 0x4000000000);
    }
    local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffff00000000);
    iVar8 = OptimizedCompilationInfo::GetOutputStackFrameType
                      (*(OptimizedCompilationInfo **)(this + 0xa0));
    TurboAssembler::Mov(this_00,(Register *)&local_110,(long)(iVar8 << 1));
    local_c8 = (CodeGenerator *)0x400000001d;
    local_b0 = 0xfffffffffffffff8;
    local_c0 = 0;
    local_bc = 0xffffffff;
    local_b4 = 2;
    local_a8 = 0xffffffff00000000;
    local_a0 = 0xffffffff;
    if ((int)local_108 == 0) {
      uVar17 = 0xc0000000;
      if (local_110._4_4_ != 0x40) {
        uVar17 = 0x80000000;
      }
    }
    else {
      uVar7 = local_110._4_4_ - 8U >> 3 | local_110._4_4_ << 0x1d;
      if (uVar7 < 8) {
        uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar17 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro(this_00,&local_110,&local_c8,uVar17);
    local_b0 = 0xfffffffffffffff0;
    puVar13 = (undefined8 *)&DAT_01a56418;
    uVar17 = 0xc0000000;
LAB_0161a20c:
    local_a0 = 0xffffffff;
    local_a8 = -0x100000000;
    local_b4 = 2;
    local_bc = 0xffffffff;
    local_c0 = 0;
    local_c8 = (CodeGenerator *)0x400000001d;
    TurboAssembler::LoadStoreMacro(this_00,puVar13,&local_c8,uVar17);
    this_01 = (UseScratchRegisterScope *)&local_138;
LAB_0161a218:
    UseScratchRegisterScope::~UseScratchRegisterScope(this_01);
  }
LAB_0161a21c:
  TurboAssembler::PushCPURegList(this_00,uVar4,0x100000040);
  TurboAssembler::PushCPURegList(this_00,uVar12,0x40);
  if (uVar2 == 0) goto LAB_0161a2e4;
  local_f0 = -(ulong)(iVar5 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
  local_110 = (CodeGenerator *)((ulong)local_110 & 0xffffffffffffff00);
  local_108 = (CodeGenerator *)((ulong)local_108 & 0xffffffffffffff00);
  local_e8 = 0x13;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  if ((int)uVar2 < 0) {
    lVar19 = -local_f0;
    uVar12 = Assembler::IsImmAddSub(lVar19);
    if ((uVar12 & 1) == 0) goto LAB_0161a2c4;
    local_c8 = (CodeGenerator *)((ulong)local_c8 & 0xffffffffffffff00);
    local_c0 = local_c0 & 0xffffff00;
    local_98 = (CodeGenerator *)0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = 2;
    ppCVar15 = &local_c8;
    uVar16 = 0;
    local_a8 = lVar19;
  }
  else {
LAB_0161a2c4:
    ppCVar15 = (CodeGenerator **)&local_110;
    uVar16 = 0x40000000;
  }
  TurboAssembler::AddSubMacro(this_00,&DAT_01a56370,&DAT_01a56370,ppCVar15,0,uVar16);
LAB_0161a2e4:
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

