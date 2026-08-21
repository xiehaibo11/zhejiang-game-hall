
/* v8::internal::TurboAssembler::PrepareForTailCall(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::Register) */

void v8::internal::TurboAssembler::PrepareForTailCall
               (Label *param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
               undefined4 param_5,ulong param_6,uint param_7,undefined8 param_8,undefined8 param_9,
               int param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulong local_d8;
  uint local_d0;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_8c = 0xffffffff00000000;
  local_84 = 3;
  local_d8 = param_6;
  local_d0 = param_7;
  local_98 = param_4;
  local_90 = param_5;
  AddSubMacro((TurboAssembler *)param_1,&local_d8,&DAT_019f418c,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a0._0_1_ = 0x13;
  local_a8 = 0x18;
  local_98 = 0xffffffff;
  local_90 = 2;
  AddSubMacro((TurboAssembler *)param_1,&local_d8,&local_d8,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_a8 = 0xf;
  local_90 = 2;
  AddSubMacro((TurboAssembler *)param_1,&local_d8,&local_d8,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0xf;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_90 = 2;
  LogicalMacro((TurboAssembler *)param_1,&local_d8,&local_d8,&local_c8,0x200000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_8c = 0xffffffff00000000;
  local_84 = 3;
  local_e8 = param_4;
  local_e0 = param_5;
  local_98 = param_2;
  local_90 = param_3;
  AddSubMacro((TurboAssembler *)param_1,&local_e8,&DAT_019f3ff4,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_a8 = 8;
  local_90 = 2;
  AddSubMacro((TurboAssembler *)param_1,&local_e8,&local_e8,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0xf;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_90 = 2;
  AddSubMacro((TurboAssembler *)param_1,&local_e8,&local_e8,&local_c8,0,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0xf;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_90 = 2;
  LogicalMacro((TurboAssembler *)param_1,&local_e8,&local_e8,&local_c8,0x200000);
  if (FLAG_debug_code != '\0') {
    local_98 = local_d8;
    local_90 = local_d0;
    puVar1 = &DAT_019f4018;
    if (local_e8._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_a8 = 0;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_8c = 0xffffffff00000000;
    local_84 = 0;
    AddSubMacro((TurboAssembler *)param_1,puVar1,&local_e8,&local_c8,1,0x40000000);
    local_c8 = 0;
    B((TurboAssembler *)param_1,&local_c8,3);
    Abort((TurboAssembler *)param_1,0x22);
    Assembler::bind(param_1);
  }
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_c8 = 0x400000001d;
  local_b0 = 8;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  LoadStoreMacro((TurboAssembler *)param_1,&DAT_019f4198,&local_c8,0xc0400000);
  local_c8 = 0x400000001d;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  LoadStoreMacro((TurboAssembler *)param_1,&DAT_019f418c,&local_c8,0xc0400000);
  local_f8 = param_9;
  local_f0 = param_10;
  local_108 = 0;
  uStack_100 = 0;
  Assembler::b((Assembler *)param_1,(Label *)&local_108);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  Assembler::bind(param_1);
  local_c8 = local_e8;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0xfffffffffffffff8;
  local_c0 = local_e0;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  iVar4 = (int)((ulong)param_9 >> 0x20);
  if (param_10 == 0) {
    uVar5 = 0xc0400000;
    if (iVar4 != 0x40) {
      uVar5 = 0x80400000;
    }
  }
  else {
    uVar2 = iVar4 - 8U >> 3 | iVar4 << 0x1d;
    if (uVar2 < 8) {
      uVar5 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
    }
    else {
      uVar5 = 0x4c00000;
    }
  }
  LoadStoreMacro((TurboAssembler *)param_1,&local_f8,&local_c8,uVar5);
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0xfffffffffffffff8;
  local_c8 = local_d8;
  local_c0 = local_d0;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  if (local_f0 == 0) {
    uVar5 = 0xc0000000;
    if (local_f8._4_4_ != 0x40) {
      uVar5 = 0x80000000;
    }
  }
  else {
    uVar2 = local_f8._4_4_ - 8U >> 3 | local_f8._4_4_ << 0x1d;
    if (uVar2 < 8) {
      uVar5 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar2 * 4);
    }
    else {
      uVar5 = 0x4800000;
    }
  }
  LoadStoreMacro((TurboAssembler *)param_1,&local_f8,&local_c8,uVar5);
  Assembler::bind(param_1);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_8c = 0xffffffff00000000;
  local_98 = local_e8;
  local_90 = local_e0;
  local_84 = 0;
  AddSubMacro((TurboAssembler *)param_1,&DAT_019f4018,&DAT_019f3ff4,&local_c8,1,0x40000000);
  B((TurboAssembler *)param_1,&uStack_100,1);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_8c = 0xffffffff00000000;
  local_98 = local_d8;
  local_90 = local_d0;
  local_84 = 0;
  Mov((TurboAssembler *)param_1,&DAT_019f3ff4,&local_c8,0);
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

