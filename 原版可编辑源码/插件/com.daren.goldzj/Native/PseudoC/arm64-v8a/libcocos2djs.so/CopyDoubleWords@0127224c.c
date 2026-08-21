
/* v8::internal::TurboAssembler::CopyDoubleWords(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::TurboAssembler::CopyDoubleWordsMode) */

void v8::internal::TurboAssembler::CopyDoubleWords
               (Label *param_1,ulong param_2,uint param_3,ulong param_4,uint param_5,
               undefined8 param_6,undefined4 param_7,int param_8)

{
  CPURegList *this;
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_118 [2];
  ulong local_108;
  int iStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulong local_e8;
  uint local_e0;
  ulong local_d8;
  uint local_d0;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_f8 = param_6;
  local_f0 = param_7;
  local_e8 = param_4;
  local_e0 = param_5;
  local_d8 = param_2;
  local_d0 = param_3;
  if (param_1[0xc0] != (Label)0x0) {
    uVar5 = param_4;
    uVar7 = param_5;
    local_108 = param_2;
    if (param_8 == 1) {
      uVar5 = param_2;
      uVar7 = param_3;
      local_108 = param_4;
      param_3 = param_5;
    }
    local_100 = CONCAT44(local_100._4_4_,param_3);
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_a8 = 0;
    local_118[0] = 0;
    local_a0._0_1_ = 0x13;
    local_8c = 0xffffffff00000000;
    local_84 = 0;
    local_98 = uVar5;
    local_90 = uVar7;
    AddSubMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8,
                &local_c8,1,0x40000000);
    B((TurboAssembler *)param_1,local_118,0xb);
    local_98 = local_f8;
    local_90 = local_f0;
    puVar3 = &DAT_019f4018;
    if (iStack_104 != 0x40) {
      puVar3 = &DAT_019f4000;
    }
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_a8 = 0;
    local_a0._0_1_ = 0x13;
    local_8c = 0xffffffff00000000;
    local_84 = 0;
    AddSubMacro((TurboAssembler *)param_1,puVar3,&stack0xfffffffffffffef8,&local_c8,1,0x40000000);
    local_c8 = 0;
    B((TurboAssembler *)param_1,&local_c8,10);
    Abort((TurboAssembler *)param_1,0x11);
    Assembler::bind(param_1);
    Assembler::bind(param_1);
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_a8 = 0;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_8c = 0xffffffff00000000;
    local_84 = 0;
    local_98 = uVar5;
    local_90 = uVar7;
    AddSubMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8,
                &local_c8,0,0);
  }
  lVar8 = *(long *)(param_1 + 0x1a8);
  iVar1 = -1;
  if (param_8 == 0) {
    iVar1 = 1;
  }
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x198);
    this = (CPURegList *)(param_1 + 0x1a8);
    uVar5 = CPURegList::PopLowestIndex(this);
    local_108 = uVar5 & 0xffffffff | 0x4000000000;
    local_100 = 0x100000001;
    if (*(long *)this != 0) {
      uVar5 = CPURegList::PopLowestIndex(this);
      local_118[0] = uVar5 & 0xffffffff | 0x4000000000;
      local_118[1] = 0x100000001;
      local_128 = 0;
      uStack_120 = 0;
      local_130 = 0;
      Tbz((TurboAssembler *)param_1,(Register *)&local_f8,0,(Label *)&uStack_120);
      local_c8 = local_e8;
      local_c0 = local_e0;
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_a8 = 0xffffffff00000002;
      local_a0 = 0xffffffff;
      local_b0 = (long)(iVar1 << 3);
      LoadStoreMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,&local_c8,0xc4400000);
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_c0 = local_c0 & 0xffffff00;
      local_98 = 0xffffffff;
      local_a8 = 1;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      AddSubMacro((TurboAssembler *)param_1,&local_f8,&local_f8,&local_c8,0,0x40000000);
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_c8 = local_d8;
      local_c0 = local_d0;
      local_a8 = 0xffffffff00000002;
      local_a0 = 0xffffffff;
      if ((int)local_100 == 0) {
        uVar6 = 0xc0000000;
        if (iStack_104 != 0x40) {
          uVar6 = 0x80000000;
        }
      }
      else {
        uVar7 = iStack_104 - 8U >> 3 | iStack_104 << 0x1d;
        if (uVar7 < 8) {
          uVar6 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar7 * 4);
        }
        else {
          uVar6 = 0x4800000;
        }
      }
      local_b0 = (long)(iVar1 << 3);
      LoadStoreMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,&local_c8,uVar6);
      Assembler::bind(param_1);
      if (param_8 == 1) {
        local_c8 = local_c8 & 0xffffffffffffff00;
        local_c0 = local_c0 & 0xffffff00;
        local_98 = 0xffffffff;
        local_a8 = 8;
        local_a0._0_1_ = 0x13;
        local_90 = 2;
        AddSubMacro((TurboAssembler *)param_1,&local_d8,&local_d8,&local_c8,0,0x40000000);
        local_c8 = local_c8 & 0xffffffffffffff00;
        local_c0 = local_c0 & 0xffffff00;
        local_a8 = 8;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_98 = 0xffffffff;
        local_90 = 2;
        AddSubMacro((TurboAssembler *)param_1,&local_e8,&local_e8,&local_c8,0,0x40000000);
      }
      Assembler::bind(param_1);
      Cbz((TurboAssembler *)param_1,(Register *)&local_f8,(Label *)&local_130);
      local_c8 = local_e8;
      local_c0 = local_e0;
      uVar10 = 0x44000000;
      uVar7 = uVar10;
      if (iStack_104 != 0x40) {
        uVar7 = 0x84000000;
      }
      uVar2 = 0x4000000;
      if (iStack_104 != 0x20) {
        uVar2 = uVar7;
      }
      uVar7 = (uint)(iStack_104 == 0x40) << 0x1f;
      if ((int)local_100 != 0) {
        uVar7 = uVar2;
      }
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_a8 = 0xffffffff00000002;
      local_a0 = 0xffffffff;
      local_b0 = (long)(iVar1 << 4);
      LoadStorePairMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,local_118,&local_c8,
                         uVar7 | 0x400000);
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_c0 = local_c0 & 0xffffff00;
      local_98 = 0xffffffff;
      local_a8 = 2;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      AddSubMacro((TurboAssembler *)param_1,&local_f8,&local_f8,&local_c8,0,0x40000000);
      local_c8 = local_d8;
      local_c0 = local_d0;
      if (iStack_104 != 0x40) {
        uVar10 = 0x84000000;
      }
      uVar7 = 0x4000000;
      if (iStack_104 != 0x20) {
        uVar7 = uVar10;
      }
      uVar10 = (uint)(iStack_104 == 0x40) << 0x1f;
      if ((int)local_100 != 0) {
        uVar10 = uVar7;
      }
      local_bc = 0xffffffff;
      local_b4 = 2;
      local_a8 = 0xffffffff00000002;
      local_a0 = 0xffffffff;
      local_b0 = (long)(iVar1 << 4);
      LoadStorePairMacro((TurboAssembler *)param_1,&stack0xfffffffffffffef8,local_118,&local_c8,
                         uVar10);
      Assembler::b((Assembler *)param_1,(Label *)&local_128);
      Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
      Assembler::bind(param_1);
      *(undefined8 *)(param_1 + 0x198) = uVar9;
      *(long *)(param_1 + 0x1a8) = lVar8;
      if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

