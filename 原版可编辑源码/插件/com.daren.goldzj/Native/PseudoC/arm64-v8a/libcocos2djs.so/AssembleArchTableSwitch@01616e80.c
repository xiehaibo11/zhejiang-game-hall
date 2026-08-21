
/* v8::internal::compiler::CodeGenerator::AssembleArchTableSwitch(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchTableSwitch
          (CodeGenerator *this,Instruction *param_1)

{
  Assembler *this_00;
  long lVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  Assembler **ppAVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_140;
  ulong uStack_138;
  undefined4 local_130;
  ulong local_128;
  undefined4 local_120;
  CodeGenerator *local_118;
  CodeGenerator *pCStack_110;
  undefined8 local_108;
  undefined8 local_100;
  Assembler *local_f8;
  BlockScope local_f0 [24];
  long local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Assembler *local_b0;
  ulong uStack_a8;
  long local_90;
  undefined1 local_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_118 = this + 0x268;
  pCStack_110 = this + 0x278;
  local_108 = *(undefined8 *)(this + 0x268);
  this_00 = (Assembler *)(this + 0xd0);
  local_100 = *(undefined8 *)(this + 0x278);
  local_120 = 0;
  local_128 = 0x200000003f;
  if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
    local_128 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x2000000000;
  }
  uVar4 = UseScratchRegisterScope::AcquireNextAvailable(local_118);
  local_130 = 0;
  uVar13 = (ulong)*(ushort *)(param_1 + 5);
  uStack_138 = 0x400000003f;
  if (uVar4 != 0x3f) {
    uStack_138 = (ulong)uVar4 | 0x4000000000;
  }
  lVar1 = uVar13 - 2;
  local_140 = 0;
  local_f8 = (Assembler *)((ulong)local_f8 & 0xffffffffffffff00);
  local_f0[0] = (BlockScope)0x0;
  local_d0 = 0x13;
  local_c8 = 0xffffffff;
  local_c0 = 2;
  local_d8 = lVar1;
  if ((lVar1 < 0) && (uVar5 = Assembler::IsImmAddSub(2 - uVar13), (uVar5 & 1) != 0)) {
    local_90 = 2 - uVar13;
    local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    local_80 = 0xffffffff;
    local_88 = 0x13;
    local_78 = 2;
    ppAVar6 = &local_b0;
    uVar7 = 0;
  }
  else {
    ppAVar6 = &local_f8;
    uVar7 = 0x40000000;
  }
  TurboAssembler::AddSubMacro((TurboAssembler *)this_00,&DAT_01a56424,&local_128,ppAVar6,1,uVar7);
  uVar13 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30);
  if ((uVar13 & 7) == 3) {
    if (((uint)uVar13 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_b0,(int)(uVar13 >> 0x20));
      uVar13 = uStack_a8;
    }
    else {
      puVar2 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar13 >> 0x20) * 0x10);
      uVar13 = puVar2[1];
      local_b0 = (Assembler *)*puVar2;
      uStack_a8 = uVar13;
    }
    goto LAB_01617060;
  }
  plVar8 = (long *)(*(long *)(this + 0x28) + 0x48);
  plVar11 = (long *)*plVar8;
  if (plVar11 == (long *)0x0) {
LAB_01617040:
    plVar9 = plVar8;
  }
  else {
    plVar9 = plVar8;
    do {
      iVar10 = (int)(uVar13 >> 3);
      if (iVar10 <= (int)plVar11[4]) {
        plVar9 = plVar11;
      }
      plVar11 = (long *)plVar11[(int)plVar11[4] < iVar10];
    } while (plVar11 != (long *)0x0);
    if ((plVar9 == plVar8) || (iVar10 < (int)plVar9[4])) goto LAB_01617040;
  }
  uVar13 = plVar9[6];
LAB_01617060:
  TurboAssembler::B((TurboAssembler *)this_00,
                    *(long *)(this + 0xa8) + ((long)(uVar13 << 0x20) >> 0x1d),2);
  TurboAssembler::Adr((TurboAssembler *)this_00,&uStack_138,&local_140,0);
  local_b0 = (Assembler *)((ulong)local_b0 & 0xffffffffffffff00);
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  local_90 = 0;
  local_88 = 0x13;
  local_80 = local_128;
  local_78 = local_120;
  local_74 = 0x2ffffffff;
  local_6c = 2;
  TurboAssembler::AddSubMacro((TurboAssembler *)this_00,&uStack_138,&uStack_138,&local_b0,0,0);
  Assembler::br(this_00,(Register *)&uStack_138);
  local_f8 = this_00;
  ConstantPool::BlockScope::BlockScope(local_f0,this_00,lVar1 * 4);
  Assembler::CheckVeneerPool(local_f8,false,true,lVar1 * 4);
  Assembler::StartBlockVeneerPool(local_f8);
  Assembler::bind((Label *)this_00);
  if (lVar1 != 0) {
    lVar12 = 0;
    do {
      uVar13 = *(ulong *)(param_1 + (lVar12 + (ulong)(byte)param_1[4]) * 8 + 0x38);
      if ((uVar13 & 7) == 3) {
        if (((uint)uVar13 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_b0,(int)(uVar13 >> 0x20));
          uVar13 = uStack_a8;
        }
        else {
          puVar2 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) +
                            ((long)uVar13 >> 0x20) * 0x10);
          uStack_a8 = puVar2[1];
          local_b0 = (Assembler *)*puVar2;
          uVar13 = uStack_a8;
        }
      }
      else {
        plVar8 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar11 = (long *)*plVar8;
        if (plVar11 == (long *)0x0) {
LAB_016171f8:
          plVar9 = plVar8;
        }
        else {
          plVar9 = plVar8;
          do {
            iVar10 = (int)(uVar13 >> 3);
            if (iVar10 <= (int)plVar11[4]) {
              plVar9 = plVar11;
            }
            plVar11 = (long *)plVar11[(int)plVar11[4] < iVar10];
          } while (plVar11 != (long *)0x0);
          if ((plVar9 == plVar8) || (iVar10 < (int)plVar9[4])) goto LAB_016171f8;
        }
        uVar13 = plVar9[6];
      }
      Assembler::b(this_00,(Label *)(*(long *)(this + 0xa8) + ((long)(uVar13 << 0x20) >> 0x1d)));
      Assembler::CheckVeneerPool(this_00,false,false,0x400);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar1);
  }
  Assembler::EndBlockVeneerPool(local_f8);
  ConstantPool::BlockScope::~BlockScope(local_f0);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_118);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

