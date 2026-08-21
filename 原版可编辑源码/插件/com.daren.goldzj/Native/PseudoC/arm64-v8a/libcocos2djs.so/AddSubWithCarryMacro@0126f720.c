
/* v8::internal::TurboAssembler::AddSubWithCarryMacro(v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::Operand const&, v8::internal::FlagsUpdate,
   v8::internal::AddSubWithCarryOp) */

void __thiscall
v8::internal::TurboAssembler::AddSubWithCarryMacro
          (TurboAssembler *this,undefined8 param_1,long param_2,Operand *param_3,undefined4 param_5,
          undefined4 param_6)

{
  CPURegList *this_00;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (CPURegList *)(this + 0x198);
  uVar4 = *(undefined8 *)(this + 0x198);
  uVar5 = *(undefined8 *)(this + 0x1a8);
  uVar3 = Operand::NeedsRelocation(param_3,(Assembler *)this);
  if ((uVar3 & 1) != 0) {
    if (*(long *)this_00 == 0) goto LAB_0126f9ec;
    uVar2 = CPURegList::PopLowestIndex(this_00);
    local_c0 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_c0 = (ulong)uVar2 | 0x4000000000;
    }
    local_b8 = 0;
    uStack_88 = *(undefined8 *)(param_3 + 0x28);
    local_90 = *(undefined8 *)(param_3 + 0x20);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_80 = 0xffffffff;
    local_78 = 2;
    Assembler::ldr((Assembler *)this,(CPURegister *)&local_c0,(Operand *)&local_b0);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 0;
    uStack_88 = CONCAT71(uStack_88._1_7_,0x13);
    local_74 = 0xffffffff00000000;
    local_80 = local_c0;
    local_78 = local_b8;
    local_6c = 0;
    AddSubWithCarryMacro(this,param_1,param_2,&local_b0,param_5,param_6);
    goto LAB_0126f9b0;
  }
  if (*(int *)(param_3 + 0x30) == -1) {
    if (((*(int *)(param_3 + 0x34) == 0) && (*(int *)(param_3 + 0x38) == 2)) &&
       (*param_3 == (Operand)0x0)) {
LAB_0126f858:
      if (*(long *)this_00 == 0) goto LAB_0126f9ec;
      uVar3 = CPURegList::PopLowestIndex(this_00);
      local_c0 = uVar3 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
      local_b8 = 0;
      Mov(this,&local_c0,param_3,0);
      goto LAB_0126f950;
    }
  }
  else {
    if (*(int *)(param_3 + 0x3c) != -1) {
      if (*(int *)(param_3 + 0x3c) == 3) goto LAB_0126f858;
      if (*(int *)(param_3 + 0x44) != 0) {
        if (*(long *)this_00 == 0) goto LAB_0126f9ec;
        uVar3 = CPURegList::PopLowestIndex(this_00);
        local_b8 = 0;
        local_c0 = uVar3 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
        local_b0 = *(ulong *)(param_3 + 0x30);
        local_a8 = *(uint *)(param_3 + 0x38);
        Assembler::EmitShift
                  ((Assembler *)this,&local_c0,&local_b0,*(undefined4 *)(param_3 + 0x3c),
                   *(undefined4 *)(param_3 + 0x44));
        goto LAB_0126f950;
      }
    }
    if (*(int *)(param_3 + 0x40) != -1) {
      if (*(long *)this_00 == 0) {
LAB_0126f9ec:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar3 = CPURegList::PopLowestIndex(this_00);
      local_b8 = 0;
      local_c0 = uVar3 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
      local_b0 = *(ulong *)(param_3 + 0x30);
      local_a8 = *(uint *)(param_3 + 0x38);
      Assembler::EmitExtendShift
                ((Assembler *)this,&local_c0,&local_b0,*(undefined4 *)(param_3 + 0x40),
                 *(undefined4 *)(param_3 + 0x44));
LAB_0126f950:
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 0;
      uStack_88 = CONCAT71(uStack_88._1_7_,0x13);
      local_74 = 0xffffffff00000000;
      local_80 = local_c0;
      local_78 = local_b8;
      local_6c = 0;
      param_3 = (Operand *)&local_b0;
    }
  }
  Assembler::AddSubWithCarry((Assembler *)this,param_1,param_2,param_3,param_5,param_6);
LAB_0126f9b0:
  *(undefined8 *)(this + 0x198) = uVar4;
  *(undefined8 *)(this + 0x1a8) = uVar5;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

