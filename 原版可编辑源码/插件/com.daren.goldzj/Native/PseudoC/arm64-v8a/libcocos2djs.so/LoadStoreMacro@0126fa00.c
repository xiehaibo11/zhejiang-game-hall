
/* v8::internal::TurboAssembler::LoadStoreMacro(v8::internal::CPURegister const&,
   v8::internal::MemOperand const&, v8::internal::LoadStoreOp) */

void __thiscall
v8::internal::TurboAssembler::LoadStoreMacro
          (TurboAssembler *this,undefined8 param_1,Register *param_2,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_a0;
  uint local_98;
  ulong local_94;
  undefined4 local_8c;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x20);
  uVar5 = param_4 & 0xffffffff;
  uVar1 = (uint)param_4 >> 0x15 & 4;
  if (((uint)((param_4 >> 0x1e & 3) == 0) & (uint)param_4 >> 0x1a) == 0) {
    uVar1 = (uint)(param_4 >> 0x1e) & 3;
  }
  if (iVar2 == 0) {
    if ((((*(int *)(param_2 + 0xc) == -1) && (*(int *)(param_2 + 0x10) == 0)) &&
        (*(int *)(param_2 + 0x14) == 2)) &&
       ((uVar4 = Assembler::IsImmLSScaled(lVar6,uVar1), (uVar4 & 1) == 0 &&
        (uVar4 = Assembler::IsImmLSUnscaled(lVar6), (uVar4 & 1) == 0)))) {
      lVar6 = *(long *)(this + 0x198);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar7 = *(undefined8 *)(this + 0x1a8);
      uVar4 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_a8 = 0;
      local_b0 = uVar4 & 0xffffffff | (ulong)*(uint *)(param_2 + 4) << 0x20;
      Mov(this,(Register *)&local_b0,*(ulong *)(param_2 + 0x18));
      local_a0 = *(ulong *)param_2;
      local_98 = *(uint *)(param_2 + 8);
      local_88 = 0;
      local_80 = 0;
      local_94 = local_b0;
      local_8c = local_a8;
      local_78 = 0xffffffff;
      Assembler::LoadStore((Assembler *)this,param_1,&local_a0,uVar5);
      *(long *)(this + 0x198) = lVar6;
      *(undefined8 *)(this + 0x1a8) = uVar7;
      goto LAB_0126fbe8;
    }
    iVar2 = *(int *)(param_2 + 0x20);
  }
  if (iVar2 == 2) {
    uVar4 = Assembler::IsImmLSUnscaled(lVar6);
    if ((uVar4 & 1) == 0) {
      local_a0 = *(ulong *)param_2;
      local_98 = *(uint *)(param_2 + 8);
      local_88 = 0;
      local_94 = 0xffffffff;
      local_8c = 2;
      local_80 = 0xffffffff00000000;
      local_78 = 0xffffffff;
      Assembler::LoadStore((Assembler *)this,param_1,&local_a0,uVar5);
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_98 = local_98 & 0xffffff00;
      local_70 = 0xffffffff;
      local_78 = CONCAT71(local_78._1_7_,0x13);
      local_68 = 2;
      local_80 = lVar6;
      Assembler::add((Register *)this,param_2,(Operand *)param_2);
      goto LAB_0126fbe8;
    }
    iVar2 = *(int *)(param_2 + 0x20);
  }
  if ((iVar2 == 1) && (uVar4 = Assembler::IsImmLSUnscaled(lVar6), (uVar4 & 1) == 0)) {
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = local_98 & 0xffffff00;
    local_78 = CONCAT71(local_78._1_7_,0x13);
    local_70 = 0xffffffff;
    local_68 = 2;
    local_80 = lVar6;
    Assembler::add((Register *)this,param_2,(Operand *)param_2);
    local_a0 = *(ulong *)param_2;
    local_98 = *(uint *)(param_2 + 8);
    local_94 = 0xffffffff;
    local_8c = 2;
    local_88 = 0;
    local_80 = -0x100000000;
    local_78 = 0xffffffff;
    param_2 = (Register *)&local_a0;
  }
  Assembler::LoadStore((Assembler *)this,param_1,param_2,uVar5);
LAB_0126fbe8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

