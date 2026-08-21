
/* v8::internal::MacroAssembler::AssertUndefinedOrAllocationSite(v8::internal::Register) */

void v8::internal::MacroAssembler::AssertUndefinedOrAllocationSite
               (AssemblerBase *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined4 local_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_110 = param_2;
  local_108 = param_3;
  if (param_1[0xc0] != (AssemblerBase)0x0) {
    lVar5 = *(long *)(param_1 + 0x198);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar6 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    local_118 = 0;
    uVar1 = 0x400000003f;
    if (uVar4 != 0x3f) {
      uVar1 = (ulong)uVar4 | 0x4000000000;
    }
    AssertNotSmi(param_1,param_2,param_3,0x12);
    JumpIfRoot((MacroAssembler *)param_1,&local_110,4,&local_118);
    local_e8 = 0xffffffffffffffff;
    local_c8 = 0;
    local_100 = local_110;
    local_f8 = local_108;
    local_f4 = 0xffffffff;
    local_ec = 2;
    local_e0 = 0xffffffff00000000;
    uStack_d8 = 0xffffffff;
    local_d0 = uVar1;
    AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
    local_c0 = 0x200000003f;
    if (uVar1 != 0x400000003f) {
      local_c0 = uVar1 & 0xffffffff | 0x2000000000;
    }
    local_b8 = 0;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_c0,&local_100,0x80400000);
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    uStack_80 = 0xffffffff;
    local_88 = 0;
    local_90 = uVar1;
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_d0,&DAT_019f4144,&local_c0,0,0);
    AssemblerBase::RecordComment(param_1,"]");
    local_f8 = 0;
    local_b8 = 0;
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a8 = 7;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    local_100 = uVar1;
    local_c0 = uVar1;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_100,&local_c0,0x40400000);
    local_a0 = 0x55;
    puVar2 = &DAT_019f4018;
    if (local_100._4_4_ != 0x40) {
      puVar2 = &DAT_019f4000;
    }
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0xffffffff;
    local_88 = CONCAT44(local_88._4_4_,2);
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,puVar2,&local_100,&local_c0,1,0x40000000);
    if (param_1[0xc0] != (AssemblerBase)0x0) {
      local_c0 = 0;
      TurboAssembler::B((TurboAssembler *)param_1,&local_c0,0);
      TurboAssembler::Abort((TurboAssembler *)param_1,6);
      Assembler::bind((Label *)param_1);
    }
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar5;
    *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

