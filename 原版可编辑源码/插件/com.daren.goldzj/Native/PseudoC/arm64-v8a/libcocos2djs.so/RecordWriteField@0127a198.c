
/* v8::internal::MacroAssembler::RecordWriteField(v8::internal::Register, int,
   v8::internal::Register, v8::internal::LinkRegisterStatus, v8::internal::SaveFPRegsMode,
   v8::internal::RememberedSetAction, v8::internal::SmiCheck) */

void v8::internal::MacroAssembler::RecordWriteField
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,int param_4,
               ulong param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               int param_10)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [8];
  undefined1 local_140;
  long local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_100 [8];
  undefined1 local_f8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_b8;
  uint local_b0;
  long local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_160 = 0;
  local_158 = param_2;
  local_150 = param_3;
  if (param_10 == 0) {
    local_b8 = param_5;
    local_b0 = param_6;
    TurboAssembler::Tbz(param_1,(Register *)&local_b8,0,(Label *)&local_160);
  }
  if (param_1[0xc0] == (TurboAssembler)0x0) {
    lVar8 = (long)(param_4 + -1);
  }
  else {
    local_168 = 0;
    lVar9 = *(long *)(param_1 + 0x198);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    uVar3 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    local_d8 = 0x13;
    local_178 = 0x400000003f;
    if (uVar3 != 0x3f) {
      local_178 = (ulong)uVar3 | 0x4000000000;
    }
    lVar8 = (long)(param_4 + -1);
    local_170 = 0;
    local_100[0] = 0;
    local_f8 = 0;
    local_d0 = 0xffffffff;
    local_c8 = 2;
    local_e0 = lVar8;
    if ((param_4 < 1) && (uVar4 = Assembler::IsImmAddSub(-lVar8), (uVar4 & 1) != 0)) {
      local_b8 = local_b8 & 0xffffffffffffff00;
      local_b0 = local_b0 & 0xffffff00;
      local_98 = -local_e0;
      local_88 = 0xffffffff;
      local_90 = 0x13;
      local_80 = 2;
      puVar5 = &local_b8;
      uVar6 = 0x40000000;
    }
    else {
      puVar5 = (ulong *)local_100;
      uVar6 = 0;
    }
    TurboAssembler::AddSubMacro(param_1,&local_178,&local_158,puVar5,0,uVar6);
    local_98 = 3;
    local_90 = 0x13;
    puVar1 = &DAT_019f4018;
    if (local_178._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_b0 = local_b0 & 0xffffff00;
    local_88 = 0xffffffff;
    local_80 = 2;
    TurboAssembler::LogicalMacro(param_1,puVar1,&local_178,&local_b8,0x60000000);
    TurboAssembler::B(param_1,&local_168,0);
    TurboAssembler::Abort(param_1,0x24);
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar9;
    *(undefined8 *)(param_1 + 0x1a8) = uVar7;
  }
  local_118 = 0xffffffff;
  local_148[0] = 0;
  local_140 = 0;
  local_120 = 0x13;
  local_110 = 2;
  local_128 = lVar8;
  RecordWrite(param_1,local_158,local_150,local_148,param_5,param_6,param_7,param_8,param_9,1);
  Assembler::bind((Label *)param_1);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

