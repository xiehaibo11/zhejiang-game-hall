
/* v8::internal::TurboAssembler::LoadStorePairMacro(v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::MemOperand const&, v8::internal::LoadStorePairOp)
    */

void __thiscall
v8::internal::TurboAssembler::LoadStorePairMacro
          (TurboAssembler *this,undefined8 param_1,undefined8 param_2,ulong *param_3,
          undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_120;
  uint local_118;
  ulong local_110;
  uint local_108;
  ulong local_100;
  undefined1 local_f8;
  ulong local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar6 = param_3[3];
  uVar2 = CalcLSPairDataSize(param_5);
  uVar3 = Assembler::IsImmLSPair(uVar6,uVar2);
  if ((uVar3 & 1) != 0) {
LAB_0126fec4:
    Assembler::LoadStorePair((Assembler *)this,param_1,param_2,param_3,param_5);
    goto LAB_0126fecc;
  }
  local_108 = (uint)param_3[1];
  local_110 = *param_3;
  local_e0 = uVar6;
  if ((int)param_3[4] == 2) {
    local_a0 = 0;
    local_ac = 0xffffffff;
    local_a4 = 2;
    local_98 = -0x100000000;
    local_90 = 0xffffffff;
    local_b8 = local_110;
    local_b0 = local_108;
    Assembler::LoadStorePair((Assembler *)this,param_1,param_2,&local_b8,param_5);
    local_100._0_1_ = 0;
    local_f8 = 0;
    local_d0 = 0xffffffff;
    local_d8 = 0x13;
    local_c8 = 2;
    if (((long)uVar6 < 0) && (uVar3 = Assembler::IsImmAddSub(-uVar6), (uVar3 & 1) != 0)) {
      local_98 = -local_e0;
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_b0 = local_b0 & 0xffffff00;
      local_88 = 0xffffffff;
      local_90 = CONCAT71(local_90._1_7_,0x13);
      local_80 = 2;
      AddSubMacro(this,&local_110,&local_110,&local_b8,0,0x40000000);
    }
    else {
      AddSubMacro(this,&local_110,&local_110,&local_100,0,0);
    }
    goto LAB_0126fecc;
  }
  if (((((int)param_3[4] != 0) || (*(int *)((long)param_3 + 0xc) != -1)) || ((int)param_3[2] != 0))
     || (*(int *)((long)param_3 + 0x14) != 2)) {
    local_100._0_1_ = 0;
    local_f8 = 0;
    local_d8 = 0x13;
    local_d0 = 0xffffffff;
    local_c8 = 2;
    if ((long)uVar6 < 0) {
      uVar3 = Assembler::IsImmAddSub(-uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0126fe70;
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_b0 = local_b0 & 0xffffff00;
      local_88 = 0xffffffff;
      local_90 = CONCAT71(local_90._1_7_,0x13);
      local_80 = 2;
      puVar4 = &local_b8;
      uVar8 = 0x40000000;
      local_98 = -uVar6;
    }
    else {
LAB_0126fe70:
      puVar4 = &local_100;
      uVar8 = 0;
    }
    AddSubMacro(this,&local_110,&local_110,puVar4,0,uVar8);
    local_ac = 0xffffffff;
    local_a4 = 2;
    local_a0 = 0;
    local_b8 = local_110;
    local_b0 = local_108;
    local_98 = -0x100000000;
    local_90 = 0xffffffff;
    param_3 = &local_b8;
    goto LAB_0126fec4;
  }
  lVar7 = *(long *)(this + 0x198);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar8 = *(undefined8 *)(this + 0x1a8);
  uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
  local_d8 = 0x13;
  local_118 = 0;
  local_120 = uVar3 & 0xffffffff | local_110 & 0xffffffff00000000;
  local_100._0_1_ = 0;
  local_f8 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 2;
  if ((long)uVar6 < 0) {
    uVar3 = Assembler::IsImmAddSub(-uVar6);
    if ((uVar3 & 1) == 0) goto LAB_0126ffdc;
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_b0 = local_b0 & 0xffffff00;
    local_88 = 0xffffffff;
    local_90 = CONCAT71(local_90._1_7_,0x13);
    local_80 = 2;
    puVar4 = &local_b8;
    uVar5 = 0x40000000;
    local_98 = -uVar6;
  }
  else {
LAB_0126ffdc:
    puVar4 = &local_100;
    uVar5 = 0;
  }
  AddSubMacro(this,&local_120,&local_110,puVar4,0,uVar5);
  local_ac = 0xffffffff;
  local_a4 = 2;
  local_a0 = 0;
  local_b8 = local_120;
  local_b0 = local_118;
  local_98 = -0x100000000;
  local_90 = 0xffffffff;
  Assembler::LoadStorePair((Assembler *)this,param_1,param_2,&local_b8,param_5);
  *(long *)(this + 0x198) = lVar7;
  *(undefined8 *)(this + 0x1a8) = uVar8;
LAB_0126fecc:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

