
/* v8::internal::RegExpMacroAssemblerARM64::SetCurrentPositionFromEnd(int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::SetCurrentPositionFromEnd
          (RegExpMacroAssemblerARM64 *this,int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  TurboAssembler *pTVar6;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulong local_a0;
  uint local_98;
  long local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_f0 = 0;
  pTVar6 = *(TurboAssembler **)(this + 0x28);
  local_100 = 0x2000000015;
  local_f8 = 0;
  lVar1 = (long)param_1 * (long)*(int *)(this + 0x30);
  local_c8 = -lVar1;
  local_c0 = 0x13;
  local_e8[0] = 0;
  local_e0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 2;
  if (((int)local_c8 < 0) && (uVar3 = Assembler::IsImmAddSub(lVar1), (uVar3 & 1) != 0)) {
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = local_98 & 0xffffff00;
    local_70 = 0xffffffff;
    local_78 = 0x13;
    local_68 = 2;
    puVar4 = &local_a0;
    uVar5 = 0;
    local_80 = lVar1;
  }
  else {
    puVar4 = (ulong *)local_e8;
    uVar5 = 0x40000000;
  }
  TurboAssembler::AddSubMacro(pTVar6,&DAT_019f7c68,&local_100,puVar4,1,uVar5);
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_f0,10);
  local_a0 = 0x2000000015;
  local_98 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&local_a0,
                      (long)*(int *)(this + 0x30) * (long)-param_1);
  LoadCurrentCharacterUnchecked(this,-1,1);
  Assembler::bind(*(Label **)(this + 0x28));
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

