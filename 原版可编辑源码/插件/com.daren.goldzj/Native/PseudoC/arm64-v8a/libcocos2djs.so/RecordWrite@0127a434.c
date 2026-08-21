
/* v8::internal::MacroAssembler::RecordWrite(v8::internal::Register, v8::internal::Operand,
   v8::internal::Register, v8::internal::LinkRegisterStatus, v8::internal::SaveFPRegsMode,
   v8::internal::RememberedSetAction, v8::internal::SmiCheck) */

void v8::internal::MacroAssembler::RecordWrite
               (AssemblerBase *param_1,undefined8 param_2,undefined4 param_3,ulong *param_4,
               ulong param_5,uint param_6,int param_7,undefined4 param_8,int param_9,int param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  Assembler *local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulong local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  Assembler *local_a0;
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_f0 = param_5;
  local_e8 = param_6;
  local_e0 = param_2;
  local_d8 = param_3;
  if (param_1[0xc0] != (AssemblerBase)0x0) {
    lVar8 = *(long *)(param_1 + 0x198);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar9 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    local_100 = (Assembler *)0x400000003f;
    if (uVar4 != 0x3f) {
      local_100 = (Assembler *)((ulong)uVar4 | 0x4000000000);
    }
    local_f8 = 0;
    if ((((((int)param_4[6] == -1) && (*(int *)((long)param_4 + 0x34) == 0)) &&
         ((int)param_4[7] == 2)) && (((char)*param_4 == '\0' && ((long)param_4[4] < 0)))) &&
       (uVar5 = Assembler::IsImmAddSub(-param_4[4]), (uVar5 & 1) != 0)) {
      local_b0 = -param_4[4];
      local_d0 = local_d0 & 0xffffffffffffff00;
      uStack_c8 = uStack_c8 & 0xffffff00;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,0x13);
      local_a0 = (Assembler *)0xffffffff;
      local_98 = 2;
      uVar7 = 0x40000000;
      puVar6 = &local_d0;
    }
    else {
      uVar7 = 0;
      puVar6 = param_4;
    }
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_100,&local_e0,puVar6,0,uVar7);
    local_118 = 0;
    local_130 = local_100;
    local_128 = local_f8;
    local_124 = 0xffffffff;
    local_11c = 2;
    local_110 = 0xffffffff00000000;
    uStack_108 = 0xffffffff;
    AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
    local_d0 = 0x200000003f;
    if ((int)local_100 != 0x3f) {
      local_d0 = (ulong)local_100 & 0xffffffff | 0x2000000000;
    }
    uStack_c8 = 0;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_d0,&local_130,0x80400000);
    local_d0 = local_d0 & 0xffffffffffffff00;
    uStack_c8 = uStack_c8 & 0xffffff00;
    local_b0 = 0;
    uStack_a8._0_1_ = 0x13;
    local_a0 = local_100;
    local_98 = local_f8;
    local_94 = 0;
    uStack_90 = 0xffffffff;
    local_8c = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_100,&DAT_019f4144,&local_d0,0,0);
    AssemblerBase::RecordComment(param_1,"]");
    local_a0 = (Assembler *)local_f0;
    local_98 = local_e8;
    puVar1 = &DAT_019f4018;
    if (local_100._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_d0 = local_d0 & 0xffffffffffffff00;
    uStack_c8 = uStack_c8 & 0xffffff00;
    local_b0 = 0;
    uStack_a8 = CONCAT71(uStack_a8._1_7_,0x13);
    local_94 = 0;
    uStack_90 = 0xffffffff;
    local_8c = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)param_1,puVar1,&local_100,&local_d0,1,0x40000000);
    local_d0 = 0;
    TurboAssembler::B((TurboAssembler *)param_1,&local_d0,0);
    TurboAssembler::Abort((TurboAssembler *)param_1,0x32);
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar8;
    *(undefined8 *)(param_1 + 0x1a8) = uVar9;
  }
  if ((param_9 != 1) || (FLAG_incremental_marking != '\0')) {
    local_100 = (Assembler *)0x0;
    if (param_10 == 0) {
      local_d0 = local_f0;
      uStack_c8 = local_e8;
      TurboAssembler::Tbz((TurboAssembler *)param_1,(Register *)&local_d0,0,(Label *)&local_100);
    }
    TurboAssembler::CheckPageFlag((TurboAssembler *)param_1,&local_f0,2,1,&local_100);
    TurboAssembler::CheckPageFlag((TurboAssembler *)param_1,&local_e0,4,1,&local_100);
    uVar3 = local_d8;
    uVar9 = local_e0;
    if (param_7 == 0) {
      local_130 = (Assembler *)param_1;
      ConstantPool::BlockScope::BlockScope((BlockScope *)&local_128,(Assembler *)param_1,0);
      Assembler::CheckVeneerPool(local_130,false,true,0);
      Assembler::StartBlockVeneerPool(local_130);
      local_b0 = 0xffffffff00000001;
      uStack_a8 = 0xffffffff;
      uStack_c8 = 0;
      local_d0 = 0x400000003f;
      uStack_c4 = 0xffffffff;
      uStack_c0 = 0;
      local_bc = 2;
      local_b8 = 0xfffffffffffffff0;
      Assembler::stp((Assembler *)param_1,(CPURegister *)&DAT_019f4198,(CPURegister *)&DAT_019f41a4,
                     (MemOperand *)&local_d0);
      Assembler::EndBlockVeneerPool(local_130);
      ConstantPool::BlockScope::~BlockScope((BlockScope *)&local_128);
      uVar3 = local_d8;
      uVar9 = local_e0;
      local_d0 = *param_4;
      local_b8 = param_4[3];
      uStack_c8 = (uint)param_4[1];
      uStack_c4 = (undefined4)(param_4[1] >> 0x20);
      uStack_c0 = (undefined4)param_4[2];
      local_bc = (undefined4)(param_4[2] >> 0x20);
      uStack_a8 = param_4[5];
      local_b0 = param_4[4];
      local_a0 = (Assembler *)param_4[6];
      local_98 = (uint)param_4[7];
      local_94 = (undefined4)(param_4[7] >> 0x20);
      uStack_90 = (undefined4)param_4[8];
      local_8c = (undefined4)(param_4[8] >> 0x20);
      uVar7 = Builtins::builtin_handle((Builtins *)(*(long *)(param_1 + 0x178) + 0x9e00),0);
      TurboAssembler::CallRecordWriteStub(param_1,uVar9,uVar3,&local_d0,param_9,param_8,uVar7,0);
      local_130 = (Assembler *)param_1;
      ConstantPool::BlockScope::BlockScope((BlockScope *)&local_128,(Assembler *)param_1,0);
      Assembler::CheckVeneerPool(local_130,false,true,0);
      Assembler::StartBlockVeneerPool(local_130);
      local_d0 = 0x400000003f;
      uStack_c8 = 0;
      uStack_c4 = 0xffffffff;
      uStack_c0 = 0;
      local_bc = 2;
      local_b8 = 0x10;
      local_b0 = 0xffffffff00000002;
      uStack_a8 = 0xffffffff;
      Assembler::ldp((Assembler *)param_1,(CPURegister *)&DAT_019f4198,(CPURegister *)&DAT_019f41a4,
                     (MemOperand *)&local_d0);
      Assembler::EndBlockVeneerPool(local_130);
      ConstantPool::BlockScope::~BlockScope((BlockScope *)&local_128);
    }
    else {
      local_d0 = *param_4;
      local_b8 = param_4[3];
      uStack_c8 = (uint)param_4[1];
      uStack_c4 = (undefined4)(param_4[1] >> 0x20);
      uStack_c0 = (undefined4)param_4[2];
      local_bc = (undefined4)(param_4[2] >> 0x20);
      uStack_a8 = param_4[5];
      local_b0 = param_4[4];
      local_a0 = (Assembler *)param_4[6];
      local_98 = (uint)param_4[7];
      local_94 = (undefined4)(param_4[7] >> 0x20);
      uStack_90 = (undefined4)param_4[8];
      local_8c = (undefined4)(param_4[8] >> 0x20);
      uVar7 = Builtins::builtin_handle((Builtins *)(*(long *)(param_1 + 0x178) + 0x9e00),0);
      TurboAssembler::CallRecordWriteStub(param_1,uVar9,uVar3,&local_d0,param_9,param_8,uVar7,0);
    }
    Assembler::bind((Label *)param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

