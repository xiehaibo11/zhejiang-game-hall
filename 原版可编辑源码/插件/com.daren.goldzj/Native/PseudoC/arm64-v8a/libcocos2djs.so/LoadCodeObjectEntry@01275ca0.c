
/* v8::internal::TurboAssembler::LoadCodeObjectEntry(v8::internal::Register, v8::internal::Register)
    */

void v8::internal::TurboAssembler::LoadCodeObjectEntry
               (Assembler *param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  uint local_d8;
  undefined8 local_d0;
  uint local_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_e0 = param_4;
  local_d8 = param_5;
  local_d0 = param_2;
  local_c8 = param_3;
  if (param_1[0xa4] == (Assembler)0x0) {
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0x3f;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0xffffffff;
    local_88 = CONCAT44(local_88._4_4_,2);
    AddSubMacro((TurboAssembler *)param_1,&local_d0,&local_e0,&local_c0,0,0);
  }
  else {
    local_f0 = 0;
    uStack_e8 = 0;
    lVar6 = *(long *)(param_1 + 0x198);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    local_100 = 0x400000003f;
    if (uVar4 != 0x3f) {
      local_100 = (ulong)uVar4 | 0x4000000000;
    }
    local_f8 = 0;
    local_a8 = 0x17;
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    local_c0 = param_4;
    local_b8 = param_5;
    LoadStoreMacro((TurboAssembler *)param_1,&local_100,&local_c0,0x80800000);
    local_a0 = 0x80000000;
    puVar1 = &DAT_019f4018;
    if (local_100._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_90 = 0xffffffff;
    local_98._0_1_ = 0x13;
    local_88._0_4_ = 2;
    LogicalMacro((TurboAssembler *)param_1,puVar1,&local_100,&local_c0,0x60000000);
    B((TurboAssembler *)param_1,&uStack_e8,1);
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0xffffffff;
    local_a0 = 0x3f;
    local_88 = CONCAT44(local_88._4_4_,2);
    AddSubMacro((TurboAssembler *)param_1,&local_d0,&local_e0,&local_c0,0,0);
    Assembler::b(param_1,(Label *)&local_f0);
    Assembler::CheckVeneerPool(param_1,false,false,0x400);
    Assembler::bind((Label *)param_1);
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a8 = 0x27;
    local_c0 = local_e0;
    local_b8 = local_d8;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    LoadStoreMacro((TurboAssembler *)param_1,&local_100,&local_c0,0x80800000);
    iVar2 = 0;
    if (local_d0._4_4_ != 0) {
      iVar2 = (local_d0._4_4_ + -3) / local_d0._4_4_;
    }
    Assembler::ubfm(param_1,(Register *)&local_d0,(Register *)&local_100,
                    (local_d0._4_4_ + -3) - iVar2 * local_d0._4_4_,local_d0._4_4_ + -4);
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0x400000001a;
    uStack_80 = 0xffffffff;
    local_88 = 0;
    AddSubMacro((TurboAssembler *)param_1,&local_d0,&local_d0,&local_c0,0,0);
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a8 = 0x2c78;
    local_c0 = local_d0;
    local_b8 = local_c8;
    local_a0 = 0xffffffff00000000;
    local_98 = 0xffffffff;
    if (local_c8 == 0) {
      uVar5 = 0xc0400000;
      if (local_d0._4_4_ != 0x40) {
        uVar5 = 0x80400000;
      }
    }
    else {
      uVar4 = local_d0._4_4_ - 8U >> 3 | local_d0._4_4_ << 0x1d;
      if (uVar4 < 8) {
        uVar5 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar4 * 4);
      }
      else {
        uVar5 = 0x4c00000;
      }
    }
    LoadStoreMacro((TurboAssembler *)param_1,&local_d0,&local_c0,uVar5);
    Assembler::bind((Label *)param_1);
    *(long *)(param_1 + 0x198) = lVar6;
    *(undefined8 *)(param_1 + 0x1a8) = uVar7;
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

