
void FUN_0127ea30(TurboAssembler *param_1,ulong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [12];
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 local_160 [12];
  ulong local_150;
  uint local_148;
  ulong local_140;
  undefined8 uStack_138;
  TurboAssembler *local_130;
  TurboAssembler *pTStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [2] [12];
  long local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_130 = param_1 + 0x198;
  pTStack_128 = param_1 + 0x1a8;
  local_120 = *(undefined8 *)(param_1 + 0x198);
  local_118 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_138 = param_2[1];
  local_140 = *param_2;
  iVar1 = (int)uStack_138 + 7;
  if (-1 < (int)uStack_138) {
    iVar1 = (int)uStack_138;
  }
  uVar5 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_130);
  local_e8 = 0x13;
  local_150 = 0x400000003f;
  if (uVar5 != 0x3f) {
    local_150 = (ulong)uVar5 | 0x4000000000;
  }
  local_f0 = (long)param_4;
  local_148 = 0;
  local_110[0]._0_8_ = local_110[0]._0_8_ & 0xffffffffffffff00;
  local_110[0]._8_4_ = local_110[0]._8_4_ & 0xffffff00;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  if (param_4 < 0) {
    lVar11 = -local_f0;
    uVar6 = v8::internal::Assembler::IsImmAddSub(lVar11);
    if ((uVar6 & 1) != 0) {
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_c0 = local_c0 & 0xffffff00;
      local_98 = 0xffffffff;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      pauVar7 = (undefined1 (*) [12])&local_c8;
      uVar8 = 0x40000000;
      local_a8 = lVar11;
      goto LAB_0127eb5c;
    }
  }
  pauVar7 = local_110;
  uVar8 = 0;
LAB_0127eb5c:
  v8::internal::TurboAssembler::AddSubMacro(param_1,&local_150,param_3,pauVar7,0,uVar8);
  if (uStack_138._4_4_ == 0) {
    local_140 = local_140 & 0xffffffff7fffffff;
  }
  if (local_140 != 0) {
    iVar1 = iVar1 >> 3;
    do {
      while( true ) {
        auVar12 = v8::internal::CPURegList::PopLowestIndex((CPURegList *)&local_140);
        local_110[0] = auVar12;
        auVar12 = v8::internal::CPURegList::PopLowestIndex((CPURegList *)&local_140);
        local_b0 = (long)(int)local_110[0]._0_4_ * (long)iVar1;
        local_160 = auVar12;
        if (((auVar12._0_4_ == -1) && (auVar12._8_4_ == 2)) && (auVar12._0_8_ >> 0x20 == 0)) {
          local_bc = 0xffffffff;
          local_b4 = 2;
          local_c8 = local_150;
          local_c0 = local_148;
          local_a8 = -0x100000000;
          local_a0 = 0xffffffff;
          if (local_110[0]._8_4_ == 0) {
            uVar10 = 0xc0400000;
            if (local_110[0]._4_4_ != 0x40) {
              uVar10 = 0x80400000;
            }
          }
          else {
            uVar5 = local_110[0]._4_4_ - 8 >> 3 | local_110[0]._4_4_ << 0x1d;
            if (uVar5 < 8) {
              uVar10 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar5 * 4);
            }
            else {
              uVar10 = 0x4c00000;
            }
          }
          v8::internal::TurboAssembler::LoadStoreMacro(param_1,local_110,&local_c8,uVar10);
          goto LAB_0127edc4;
        }
        iVar3 = iVar1 * auVar12._0_4_;
        iVar9 = (int)local_b0;
        if (iVar3 == iVar9 + iVar1) break;
        local_b0 = (long)iVar9;
        local_c8 = local_150;
        local_c0 = local_148;
        local_b4 = 2;
        local_bc = 0xffffffff;
        local_a8 = 0xffffffff00000000;
        local_a0 = 0xffffffff;
        if (local_110[0]._8_4_ == 0) {
          uVar10 = 0xc0400000;
          if (local_110[0]._4_4_ != 0x40) {
            uVar10 = 0x80400000;
          }
        }
        else {
          uVar5 = local_110[0]._4_4_ - 8 >> 3 | local_110[0]._4_4_ << 0x1d;
          if (uVar5 < 8) {
            uVar10 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar5 * 4);
          }
          else {
            uVar10 = 0x4c00000;
          }
        }
        v8::internal::TurboAssembler::LoadStoreMacro(param_1,local_110,&local_c8,uVar10);
        local_b0 = (long)iVar3;
        local_c8 = local_150;
        local_c0 = local_148;
        local_b4 = 2;
        local_bc = 0xffffffff;
        local_a8 = -0x100000000;
        local_a0 = 0xffffffff;
        if (local_160._8_4_ == 0) {
          uVar10 = 0xc0400000;
          if (local_160._4_4_ != 0x40) {
            uVar10 = 0x80400000;
          }
        }
        else {
          uVar5 = local_160._4_4_ - 8 >> 3 | local_160._4_4_ << 0x1d;
          if (uVar5 < 8) {
            uVar10 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar5 * 4);
          }
          else {
            uVar10 = 0x4c00000;
          }
        }
        v8::internal::TurboAssembler::LoadStoreMacro(param_1,local_160,&local_c8,uVar10);
        if (local_140 == 0) goto LAB_0127edc4;
      }
      local_b0 = (long)iVar9;
      local_c8 = local_150;
      local_c0 = local_148;
      local_b4 = 2;
      local_bc = 0xffffffff;
      uVar5 = 0x44000000;
      if (local_110[0]._4_4_ != 0x40) {
        uVar5 = 0x84000000;
      }
      uVar2 = 0x4000000;
      if (local_110[0]._4_4_ != 0x20) {
        uVar2 = uVar5;
      }
      uVar5 = (uint)(local_110[0]._4_4_ == 0x40) << 0x1f;
      if (local_110[0]._8_4_ != 0) {
        uVar5 = uVar2;
      }
      local_a8 = -0x100000000;
      local_a0 = 0xffffffff;
      v8::internal::TurboAssembler::LoadStorePairMacro
                (param_1,local_110,local_160,&local_c8,uVar5 | 0x400000);
    } while (local_140 != 0);
  }
LAB_0127edc4:
  v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
            ((UseScratchRegisterScope *)&local_130);
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

