
/* v8::internal::MacroAssembler::AssertConstructor(v8::internal::Register) */

void v8::internal::MacroAssembler::AssertConstructor
               (AssemblerBase *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1[0xc0] != (AssemblerBase)0x0) {
    AssertNotSmi(param_1,param_2,param_3,0x14);
    lVar5 = *(long *)(param_1 + 0x198);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar6 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    uVar1 = 0x400000003f;
    if (uVar4 != 0x3f) {
      uVar1 = (ulong)uVar4 | 0x4000000000;
    }
    local_f8 = 0;
    local_b8 = 0;
    local_d8 = 0xffffffffffffffff;
    local_e4 = 0xffffffff;
    local_dc = 2;
    local_d0 = 0xffffffff00000000;
    uStack_c8 = 0xffffffff;
    local_100 = uVar1;
    local_f0 = param_2;
    local_e8 = param_3;
    local_c0 = uVar1;
    AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
    local_b0 = 0x200000003f;
    if (uVar1 != 0x400000003f) {
      local_b0 = uVar1 & 0xffffffff | 0x2000000000;
    }
    local_a8 = 0;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_b0,&local_f0,0x80400000);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 0;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    uStack_70 = 0xffffffff;
    local_78 = 0;
    local_80 = uVar1;
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_c0,&DAT_019f4144,&local_b0,0,0);
    AssemblerBase::RecordComment(param_1,"]");
    local_a8 = 0;
    local_a4 = 0xffffffff;
    local_9c = 2;
    local_98 = 9;
    local_90 = 0xffffffff00000000;
    local_88 = 0xffffffff;
    local_b0 = uVar1;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_100,&local_b0,0x400000);
    local_90 = 0x40;
    puVar2 = &DAT_019f4018;
    if (local_100._4_4_ != 0x40) {
      puVar2 = &DAT_019f4000;
    }
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    local_80 = 0xffffffff;
    local_78 = CONCAT44(local_78._4_4_,2);
    TurboAssembler::LogicalMacro((TurboAssembler *)param_1,puVar2,&local_100,&local_b0,0x60000000);
    local_b0 = 0;
    TurboAssembler::B((TurboAssembler *)param_1,&local_b0,1);
    TurboAssembler::Abort((TurboAssembler *)param_1,0x18);
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar5;
    *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

