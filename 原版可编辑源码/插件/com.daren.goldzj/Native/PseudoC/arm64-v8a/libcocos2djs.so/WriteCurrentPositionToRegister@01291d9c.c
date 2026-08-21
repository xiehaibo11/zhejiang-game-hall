
/* v8::internal::RegExpMacroAssemblerARM64::WriteCurrentPositionToRegister(int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::WriteCurrentPositionToRegister
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  TurboAssembler *pTVar5;
  long lVar6;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a0 [8];
  undefined1 local_98;
  long local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_f8 = 0x2000000015;
  local_f0 = 0;
  if (param_2 == 0) goto LAB_01291eb8;
  local_f8 = 0x200000000a;
  local_f0 = 0;
  pTVar5 = *(TurboAssembler **)(this + 0x28);
  local_108 = 0x2000000015;
  local_100 = 0;
  local_c0 = 0x13;
  local_c8 = (long)*(int *)(this + 0x30) * (long)param_2;
  local_e8[0] = 0;
  local_e0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 2;
  if ((int)local_c8 < 0) {
    lVar6 = -local_c8;
    uVar2 = Assembler::IsImmAddSub(lVar6);
    if ((uVar2 & 1) == 0) goto LAB_01291e8c;
    local_a0[0] = 0;
    local_98 = 0;
    local_70 = 0xffffffff;
    local_78 = 0x13;
    local_68 = 2;
    puVar3 = local_a0;
    uVar4 = 0x40000000;
    local_80 = lVar6;
  }
  else {
LAB_01291e8c:
    puVar3 = local_e8;
    uVar4 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar5,&local_f8,&local_108,puVar3,0,uVar4);
LAB_01291eb8:
  StoreRegister(this,param_1,local_f8,local_f0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

