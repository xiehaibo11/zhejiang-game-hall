
/* v8::internal::RegExpMacroAssemblerARM64::CheckPosition(int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckPosition
          (RegExpMacroAssemblerARM64 *this,int param_1,Label *param_2)

{
  RegExpMacroAssemblerARM64 *pRVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  TurboAssembler *pTVar6;
  long lVar7;
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
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (-1 < param_1) {
    CompareAndBranchOrBacktrack(this,0x2000000015,0,-(*(int *)(this + 0x30) * param_1),10,param_2);
    goto LAB_012925c0;
  }
  pTVar6 = *(TurboAssembler **)(this + 0x28);
  local_f0 = 0;
  local_f8 = 0x2000000015;
  local_c0 = 0x13;
  local_c8 = (long)*(int *)(this + 0x30) * (long)param_1;
  local_e8[0] = 0;
  local_e0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 2;
  if ((int)local_c8 < 0) {
    lVar7 = -local_c8;
    uVar3 = Assembler::IsImmAddSub(lVar7);
    if ((uVar3 & 1) == 0) goto LAB_0129253c;
    local_a0[0] = 0;
    local_98 = 0;
    local_70 = 0xffffffff;
    local_78 = 0x13;
    local_68 = CONCAT44(local_68._4_4_,2);
    puVar4 = local_a0;
    uVar5 = 0x40000000;
    local_80 = lVar7;
  }
  else {
LAB_0129253c:
    puVar4 = local_e8;
    uVar5 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar6,&DAT_019f7bb4,&local_f8,puVar4,0,uVar5);
  local_78 = 0x13;
  local_a0[0] = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0x2000000018;
  uStack_60 = 0xffffffff;
  local_68 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&DAT_019f7bb4,local_a0,1,0x40000000);
  pRVar1 = this + 0x54;
  if (param_2 != (Label *)0x0) {
    pRVar1 = (RegExpMacroAssemblerARM64 *)param_2;
  }
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar1,0xd);
LAB_012925c0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

