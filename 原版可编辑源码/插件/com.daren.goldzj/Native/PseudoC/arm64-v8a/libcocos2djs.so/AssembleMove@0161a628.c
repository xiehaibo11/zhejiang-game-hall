
/* v8::internal::compiler::CodeGenerator::AssembleMove(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::InstructionOperand*) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleMove
          (CodeGenerator *this,InstructionOperand *param_1,InstructionOperand *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  CodeGenerator **ppCVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_150;
  undefined8 local_148;
  CodeGenerator *local_140;
  CodeGenerator *local_138;
  undefined8 local_130;
  undefined8 local_128;
  CodeGenerator *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  CodeGenerator *local_f0;
  CodeGenerator **ppCStack_e8;
  InstructionOperand **local_e0;
  CodeGenerator *local_d8;
  undefined8 local_d0;
  InstructionOperand *local_c8;
  ulong local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  ppCStack_e8 = &local_d8;
  local_e0 = &local_c8;
  local_d0 = 0;
  local_f0 = this;
  local_d8 = this;
  local_c8 = param_1;
  uVar2 = MoveType::InferMove(param_1,param_2);
  switch(uVar2) {
  case 0:
    uVar16 = *(ulong *)local_c8;
    if (((uVar16 & 0x1c) == 4) && (((uint)(uVar16 >> 5) & 0xff) < 0xb)) {
      local_120 = (CodeGenerator *)(*(long *)param_2 >> 0x23 & 0xffffffffU | 0x4000000000);
      local_118._0_4_ = 0;
      local_90 = *(long *)local_c8 >> 0x23 & 0xffffffffU | 0x4000000000;
      local_c0 = local_c0 & 0xffffffffffffff00;
      uStack_b8 = uStack_b8 & 0xffffff00;
      local_a0 = 0;
      local_98 = CONCAT71(local_98._1_7_,0x13);
      uStack_80 = 0xffffffff;
      local_88 = 0;
      TurboAssembler::Mov((TurboAssembler *)(this + 0xd0),&local_120,&local_c0,0);
    }
    else {
      if (((uVar16 & 0x1ffc) == 0x184) || ((uVar16 & 0x1ffc) == 0x164)) {
        local_c0 = *(long *)param_2 >> 0x23 & 0xffffffffU | 0x4000000000;
        lVar8 = *(long *)local_c8;
        uVar16 = 0x4000000000;
      }
      else {
        local_c0 = *(long *)param_2 >> 0x23 & 0xffffffffU | 0x8000000000;
        lVar8 = *(long *)local_c8;
        uVar16 = 0x8000000000;
      }
      uStack_b4 = 1;
      uStack_b8 = 1;
      local_120 = (CodeGenerator *)(uVar16 | lVar8 >> 0x23 & 0xffffffffU);
      local_118._0_4_ = 1;
      local_118._4_4_ = 1;
      Assembler::mov((Assembler *)(this + 0xd0),(VRegister *)&local_c0,(VRegister *)&local_120);
    }
    goto LAB_0161b0f8;
  case 1:
    uVar3 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(local_d8 + 0x18),
                       (int)((long)*(undefined8 *)param_2 >> 0x23));
    uVar4 = uVar3;
    if ((uVar3 & 1) == 0) {
      plVar10 = *(long **)(local_d8 + 0x18);
      if ((char)plVar10[2] == '\0') {
        iVar15 = -2;
      }
      else {
        iVar15 = *(int *)(*plVar10 + 4) + -2;
      }
      uVar4 = (uVar3 & 0xfffffffe) + (*(int *)((long)plVar10 + 0xc) + iVar15) * 8;
      uVar16 = Assembler::IsImmLSUnscaled((long)(int)uVar4);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = Assembler::IsImmLSScaled((long)(int)uVar4,3), (uVar16 & 1) != 0))
      goto LAB_0161abfc;
      puVar11 = &DAT_01a5637c;
    }
    else {
LAB_0161abfc:
      uVar3 = uVar4;
      puVar11 = &DAT_01a56370;
    }
    local_c0 = *puVar11;
    uStack_b8 = (uint)puVar11[1];
    local_a8 = (long)(int)(uVar3 & 0xfffffffe);
    uVar16 = *(ulong *)local_c8;
    uVar14 = (long)uVar16 >> 0x23;
    if (((uVar16 & 0x1c) == 4) && (((uint)(uVar16 >> 5) & 0xff) < 0xb)) {
      local_120 = (CodeGenerator *)(uVar14 & 0xffffffff | 0x4000000000);
      local_118._0_4_ = 0;
      ppCVar6 = &local_120;
      goto LAB_0161ac84;
    }
    local_120 = (CodeGenerator *)(uVar14 & 0xffffffff | 0x4000000000);
    local_118._0_4_ = 1;
    local_118._4_4_ = 1;
    if (((*(ulong *)local_c8 & 0x1ffc) == 0x184) || ((*(ulong *)local_c8 & 0x1ffc) == 0x164)) {
      ppCVar6 = &local_120;
      uVar7 = 0xc4000000;
    }
    else {
      local_140 = (CodeGenerator *)(uVar14 & 0xffffffff | 0x8000000000);
      ppCVar6 = &local_140;
      uVar7 = 0x4800000;
      local_138 = (CodeGenerator *)0x100000001;
    }
    break;
  case 2:
    uVar3 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(local_d8 + 0x18),
                       (int)((long)*(undefined8 *)local_c8 >> 0x23));
    uVar4 = uVar3;
    if ((uVar3 & 1) == 0) {
      plVar10 = *(long **)(local_d8 + 0x18);
      if ((char)plVar10[2] == '\0') {
        iVar15 = -2;
      }
      else {
        iVar15 = *(int *)(*plVar10 + 4) + -2;
      }
      uVar4 = (uVar3 & 0xfffffffe) + (*(int *)((long)plVar10 + 0xc) + iVar15) * 8;
      uVar16 = Assembler::IsImmLSUnscaled((long)(int)uVar4);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = Assembler::IsImmLSScaled((long)(int)uVar4,3), (uVar16 & 1) != 0))
      goto LAB_0161aa3c;
      puVar11 = &DAT_01a5637c;
    }
    else {
LAB_0161aa3c:
      uVar3 = uVar4;
      puVar11 = &DAT_01a56370;
    }
    local_c0 = *puVar11;
    uStack_b8 = (uint)puVar11[1];
    local_a8 = (long)(int)(uVar3 & 0xfffffffe);
    uVar14 = *(ulong *)param_2;
    uVar16 = (long)uVar14 >> 0x23;
    if (((uVar14 & 0x1c) == 4) && (((uint)(uVar14 >> 5) & 0xff) < 0xb)) {
      local_120 = (CodeGenerator *)(uVar16 & 0xffffffff | 0x4000000000);
      local_118._0_4_ = 0;
      ppCVar6 = &local_120;
      uVar7 = 0xc0400000;
    }
    else {
      local_120 = (CodeGenerator *)(uVar16 & 0xffffffff | 0x4000000000);
      local_118._0_4_ = 1;
      local_118._4_4_ = 1;
      if (((uVar14 & 0x1ffc) == 0x184) || ((uVar14 & 0x1ffc) == 0x164)) {
        uVar7 = 0xc4400000;
        ppCVar6 = &local_120;
      }
      else {
        local_140 = (CodeGenerator *)(uVar16 & 0xffffffff | 0x8000000000);
        local_138 = (CodeGenerator *)0x100000001;
        ppCVar6 = &local_140;
        uVar7 = 0x4c00000;
      }
    }
    break;
  case 3:
    uVar3 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(local_d8 + 0x18),
                       (int)((long)*(undefined8 *)local_c8 >> 0x23));
    uVar4 = uVar3;
    if ((uVar3 & 1) == 0) {
      plVar10 = *(long **)(local_d8 + 0x18);
      if ((char)plVar10[2] == '\0') {
        iVar15 = -2;
      }
      else {
        iVar15 = *(int *)(*plVar10 + 4) + -2;
      }
      uVar4 = (uVar3 & 0xfffffffe) + (*(int *)((long)plVar10 + 0xc) + iVar15) * 8;
      uVar16 = Assembler::IsImmLSUnscaled((long)(int)uVar4);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = Assembler::IsImmLSScaled((long)(int)uVar4,3), (uVar16 & 1) != 0))
      goto LAB_0161ab40;
      puVar11 = &DAT_01a5637c;
    }
    else {
LAB_0161ab40:
      uVar3 = uVar4;
      puVar11 = &DAT_01a56370;
    }
    local_c0 = *puVar11;
    uStack_b8 = (uint)puVar11[1];
    local_a8 = (long)(int)(uVar3 & 0xfffffffe);
    local_ac = 2;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    uVar3 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(local_d8 + 0x18),
                       (int)((long)*(undefined8 *)param_2 >> 0x23));
    uVar4 = uVar3;
    if ((uVar3 & 1) == 0) {
      plVar10 = *(long **)(local_d8 + 0x18);
      if ((char)plVar10[2] == '\0') {
        iVar15 = -2;
      }
      else {
        iVar15 = *(int *)(*plVar10 + 4) + -2;
      }
      uVar4 = (uVar3 & 0xfffffffe) + (*(int *)((long)plVar10 + 0xc) + iVar15) * 8;
      uVar16 = Assembler::IsImmLSUnscaled((long)(int)uVar4);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = Assembler::IsImmLSScaled((long)(int)uVar4,3), (uVar16 & 1) != 0))
      goto LAB_0161aedc;
      puVar12 = &DAT_01a5637c;
    }
    else {
LAB_0161aedc:
      uVar3 = uVar4;
      puVar12 = &DAT_01a56370;
    }
    local_120 = (CodeGenerator *)*puVar12;
    local_118._0_4_ = *(undefined4 *)(puVar12 + 1);
    local_108 = (long)(int)(uVar3 & 0xfffffffe);
    uStack_10c = 2;
    local_118._4_4_ = 0xffffffff;
    local_110 = 0;
    local_100 = 0xffffffff00000000;
    uStack_f8 = 0xffffffff;
    if ((*(ulong *)local_c8 & 0x1ffc) == 0x1ac) {
      local_140 = this + 0x268;
      local_138 = this + 0x278;
      local_130 = *(undefined8 *)(this + 0x268);
      local_128 = *(undefined8 *)(this + 0x278);
      uVar16 = UseScratchRegisterScope::AcquireNextAvailable(local_138);
      local_150 = uVar16 & 0xffffffff | 0x8000000000;
      uVar7 = 0x4c00000;
      local_148 = 0x100000001;
    }
    else {
      local_140 = this + 0x268;
      local_138 = this + 0x278;
      local_130 = *(undefined8 *)(this + 0x268);
      local_128 = *(undefined8 *)(this + 0x278);
      uVar4 = UseScratchRegisterScope::AcquireNextAvailable(local_140);
      local_150 = 0x400000003f;
      if (uVar4 != 0x3f) {
        local_150 = (ulong)uVar4 | 0x4000000000;
      }
      uVar7 = 0xc0400000;
      local_148 = (ulong)local_148._4_4_ << 0x20;
    }
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_150,&local_c0,uVar7);
    if ((int)local_148 == 0) {
      uVar2 = 0xc0000000;
      if (local_150._4_4_ != 0x40) {
        uVar2 = 0x80000000;
      }
    }
    else {
      uVar4 = local_150._4_4_ - 8U >> 3 | local_150._4_4_ << 0x1d;
      if (uVar4 < 8) {
        uVar2 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar4 * 4);
      }
      else {
        uVar2 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_150,&local_120,uVar2);
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_140);
    goto LAB_0161b0f8;
  case 4:
    uVar16 = *(ulong *)local_c8;
    if ((uVar16 & 7) == 3) {
      if (((uint)uVar16 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_c0,(int)(uVar16 >> 0x20));
      }
      else {
        puVar11 = (ulong *)(*(long *)(*(long *)(local_d8 + 0x28) + 0x60) +
                           ((long)uVar16 >> 0x20) * 0x10);
        uVar16 = puVar11[1];
        local_c0 = *puVar11;
        uStack_b8 = (uint)uVar16;
        uStack_b4 = (undefined4)(uVar16 >> 0x20);
      }
      uVar14 = CONCAT44(uStack_b4,uStack_b8);
      uVar16 = local_c0;
    }
    else {
      plVar10 = (long *)(*(long *)(local_d8 + 0x28) + 0x48);
      plVar17 = (long *)*plVar10;
      if (plVar17 == (long *)0x0) {
LAB_0161a89c:
        plVar13 = plVar10;
      }
      else {
        plVar13 = plVar10;
        do {
          iVar15 = (int)(uVar16 >> 3);
          if (iVar15 <= (int)plVar17[4]) {
            plVar13 = plVar17;
          }
          plVar17 = (long *)plVar17[(int)plVar17[4] < iVar15];
        } while (plVar17 != (long *)0x0);
        if ((plVar13 == plVar10) || (iVar15 < (int)plVar13[4])) goto LAB_0161a89c;
      }
      uVar16 = plVar13[5];
      uVar14 = plVar13[6];
    }
    uVar5 = *(ulong *)param_2;
    if (((uVar5 & 0x1c) == 4) && (((uint)(uVar5 >> 5) & 0xff) < 0xb)) {
      FUN_0161b14c(&local_f0,(long)uVar5 >> 0x23 & 0xffffffffU | 0x4000000000,0);
    }
    else {
      uVar9 = (long)uVar5 >> 0x23 & 0xffffffff;
      if ((uVar5 & 0x1ffc) == 0x164) {
        TurboAssembler::Fmov(uVar14 & 0xffffffff,this + 0xd0,uVar9 | 0x2000000000,0x100000001);
      }
      else {
        TurboAssembler::Fmov(uVar14,this + 0xd0,uVar9 | 0x4000000000,0x100000001,uVar16);
      }
    }
    goto LAB_0161b0f8;
  case 5:
    uVar16 = *(ulong *)local_c8;
    if ((uVar16 & 7) == 3) {
      if (((uint)uVar16 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_c0,(int)(uVar16 >> 0x20));
      }
      else {
        puVar11 = (ulong *)(*(long *)(*(long *)(local_d8 + 0x28) + 0x60) +
                           ((long)uVar16 >> 0x20) * 0x10);
        uVar16 = puVar11[1];
        local_c0 = *puVar11;
        uStack_b8 = (uint)uVar16;
        uStack_b4 = (undefined4)(uVar16 >> 0x20);
      }
      uVar14 = CONCAT44(uStack_b4,uStack_b8);
      uVar16 = local_c0;
    }
    else {
      plVar10 = (long *)(*(long *)(local_d8 + 0x28) + 0x48);
      plVar17 = (long *)*plVar10;
      if (plVar17 == (long *)0x0) {
LAB_0161a91c:
        plVar13 = plVar10;
      }
      else {
        plVar13 = plVar10;
        do {
          iVar15 = (int)(uVar16 >> 3);
          if (iVar15 <= (int)plVar17[4]) {
            plVar13 = plVar17;
          }
          plVar17 = (long *)plVar17[(int)plVar17[4] < iVar15];
        } while (plVar17 != (long *)0x0);
        if ((plVar13 == plVar10) || (iVar15 < (int)plVar13[4])) goto LAB_0161a91c;
      }
      uVar16 = plVar13[5];
      uVar14 = plVar13[6];
    }
    uVar3 = FrameAccessState::GetFrameOffset
                      (*(FrameAccessState **)(local_d8 + 0x18),
                       (int)((long)*(undefined8 *)param_2 >> 0x23));
    uVar4 = uVar3;
    if ((uVar3 & 1) == 0) {
      plVar10 = *(long **)(local_d8 + 0x18);
      if ((char)plVar10[2] == '\0') {
        iVar15 = -2;
      }
      else {
        iVar15 = *(int *)(*plVar10 + 4) + -2;
      }
      uVar4 = (uVar3 & 0xfffffffe) + (*(int *)((long)plVar10 + 0xc) + iVar15) * 8;
      uVar5 = Assembler::IsImmLSUnscaled((long)(int)uVar4);
      if (((uVar5 & 1) != 0) ||
         (uVar5 = Assembler::IsImmLSScaled((long)(int)uVar4,3), (uVar5 & 1) != 0))
      goto LAB_0161ad04;
      puVar11 = &DAT_01a5637c;
    }
    else {
LAB_0161ad04:
      uVar3 = uVar4;
      puVar11 = &DAT_01a56370;
    }
    local_c0 = *puVar11;
    uStack_b8 = (uint)puVar11[1];
    local_a8 = (long)(int)(uVar3 & 0xfffffffe);
    local_ac = 2;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    uVar5 = *(ulong *)param_2;
    if (((uVar5 & 0x1c) == 0xc) && (((uint)(uVar5 >> 5) & 0xff) < 0xb)) {
      local_120 = this + 0x268;
      local_118 = this + 0x278;
      local_110 = (undefined4)*(undefined8 *)(this + 0x268);
      uStack_10c = (undefined4)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
      local_108 = *(long *)(this + 0x278);
      uVar4 = UseScratchRegisterScope::AcquireNextAvailable(local_120);
      local_140 = (CodeGenerator *)0x400000003f;
      if (uVar4 != 0x3f) {
        local_140 = (CodeGenerator *)((ulong)uVar4 | 0x4000000000);
      }
      local_138 = (CodeGenerator *)((ulong)local_138 & 0xffffffff00000000);
      FUN_0161b14c(&local_f0,local_140,0,uVar16,uVar14);
      uVar7 = 0xc0000000;
LAB_0161ae94:
      TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),&local_140,&local_c0,uVar7);
      UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_120);
      goto LAB_0161b0f8;
    }
    if ((uVar5 & 0x1ffc) == 0x16c) {
      if ((int)uVar14 != 0) {
        local_120 = this + 0x268;
        local_118 = this + 0x278;
        local_110 = (undefined4)*(undefined8 *)(this + 0x268);
        uStack_10c = (undefined4)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
        local_108 = *(long *)(this + 0x278);
        uVar16 = UseScratchRegisterScope::AcquireNextAvailable(local_118);
        local_140 = (CodeGenerator *)(uVar16 & 0xffffffff | 0x2000000000);
        local_138 = (CodeGenerator *)0x100000001;
        TurboAssembler::Fmov(uVar14 & 0xffffffff,this + 0xd0,local_140,0x100000001);
        uVar7 = 0x84000000;
        goto LAB_0161ae94;
      }
      ppCVar6 = (CodeGenerator **)&DAT_01a56424;
      uVar7 = 0x80000000;
      break;
    }
    if (uVar14 != 0) {
      local_120 = this + 0x268;
      local_118 = this + 0x278;
      local_110 = (undefined4)*(undefined8 *)(this + 0x268);
      uStack_10c = (undefined4)((ulong)*(undefined8 *)(this + 0x268) >> 0x20);
      local_108 = *(long *)(this + 0x278);
      uVar16 = UseScratchRegisterScope::AcquireNextAvailable(local_118);
      local_140 = (CodeGenerator *)(uVar16 & 0xffffffff | 0x4000000000);
      local_138 = (CodeGenerator *)0x100000001;
      TurboAssembler::Fmov(uVar14,this + 0xd0,local_140,0x100000001);
      uVar7 = 0xc4000000;
      goto LAB_0161ae94;
    }
    ppCVar6 = (CodeGenerator **)&DAT_01a5640c;
LAB_0161ac84:
    uVar7 = 0xc0000000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_98 = 0xffffffff;
  local_a0 = 0xffffffff00000000;
  local_ac = 2;
  uStack_b0 = 0;
  uStack_b4 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)(this + 0xd0),ppCVar6,&local_c0,uVar7);
LAB_0161b0f8:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

