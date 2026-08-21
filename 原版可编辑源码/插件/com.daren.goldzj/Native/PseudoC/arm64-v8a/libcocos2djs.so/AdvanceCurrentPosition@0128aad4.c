
/* v8::internal::RegExpMacroAssemblerARM64::AdvanceCurrentPosition(int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::AdvanceCurrentPosition
          (RegExpMacroAssemblerARM64 *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  TurboAssembler *pTVar5;
  long lVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  long local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_90 [8];
  undefined1 local_88;
  long local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_0128abb8;
  pTVar5 = *(TurboAssembler **)(this + 0x28);
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = 0x2000000015;
  local_f8 = 0x2000000015;
  local_b0 = 0x13;
  local_b8 = (long)*(int *)(this + 0x30) * (long)param_1;
  local_d8[0] = 0;
  local_d0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  if ((int)local_b8 < 0) {
    lVar6 = -local_b8;
    uVar2 = Assembler::IsImmAddSub(lVar6);
    if ((uVar2 & 1) == 0) goto LAB_0128ab9c;
    local_90[0] = 0;
    local_88 = 0;
    local_60 = 0xffffffff;
    local_68 = 0x13;
    local_58 = 2;
    puVar3 = local_90;
    uVar4 = 0x40000000;
    local_70 = lVar6;
  }
  else {
LAB_0128ab9c:
    puVar3 = local_d8;
    uVar4 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar5,&local_e8,&local_f8,puVar3,0,uVar4);
LAB_0128abb8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

