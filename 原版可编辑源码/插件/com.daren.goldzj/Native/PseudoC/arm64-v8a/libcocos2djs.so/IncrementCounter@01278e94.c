
/* v8::internal::MacroAssembler::IncrementCounter(v8::internal::StatsCounter*, int,
   v8::internal::Register, v8::internal::Register) */

void v8::internal::MacroAssembler::IncrementCounter
               (TurboAssembler *param_1,StatsCounterBase *param_2,int param_3,uint param_4,
               undefined8 param_5,ulong param_6,uint param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong local_118;
  undefined4 local_110;
  ulong local_108;
  undefined4 local_100;
  ulong local_f8;
  uint local_f0;
  ulong local_e8;
  uint local_e0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulong local_a0;
  uint local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_f8 = param_6;
  local_f0 = param_7;
  if (FLAG_native_code_counters != '\0') {
    if (param_2[0x18] == (StatsCounterBase)0x0) {
      param_2[0x18] = (StatsCounterBase)0x1;
      lVar3 = StatsCounterBase::FindLocationInStatsTable(param_2);
      *(long *)(param_2 + 0x10) = lVar3;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 != 0) {
      local_80 = ExternalReference::Create((StatsCounter *)param_2);
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_98 = local_98 & 0xffffff00;
      local_78 = CONCAT71(local_78._1_7_,7);
      local_70 = 0xffffffff;
      local_68 = 2;
      TurboAssembler::Mov(param_1,&local_f8,&local_a0,0);
      uVar1 = 0x200000003f;
      if (param_4 != 0x3f) {
        uVar1 = (ulong)param_4 | 0x2000000000;
      }
      local_e0 = 0;
      local_a0 = local_f8;
      local_8c = 2;
      local_98 = local_f0;
      local_94 = 0xffffffff;
      local_88 = 0;
      local_80 = -0x100000000;
      local_78 = 0xffffffff;
      local_e8 = uVar1;
      TurboAssembler::LoadStoreMacro(param_1,&local_e8,&local_a0,0x80400000);
      local_c8 = (long)param_3;
      local_100 = 0;
      local_110 = 0;
      local_e8 = local_e8 & 0xffffffffffffff00;
      local_e0 = local_e0 & 0xffffff00;
      local_b8 = 0xffffffff;
      local_c0 = 0x13;
      local_b0 = 2;
      local_118 = uVar1;
      local_108 = uVar1;
      if ((param_3 < 0) && (uVar4 = Assembler::IsImmAddSub(-local_c8), (uVar4 & 1) != 0)) {
        local_a0 = local_a0 & 0xffffffffffffff00;
        local_98 = local_98 & 0xffffff00;
        local_80 = -local_c8;
        local_70 = 0xffffffff;
        local_78 = CONCAT71(local_78._1_7_,0x13);
        local_68 = 2;
        puVar5 = &local_a0;
        uVar6 = 0x40000000;
      }
      else {
        puVar5 = &local_e8;
        uVar6 = 0;
      }
      TurboAssembler::AddSubMacro(param_1,&local_108,&local_118,puVar5,0,uVar6);
      local_e0 = 0;
      local_a0 = local_f8;
      local_8c = 2;
      local_98 = local_f0;
      local_94 = 0xffffffff;
      local_88 = 0;
      local_80 = 0xffffffff00000000;
      local_78 = 0xffffffff;
      local_e8 = uVar1;
      TurboAssembler::LoadStoreMacro(param_1,&local_e8,&local_a0,0x80000000);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

