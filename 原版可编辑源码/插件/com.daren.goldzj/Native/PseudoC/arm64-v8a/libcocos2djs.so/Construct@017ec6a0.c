
/* v8::internal::wasm::LiftoffStackSlots::Construct() */

void __thiscall v8::internal::wasm::LiftoffStackSlots::Construct(LiftoffStackSlots *this)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  CPURegList **ppCVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  TurboAssembler *pTVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  ulong local_120;
  int local_118;
  CPURegList *local_110;
  CPURegList *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  CPURegList *local_c8;
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
  pcVar16 = *(char **)this;
  pcVar17 = *(char **)(this + 8);
  lVar11 = (long)pcVar17 - (long)pcVar16 >> 2;
  uVar6 = lVar11 * 0x6666666666666668 + 8;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  if (uVar7 == 0) goto LAB_017ec7a4;
  pTVar15 = *(TurboAssembler **)(this + 0xb8);
  local_110 = (CPURegList *)((ulong)local_110 & 0xffffffffffffff00);
  local_108 = (CPURegList *)((ulong)local_108 & 0xffffffffffffff00);
  local_e8 = 0x13;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  local_f0 = uVar7;
  if ((long)uVar6 < 0) {
    uVar6 = Assembler::IsImmAddSub(-uVar7);
    if ((uVar6 & 1) == 0) goto LAB_017ec780;
    local_c8 = (CPURegList *)((ulong)local_c8 & 0xffffffffffffff00);
    local_c0 = local_c0 & 0xffffff00;
    local_98 = 0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = 2;
    ppCVar8 = &local_c8;
    uVar9 = 0;
    local_a8 = -uVar7;
  }
  else {
LAB_017ec780:
    ppCVar8 = &local_110;
    uVar9 = 0x40000000;
  }
  TurboAssembler::AddSubMacro(pTVar15,&DAT_01a64268,&DAT_01a64268,ppCVar8,0,uVar9);
  pcVar16 = *(char **)this;
  pcVar17 = *(char **)(this + 8);
LAB_017ec7a4:
  if (pcVar16 != pcVar17) {
    uVar6 = 0;
    do {
      cVar2 = *pcVar16;
      lVar18 = (~uVar6 + lVar11 * -0x3333333333333333) * 8;
      if (cVar2 == '\x02') {
        if (*(int *)(pcVar16 + 4) == 0) {
          puVar1 = &DAT_01a64274;
          if (pcVar16[1] != '\x01') {
            puVar1 = &DAT_01a64280;
          }
          uVar10 = *(undefined4 *)(puVar1 + 1);
          pTVar15 = *(TurboAssembler **)(this + 0xb8);
          local_110 = (CPURegList *)*puVar1;
          goto LAB_017eca70;
        }
        lVar13 = *(long *)(this + 0xb8);
        local_110 = (CPURegList *)(lVar13 + 0x198);
        local_108 = (CPURegList *)(lVar13 + 0x1a8);
        local_100 = *(undefined8 *)(lVar13 + 0x198);
        uStack_f8 = *(undefined8 *)(lVar13 + 0x1a8);
        cVar2 = pcVar16[1];
        uVar5 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
        local_120 = 0x200000003f;
        if (uVar5 != 0x3f) {
          local_120 = (ulong)uVar5 | 0x2000000000;
        }
        uVar7 = 0x400000003f;
        if (uVar5 != 0x3f) {
          uVar7 = (ulong)uVar5 | 0x4000000000;
        }
        if (cVar2 != '\x01') {
          local_120 = uVar7;
        }
        local_118 = 0;
        TurboAssembler::Mov(*(TurboAssembler **)(this + 0xb8),(Register *)&local_120,
                            (long)*(int *)(pcVar16 + 4));
        local_c8 = (CPURegList *)((ulong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_c0 & 0xffffff00;
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        local_98 = 0xffffffff;
        local_a8 = lVar18;
        TurboAssembler::Poke
                  (*(TurboAssembler **)(this + 0xb8),(CPURegister *)&local_120,(Operand *)&local_c8)
        ;
        UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
        goto LAB_017ec82c;
      }
      if (cVar2 == '\x01') {
        if (3 < (byte)pcVar16[1] - 1) {
switchD_017ec8a0_default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pTVar15 = *(TurboAssembler **)(this + 0xb8);
        bVar3 = pcVar16[4];
        uVar5 = (uint)bVar3;
        switch((uint)(byte)pcVar16[1]) {
        case 1:
          uVar10 = 0;
          local_110 = (CPURegList *)0x200000003f;
          if (uVar5 != 0x3f) {
            local_110 = (CPURegList *)((ulong)bVar3 | 0x2000000000);
          }
          break;
        case 2:
          uVar10 = 0;
          local_110 = (CPURegList *)0x400000003f;
          if (uVar5 != 0x3f) {
            local_110 = (CPURegList *)((ulong)bVar3 | 0x4000000000);
          }
          break;
        case 3:
          uVar10 = 1;
          local_110 = (CPURegList *)((ulong)(uVar5 - 0x1d) | 0x2000000000);
          break;
        case 4:
          uVar10 = 1;
          local_110 = (CPURegList *)((ulong)(uVar5 - 0x1d) | 0x4000000000);
        }
LAB_017eca70:
        local_c0 = local_c0 & 0xffffff00;
        local_c8 = (CPURegList *)((ulong)local_c8 & 0xffffffffffffff00);
        local_108 = (CPURegList *)CONCAT44(local_108._4_4_,uVar10);
        local_a0 = CONCAT71(local_a0._1_7_,0x13);
        local_90 = 2;
        local_98 = 0xffffffff;
        local_a8 = lVar18;
        TurboAssembler::Poke(pTVar15,(CPURegister *)&local_110,(Operand *)&local_c8);
        goto LAB_017ec82c;
      }
      if (cVar2 != '\0') goto LAB_017ec82c;
      lVar13 = *(long *)(this + 0xb8);
      local_110 = (CPURegList *)(lVar13 + 0x198);
      local_108 = (CPURegList *)(lVar13 + 0x1a8);
      local_100 = *(undefined8 *)(lVar13 + 0x198);
      uStack_f8 = *(undefined8 *)(lVar13 + 0x1a8);
      switch(pcVar16[1]) {
      case '\x01':
        uVar5 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
        local_118 = 0;
        local_120 = 0x200000003f;
        if (uVar5 != 0x3f) {
          local_120 = (ulong)uVar5 | 0x2000000000;
        }
        break;
      case '\x02':
        uVar5 = UseScratchRegisterScope::AcquireNextAvailable(local_110);
        local_118 = 0;
        local_120 = 0x400000003f;
        if (uVar5 != 0x3f) {
          local_120 = (ulong)uVar5 | 0x4000000000;
        }
        break;
      case '\x03':
        uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_108);
        uVar14 = 0x2000000000;
        goto LAB_017eca9c;
      case '\x04':
        uVar7 = UseScratchRegisterScope::AcquireNextAvailable(local_108);
        uVar14 = 0x4000000000;
LAB_017eca9c:
        local_118 = 1;
        local_120 = uVar14 | uVar7 & 0xffffffff;
        break;
      default:
        goto switchD_017ec8a0_default;
      }
      local_c8 = (CPURegList *)0x400000001d;
      local_c0 = 0;
      local_b4 = 2;
      local_bc = 0xffffffff;
      local_b0 = (long)(-0x10 - *(int *)(pcVar16 + 0xc));
      local_a8 = 0xffffffff00000000;
      local_a0 = 0xffffffff;
      iVar12 = (int)(local_120 >> 0x20);
      if (local_118 == 0) {
        uVar10 = 0xc0400000;
        if (iVar12 != 0x40) {
          uVar10 = 0x80400000;
        }
      }
      else {
        uVar5 = iVar12 - 8U >> 3;
        if (uVar5 < 8) {
          uVar10 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar5 * 4);
        }
        else {
          uVar10 = 0x4c00000;
        }
      }
      TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0xb8),&local_120,&local_c8,uVar10);
      local_c8 = (CPURegList *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      local_98 = 0xffffffff;
      local_a8 = lVar18;
      TurboAssembler::Poke
                (*(TurboAssembler **)(this + 0xb8),(CPURegister *)&local_120,(Operand *)&local_c8);
      UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
LAB_017ec82c:
      pcVar16 = pcVar16 + 0x14;
      uVar6 = uVar6 + 1;
    } while (pcVar17 != pcVar16);
  }
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

