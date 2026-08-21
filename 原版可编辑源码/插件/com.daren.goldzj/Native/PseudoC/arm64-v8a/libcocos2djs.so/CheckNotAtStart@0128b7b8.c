
/* v8::internal::RegExpMacroAssemblerARM64::CheckNotAtStart(int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckNotAtStart
          (RegExpMacroAssemblerARM64 *this,int param_1,Label *param_2)

{
  RegExpMacroAssemblerARM64 *pRVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  TurboAssembler *pTVar7;
  long lVar8;
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
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pTVar7 = *(TurboAssembler **)(this + 0x28);
  local_f8 = 0x2000000015;
  local_f0 = 0;
  local_e8[0] = 0;
  iVar2 = *(int *)(this + 0x30) * param_1 - *(int *)(this + 0x30);
  local_c8 = (long)iVar2;
  local_e0 = 0;
  local_c0 = 0x13;
  local_b8 = 0xffffffff;
  local_b0 = 2;
  if (iVar2 < 0) {
    lVar8 = -local_c8;
    uVar4 = Assembler::IsImmAddSub(lVar8);
    if ((uVar4 & 1) != 0) {
      local_a0[0] = 0;
      local_98 = 0;
      local_70 = 0xffffffff;
      local_78 = 0x13;
      local_68 = CONCAT44(local_68._4_4_,2);
      puVar5 = local_a0;
      uVar6 = 0x40000000;
      local_80 = lVar8;
      goto LAB_0128b8a4;
    }
  }
  puVar5 = local_e8;
  uVar6 = 0;
LAB_0128b8a4:
  TurboAssembler::AddSubMacro(pTVar7,&DAT_019f7b6c,&local_f8,puVar5,0,uVar6);
  local_78 = 0x13;
  local_a0[0] = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0x2000000018;
  uStack_60 = 0xffffffff;
  local_68 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&DAT_019f7b6c,local_a0,1,0x40000000);
  pRVar1 = this + 0x54;
  if (param_2 != (Label *)0x0) {
    pRVar1 = (RegExpMacroAssemblerARM64 *)param_2;
  }
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar1,1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

