
/* v8::internal::compiler::CodeGenerator::AssembleReturn(v8::internal::compiler::InstructionOperand*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleReturn
          (CodeGenerator *this,InstructionOperand *param_1)

{
  uint uVar1;
  Label *this_00;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  ulong local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  ulong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulong local_b0;
  ulong uStack_a8;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  piVar10 = (int *)**(undefined8 **)(this + 0x20);
  uVar1 = *(int *)(**(long **)(this + 0x18) + 0xc) + 1;
  uVar2 = uVar1 & 0xfffffffe;
  if (uVar2 != 0) {
    local_d8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    local_f8[0] = 0;
    local_f0 = 0;
    local_d0 = 0x13;
    local_c8 = 0xffffffff;
    local_c0 = 2;
    if ((int)uVar2 < 0) {
      lVar8 = -local_d8;
      uVar5 = Assembler::IsImmAddSub(lVar8);
      if ((uVar5 & 1) == 0) goto LAB_01617984;
      local_b0 = local_b0 & 0xffffffffffffff00;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      local_80 = 0xffffffff;
      local_88 = 0x13;
      local_78 = CONCAT44(local_78._4_4_,2);
      puVar6 = &local_b0;
      uVar7 = 0x40000000;
      local_90 = lVar8;
    }
    else {
LAB_01617984:
      puVar6 = (ulong *)local_f8;
      uVar7 = 0;
    }
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&DAT_01a56370,&DAT_01a56370,puVar6,0,uVar7);
  }
  this_00 = (Label *)(this + 0xd0);
  TurboAssembler::PopCPURegList(this_00,*(undefined8 *)(piVar10 + 0xc),0x40);
  TurboAssembler::PopCPURegList(this_00,*(undefined8 *)(piVar10 + 0xe),0x100000040);
  this[0x79] = (CodeGenerator)0x1;
  uVar7 = *(undefined8 *)(piVar10 + 6);
  if (*piVar10 == 2) {
LAB_01617a50:
    local_88 = 0x13;
    local_b0 = local_b0 & 0xffffffffffffff00;
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    local_90 = 0;
    local_80 = 0x400000001d;
    uStack_70 = 0xffffffff;
    local_78 = 0;
    TurboAssembler::Mov((TurboAssembler *)this_00,&DAT_01a56370,&local_b0,0);
    TurboAssembler::Pop((TurboAssembler *)this_00,(CPURegister *)&DAT_01a5637c,
                        (CPURegister *)&DAT_01a56388,(CPURegister *)&DAT_01a56394,
                        (CPURegister *)&DAT_01a56394);
    UnwindingInfoWriter::MarkFrameDeconstructed
              ((UnwindingInfoWriter *)(this + 0x30),*(int *)(this + 0xf0) - *(int *)(this + 0xe0));
  }
  else if (*(char *)(*(long *)(this + 0x18) + 0x10) != '\0') {
    uVar5 = *(ulong *)param_1;
    if ((uVar5 & 7) == 3) {
      if (((uint)uVar5 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_b0,(int)(uVar5 >> 0x20));
      }
      else {
        puVar6 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar5 >> 0x20) * 0x10);
        uStack_a8 = puVar6[1];
        local_b0 = *puVar6;
      }
      if ((int)uStack_a8 == 0) {
        if (*(int *)(this + 0xb0) < 0) {
          Assembler::b((Assembler *)this_00,(Label *)(this + 0xb0));
          goto LAB_01617c88;
        }
        Assembler::bind(this_00);
      }
    }
    goto LAB_01617a50;
  }
  uVar5 = *(ulong *)param_1;
  iVar9 = (int)uVar7;
  if ((uVar5 & 7) == 3) {
    if (((uint)uVar5 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_b0,(int)(uVar5 >> 0x20));
    }
    else {
      puVar6 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar5 >> 0x20) * 0x10);
      uStack_a8 = puVar6[1];
      local_b0 = *puVar6;
    }
    uVar5 = (-(ulong)((uint)((int)uStack_a8 + iVar9) >> 0x1f) & 0xfffffff800000000 |
            (ulong)(uint)((int)uStack_a8 + iVar9) << 3) + 8;
    uVar3 = uVar5 & 0xfffffffffffffff0;
    if (uVar3 != 0) {
      local_f8[0] = 0;
      local_f0 = 0;
      local_d0 = 0x13;
      local_c8 = 0xffffffff;
      local_c0 = 2;
      local_d8 = uVar3;
      if ((long)uVar5 < 0) {
        uVar5 = Assembler::IsImmAddSub(-uVar3);
        if ((uVar5 & 1) == 0) goto LAB_01617c50;
        puVar6 = &local_b0;
        uVar7 = 0x40000000;
        local_b0 = local_b0 & 0xffffffffffffff00;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        local_80 = 0xffffffff;
        local_88 = 0x13;
        local_78 = CONCAT44(local_78._4_4_,2);
        local_90 = -uVar3;
      }
      else {
LAB_01617c50:
        puVar6 = (ulong *)local_f8;
        uVar7 = 0;
      }
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)this_00,&DAT_01a56370,&DAT_01a56370,puVar6,0,uVar7);
    }
  }
  else {
    local_108 = (long)uVar5 >> 0x23 & 0xffffffffU | 0x4000000000;
    local_d0 = 0x13;
    local_d8 = (ulong)iVar9;
    local_100 = 0;
    local_f8[0] = 0;
    local_f0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 2;
    if ((iVar9 < 0) && (uVar5 = Assembler::IsImmAddSub(-local_d8), (uVar5 & 1) != 0)) {
      local_b0 = local_b0 & 0xffffffffffffff00;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      local_90 = -local_d8;
      local_80 = 0xffffffff;
      local_88 = 0x13;
      local_78 = CONCAT44(local_78._4_4_,2);
      puVar6 = &local_b0;
      uVar7 = 0x40000000;
    }
    else {
      puVar6 = (ulong *)local_f8;
      uVar7 = 0;
    }
    TurboAssembler::AddSubMacro((TurboAssembler *)this_00,&local_108,&local_108,puVar6,0,uVar7);
    TurboAssembler::DropArguments((TurboAssembler *)this_00,&local_108,0);
  }
  TurboAssembler::AssertSpAligned((TurboAssembler *)this_00);
  Assembler::ret((Assembler *)this_00,(Register *)&DAT_01a56388);
LAB_01617c88:
  Assembler::CheckVeneerPool((Assembler *)this_00,false,false,0x400);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

