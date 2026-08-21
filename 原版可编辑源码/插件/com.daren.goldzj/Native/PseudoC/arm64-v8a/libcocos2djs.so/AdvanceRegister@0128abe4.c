
/* v8::internal::RegExpMacroAssemblerARM64::AdvanceRegister(int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::AdvanceRegister
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  TurboAssembler *pTVar7;
  long lVar8;
  ulong local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  long local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) goto LAB_0128aed4;
  iVar6 = 1;
  if ((param_1 & 1U) != 0) {
    iVar6 = 2;
  }
  iVar1 = 0;
  if (param_1 < 0x10) {
    iVar1 = iVar6;
  }
  if (iVar1 == 2) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_108 = (ulong)(uint)(param_1 >> 1) | 0x4000000000;
    local_100 = 0;
    local_d8 = (ulong)(uint)param_2 << 0x20;
    pTVar7 = *(TurboAssembler **)(this + 0x28);
    local_d0 = 0x13;
    local_f8[0] = 0;
    local_f0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 2;
    if (-1 < param_2) goto LAB_0128ae48;
    lVar8 = -local_d8;
    uVar3 = Assembler::IsImmAddSub(lVar8);
    if ((uVar3 & 1) == 0) goto LAB_0128ae48;
    local_90 = lVar8;
LAB_0128ae2c:
    local_78 = 2;
    local_80 = 0xffffffff;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    local_a8 = local_a8 & 0xffffff00;
    local_b0 = local_b0 & 0xffffffffffffff00;
    puVar4 = &local_b0;
    uVar5 = 0x40000000;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (*(int *)(this + 0x34) <= param_1) {
        *(int *)(this + 0x34) = param_1 + 1;
      }
      lVar8 = (long)(param_1 * -4 + 0xc);
      local_a8 = 0;
      local_b0 = 0x400000001d;
      local_a4 = 0xffffffff;
      local_9c = 2;
      local_90 = -0x100000000;
      local_88 = 0xffffffff;
      local_98 = lVar8;
      TurboAssembler::LoadStoreMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0x80400000);
      pTVar7 = *(TurboAssembler **)(this + 0x28);
      local_d8 = (long)param_2;
      local_f8[0] = 0;
      local_f0 = 0;
      local_d0 = 0x13;
      local_c8 = 0xffffffff;
      local_c0 = 2;
      if ((param_2 < 0) && (uVar3 = Assembler::IsImmAddSub(-local_d8), (uVar3 & 1) != 0)) {
        local_90 = -local_d8;
        local_b0 = local_b0 & 0xffffffffffffff00;
        local_a8 = local_a8 & 0xffffff00;
        local_80 = 0xffffffff;
        local_88 = CONCAT71(local_88._1_7_,0x13);
        local_78 = 2;
        puVar4 = &local_b0;
        uVar5 = 0x40000000;
      }
      else {
        puVar4 = (ulong *)local_f8;
        uVar5 = 0;
      }
      TurboAssembler::AddSubMacro(pTVar7,&DAT_019f7b6c,&DAT_019f7b6c,puVar4,0,uVar5);
      if (*(int *)(this + 0x34) <= param_1) {
        *(int *)(this + 0x34) = param_1 + 1;
      }
      local_b0 = 0x400000001d;
      local_a8 = 0;
      local_a4 = 0xffffffff;
      local_9c = 2;
      local_90 = -0x100000000;
      local_88 = 0xffffffff;
      local_98 = lVar8;
      TurboAssembler::LoadStoreMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0x80000000);
      goto LAB_0128aed4;
    }
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_108 = (ulong)(uint)(param_1 >> 1) | 0x4000000000;
    local_100 = 0;
    pTVar7 = *(TurboAssembler **)(this + 0x28);
    local_d0 = 0x13;
    local_d8 = (long)param_2;
    local_f8[0] = 0;
    local_f0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 2;
    if (param_2 < 0) {
      lVar8 = -local_d8;
      uVar3 = Assembler::IsImmAddSub(lVar8);
      if ((uVar3 & 1) != 0) {
        local_90 = lVar8;
        goto LAB_0128ae2c;
      }
    }
LAB_0128ae48:
    puVar4 = (ulong *)local_f8;
    uVar5 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar7,&local_108,&local_108,puVar4,0,uVar5);
LAB_0128aed4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

