
/* v8::internal::RegExpMacroAssemblerARM64::CompareAndBranchOrBacktrack(v8::internal::Register, int,
   v8::internal::Condition, v8::internal::Label*) */

void v8::internal::RegExpMacroAssemblerARM64::CompareAndBranchOrBacktrack
               (long *param_1,ulong param_2,undefined4 param_3,int param_4,uint param_5,
               Label *param_6)

{
  undefined8 *puVar1;
  Label *pLVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  Assembler *this;
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
  undefined1 local_b0 [8];
  undefined1 local_a8;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_108 = param_2;
  local_100 = param_3;
  if ((param_4 == 0) && (param_5 < 2)) {
    pLVar2 = (Label *)((long)param_1 + 0x54);
    if (param_6 != (Label *)0x0) {
      pLVar2 = param_6;
    }
    if (param_5 == 0) {
      TurboAssembler::Cbz((TurboAssembler *)param_1[5],(Register *)&local_108,pLVar2);
    }
    else {
      TurboAssembler::Cbnz((TurboAssembler *)param_1[5],(Register *)&local_108,pLVar2);
    }
    goto LAB_0128b564;
  }
  pTVar7 = (TurboAssembler *)param_1[5];
  local_d8 = (long)param_4;
  puVar1 = (undefined8 *)&DAT_019f7b78;
  if (param_2 >> 0x20 != 0x40) {
    puVar1 = &DAT_019f7c68;
  }
  local_f8[0] = 0;
  local_f0 = 0;
  local_d0 = 0x13;
  local_c8 = 0xffffffff;
  local_c0 = 2;
  if (param_4 < 0) {
    lVar8 = -local_d8;
    uVar4 = Assembler::IsImmAddSub(lVar8);
    if ((uVar4 & 1) == 0) goto LAB_0128b4e0;
    local_b0[0] = 0;
    local_a8 = 0;
    local_80 = 0xffffffff;
    local_88 = 0x13;
    local_78 = 2;
    puVar5 = local_b0;
    uVar6 = 0;
    local_90 = lVar8;
  }
  else {
LAB_0128b4e0:
    puVar5 = local_f8;
    uVar6 = 0x40000000;
  }
  TurboAssembler::AddSubMacro(pTVar7,puVar1,&local_108,puVar5,1,uVar6);
  if (param_5 == 0xe) {
    if (param_6 == (Label *)0x0) {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    else {
      this = (Assembler *)param_1[5];
      Assembler::b(this,param_6);
      Assembler::CheckVeneerPool(this,false,false,0x400);
    }
  }
  else {
    pLVar2 = (Label *)((long)param_1 + 0x54);
    if (param_6 != (Label *)0x0) {
      pLVar2 = param_6;
    }
    TurboAssembler::B((TurboAssembler *)param_1[5],pLVar2,param_5);
  }
LAB_0128b564:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

