
/* v8::internal::compiler::CodeGenerator::AssembleSwap(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::InstructionOperand*) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleSwap
          (CodeGenerator *this,InstructionOperand *param_1,InstructionOperand *param_2)

{
  CodeGenerator *pCVar1;
  CodeGenerator *pCVar2;
  Assembler *this_00;
  TurboAssembler *pTVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  CodeGenerator **ppCVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong local_140 [2];
  ulong local_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  CodeGenerator *local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  CodeGenerator *local_e0;
  CodeGenerator *pCStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  CodeGenerator *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar9 = local_140;
  puVar10 = local_140;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  iVar5 = MoveType::InferSwap(param_1,param_2);
  if (iVar5 == 3) {
    local_e0 = this + 0x268;
    pCVar1 = this + 0x278;
    local_d0 = *(undefined8 *)(this + 0x268);
    local_c8 = *(undefined8 *)(this + 0x278);
    pCStack_d8 = pCVar1;
    uVar6 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(this + 0x18),
                       (int)((long)*(undefined8 *)param_1 >> 0x23));
    uVar7 = uVar6;
    if ((uVar6 & 1) == 0) {
      plVar15 = *(long **)(this + 0x18);
      if ((char)plVar15[2] == '\0') {
        iVar5 = -2;
      }
      else {
        iVar5 = *(int *)(*plVar15 + 4) + -2;
      }
      uVar7 = (uVar6 & 0xfffffffe) + (*(int *)((long)plVar15 + 0xc) + iVar5) * 8;
      uVar14 = Assembler::IsImmLSUnscaled((long)(int)uVar7);
      if (((uVar14 & 1) != 0) ||
         (uVar14 = Assembler::IsImmLSScaled((long)(int)uVar7,3), (uVar14 & 1) != 0))
      goto LAB_0161b924;
      puVar16 = &DAT_01a5637c;
    }
    else {
LAB_0161b924:
      uVar6 = uVar7;
      puVar16 = &DAT_01a56370;
    }
    local_c0 = (CodeGenerator *)*puVar16;
    local_b8._0_4_ = *(uint *)(puVar16 + 1);
    local_a8 = (long)(int)(uVar6 & 0xfffffffe);
    uStack_ac = 2;
    local_b8._4_4_ = 0xffffffff;
    local_b0 = 0;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    pTVar3 = (TurboAssembler *)(this + 0xd0);
    uVar6 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(this + 0x18),
                       (int)((long)*(undefined8 *)param_2 >> 0x23));
    uVar7 = uVar6;
    if ((uVar6 & 1) == 0) {
      plVar15 = *(long **)(this + 0x18);
      if ((char)plVar15[2] == '\0') {
        iVar5 = -2;
      }
      else {
        iVar5 = *(int *)(*plVar15 + 4) + -2;
      }
      uVar7 = (uVar6 & 0xfffffffe) + (*(int *)((long)plVar15 + 0xc) + iVar5) * 8;
      uVar14 = Assembler::IsImmLSUnscaled((long)(int)uVar7);
      if (((uVar14 & 1) != 0) ||
         (uVar14 = Assembler::IsImmLSScaled((long)(int)uVar7,3), (uVar14 & 1) != 0))
      goto LAB_0161b9f0;
      puVar16 = &DAT_01a5637c;
    }
    else {
LAB_0161b9f0:
      uVar6 = uVar7;
      puVar16 = &DAT_01a56370;
    }
    local_110 = (CodeGenerator *)*puVar16;
    local_108 = *(undefined4 *)(puVar16 + 1);
    local_f8 = (long)(int)(uVar6 & 0xfffffffe);
    local_104 = 0xffffffff;
    local_fc = 2;
    local_f0 = 0xffffffff00000000;
    uStack_e8 = 0xffffffff;
    uVar14 = UseScratchRegisterScope::AcquireNextAvailable(pCVar1);
    local_120 = uVar14 & 0xffffffff | 0x4000000000;
    local_118 = 0x100000001;
    uVar8 = UseScratchRegisterScope::AcquireNextAvailable(pCVar1);
    local_130 = uVar8 & 0xffffffff | 0x4000000000;
    local_128 = 0x100000001;
    if ((*(ulong *)param_1 & 0x1ffc) == 0x1ac) {
      local_140[0] = uVar14 & 0xffffffff | 0x8000000000;
      local_140[1] = 0x100000001;
      TurboAssembler::LoadStoreMacro(pTVar3,local_140,&local_c0,0x4c00000);
      local_140[0] = local_130 & 0xffffffff | 0x8000000000;
      local_140[1] = 0x100000001;
      TurboAssembler::LoadStoreMacro(pTVar3,local_140,&local_110,0x4c00000);
      local_140[0] = local_120 & 0xffffffff | 0x8000000000;
      local_140[1] = 0x100000001;
      TurboAssembler::LoadStoreMacro(pTVar3,local_140,&local_110,0x4800000);
      ppCVar11 = &local_c0;
      uVar13 = 0x4800000;
      local_140[0] = local_130 & 0xffffffff | 0x8000000000;
      local_140[1] = 0x100000001;
    }
    else {
      TurboAssembler::LoadStoreMacro(pTVar3,&local_120,&local_c0,0xc4400000);
      TurboAssembler::LoadStoreMacro(pTVar3,&stack0xfffffffffffffed0,&local_110,0xc4400000);
      if ((int)local_118 == 0) {
        uVar13 = 0xc0000000;
        if (local_120._4_4_ != 0x40) {
          uVar13 = 0x80000000;
        }
      }
      else {
        uVar7 = local_120._4_4_ - 8U >> 3 | local_120._4_4_ << 0x1d;
        if (uVar7 < 8) {
          uVar13 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
        }
        else {
          uVar13 = 0x4800000;
        }
      }
      TurboAssembler::LoadStoreMacro(pTVar3,&local_120,&local_110,uVar13);
      if ((int)local_128 == 0) {
        uVar13 = 0xc0000000;
        if (iStack_12c != 0x40) {
          uVar13 = 0x80000000;
        }
      }
      else {
        uVar7 = iStack_12c - 8U >> 3 | iStack_12c << 0x1d;
        if (uVar7 < 8) {
          uVar13 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
        }
        else {
          uVar13 = 0x4800000;
        }
      }
      puVar9 = &stack0xfffffffffffffed0;
      ppCVar11 = &local_c0;
    }
LAB_0161bc2c:
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),puVar9,ppCVar11,uVar13);
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar14 = *(ulong *)param_1;
      if (((uVar14 & 0x1c) == 4) && (((uint)(uVar14 >> 5) & 0xff) < 0xb)) {
        TurboAssembler::Swap
                  (this + 0xd0,(long)uVar14 >> 0x23 & 0xffffffffU | 0x4000000000,0,
                   *(long *)param_2 >> 0x23 & 0xffffffffU | 0x4000000000,0);
      }
      else {
        if (((uVar14 & 0x1ffc) == 0x184) || ((uVar14 & 0x1ffc) == 0x164)) {
          uVar12 = 0x4000000000;
          uVar8 = 0x4000000000;
        }
        else {
          uVar12 = 0x8000000000;
          uVar8 = 0x8000000000;
        }
        TurboAssembler::Swap
                  (this + 0xd0,uVar8 | (long)uVar14 >> 0x23 & 0xffffffffU,0x100000001,
                   uVar12 | *(long *)param_2 >> 0x23 & 0xffffffffU,0x100000001);
      }
      goto LAB_0161bce4;
    }
    pCVar1 = this + 0x268;
    pCVar2 = this + 0x278;
    local_d0 = *(undefined8 *)(this + 0x268);
    local_c8 = *(undefined8 *)(this + 0x278);
    this_00 = (Assembler *)(this + 0xd0);
    local_e0 = pCVar1;
    pCStack_d8 = pCVar2;
    uVar6 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(this + 0x18),
                       (int)((long)*(undefined8 *)param_2 >> 0x23));
    uVar7 = uVar6;
    if ((uVar6 & 1) == 0) {
      plVar15 = *(long **)(this + 0x18);
      if ((char)plVar15[2] == '\0') {
        iVar5 = -2;
      }
      else {
        iVar5 = *(int *)(*plVar15 + 4) + -2;
      }
      uVar7 = (uVar6 & 0xfffffffe) + (*(int *)((long)plVar15 + 0xc) + iVar5) * 8;
      uVar14 = Assembler::IsImmLSUnscaled((long)(int)uVar7);
      if (((uVar14 & 1) != 0) ||
         (uVar14 = Assembler::IsImmLSScaled((long)(int)uVar7,3), (uVar14 & 1) != 0))
      goto LAB_0161b74c;
      puVar16 = &DAT_01a5637c;
    }
    else {
LAB_0161b74c:
      uVar6 = uVar7;
      puVar16 = &DAT_01a56370;
    }
    local_110 = (CodeGenerator *)*puVar16;
    local_f8 = (long)(int)(uVar6 & 0xfffffffe);
    local_108 = *(undefined4 *)(puVar16 + 1);
    local_fc = 2;
    local_104 = 0xffffffff;
    local_f0 = 0xffffffff00000000;
    uStack_e8 = 0xffffffff;
    uVar14 = *(ulong *)param_1;
    if (((uVar14 & 0x1c) == 4) && (((uint)(uVar14 >> 5) & 0xff) < 0xb)) {
      uVar7 = UseScratchRegisterScope::AcquireNextAvailable(pCVar1);
      local_120 = 0x400000003f;
      if (uVar7 != 0x3f) {
        local_120 = (ulong)uVar7 | 0x4000000000;
      }
      local_118 = (ulong)local_118._4_4_ << 0x20;
      local_130 = *(long *)param_1 >> 0x23 & 0xffffffffU | 0x4000000000;
      local_128 = (ulong)local_128._4_4_ << 0x20;
      local_c0 = (CodeGenerator *)((ulong)local_c0 & 0xffffffffffffff00);
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_a0 = 0;
      local_98 = CONCAT71(local_98._1_7_,0x13);
      uStack_80 = 0xffffffff;
      local_88 = 0;
      local_90 = local_130;
      TurboAssembler::Mov((TurboAssembler *)this_00,&local_120,&local_c0,0);
      TurboAssembler::LoadStoreMacro
                ((TurboAssembler *)this_00,&stack0xfffffffffffffed0,&local_110,0xc0400000);
      if ((int)local_118 == 0) {
        uVar13 = 0xc0000000;
        if (local_120._4_4_ != 0x40) {
          uVar13 = 0x80000000;
        }
      }
      else {
        uVar7 = local_120._4_4_ - 8U >> 3 | local_120._4_4_ << 0x1d;
        if (uVar7 < 8) {
          uVar13 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
        }
        else {
          uVar13 = 0x4800000;
        }
      }
      puVar9 = &local_120;
      ppCVar11 = &local_110;
      goto LAB_0161bc2c;
    }
    local_b0 = (undefined4)*(undefined8 *)pCVar1;
    uStack_ac = (undefined4)((ulong)*(undefined8 *)pCVar1 >> 0x20);
    local_a8 = *(long *)pCVar2;
    local_120 = (long)uVar14 >> 0x23 & 0xffffffffU | 0x4000000000;
    local_118 = 0x100000001;
    local_c0 = pCVar1;
    local_b8 = pCVar2;
    if (((uVar14 & 0x1ffc) == 0x184) || ((uVar14 & 0x1ffc) == 0x164)) {
      uVar14 = UseScratchRegisterScope::AcquireNextAvailable(pCVar2);
      local_130 = uVar14 & 0xffffffff | 0x4000000000;
      local_128 = 0x100000001;
      Assembler::mov(this_00,(VRegister *)&stack0xfffffffffffffed0,(VRegister *)&local_120);
      if ((int)local_118 == 0) {
        uVar13 = 0xc0400000;
        if (local_120._4_4_ != 0x40) {
          uVar13 = 0x80400000;
        }
      }
      else {
        uVar7 = local_120._4_4_ - 8U >> 3 | local_120._4_4_ << 0x1d;
        if (uVar7 < 8) {
          uVar13 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar7 * 4);
        }
        else {
          uVar13 = 0x4c00000;
        }
      }
      puVar10 = &local_120;
    }
    else {
      uVar8 = UseScratchRegisterScope::AcquireNextAvailable(pCVar2);
      local_130 = uVar8 & 0xffffffff | 0x8000000000;
      local_140[0] = (long)uVar14 >> 0x23 & 0xffffffffU | 0x8000000000;
      local_128 = 0x100000001;
      local_140[1] = 0x100000001;
      Assembler::mov(this_00,(VRegister *)&stack0xfffffffffffffed0,(VRegister *)local_140);
      uVar13 = 0x4c00000;
      local_140[0] = local_120 & 0xffffffff | 0x8000000000;
      local_140[1] = 0x100000001;
    }
    TurboAssembler::LoadStoreMacro((TurboAssembler *)this_00,puVar10,&local_110,uVar13);
    if ((int)local_128 == 0) {
      uVar13 = 0xc0000000;
      if (iStack_12c != 0x40) {
        uVar13 = 0x80000000;
      }
    }
    else {
      uVar7 = iStack_12c - 8U >> 3 | iStack_12c << 0x1d;
      if (uVar7 < 8) {
        uVar13 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
      }
      else {
        uVar13 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro
              ((TurboAssembler *)this_00,&stack0xfffffffffffffed0,&local_110,uVar13);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_c0);
  }
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_e0);
LAB_0161bce4:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

