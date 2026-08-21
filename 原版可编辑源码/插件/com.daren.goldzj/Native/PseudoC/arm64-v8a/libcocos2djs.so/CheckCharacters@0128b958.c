
/* v8::internal::RegExpMacroAssemblerARM64::CheckCharacters(v8::internal::Vector<unsigned short
   const>, int, v8::internal::Label*, bool) */

void v8::internal::RegExpMacroAssemblerARM64::CheckCharacters
               (long *param_1,undefined2 *param_2,uint param_3,int param_4,undefined8 param_5,
               ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  TurboAssembler *pTVar5;
  ulong local_120;
  uint local_118;
  ulong local_110;
  uint local_108;
  long local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if ((param_6 & 1) != 0) {
    (**(code **)(*param_1 + 0xc0))(param_1,param_4 + param_3 + -1,param_5);
  }
  local_120 = 0x400000000b;
  local_118 = 0;
  local_110 = 0x4000000019;
  local_108 = 0;
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = 0x13;
  local_98 = 0x2000000015;
  uStack_88 = 6;
  local_90 = 0xffffffff00000000;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1[5],&local_120,&local_110,&local_c8,0,0);
  if (param_4 != 0) {
    pTVar5 = (TurboAssembler *)param_1[5];
    local_e8 = 0x13;
    local_f0 = (long)(int)param_1[6] * (long)param_4;
    local_110 = local_110 & 0xffffffffffffff00;
    local_108 = local_108 & 0xffffff00;
    local_e0 = 0xffffffff;
    local_d8 = 2;
    if (((int)local_f0 < 0) && (uVar2 = Assembler::IsImmAddSub(-local_f0), (uVar2 & 1) != 0)) {
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_c0 = local_c0 & 0xffffff00;
      local_a8 = -local_f0;
      local_98 = 0xffffffff;
      local_a0 = 0x13;
      local_90 = CONCAT44(local_90._4_4_,2);
      puVar3 = &local_c8;
      uVar4 = 0x40000000;
    }
    else {
      puVar3 = &local_110;
      uVar4 = 0;
    }
    TurboAssembler::AddSubMacro(pTVar5,&local_120,&local_120,puVar3,0,uVar4);
  }
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      if ((int)param_1[6] == 1) {
        local_b0 = 1;
        uVar4 = 0x400000;
      }
      else {
        uVar4 = 0x40400000;
        local_b0 = 2;
      }
      local_a8 = -0xfffffffe;
      local_b4 = 2;
      local_bc = 0xffffffff;
      local_c0 = local_118;
      local_c8 = local_120;
      uStack_9f = 0xffffff;
      local_a0 = 0xff;
      TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1[5],&DAT_019f7b6c,&local_c8,uVar4);
      CompareAndBranchOrBacktrack(param_1,0x200000000a,0,*param_2,1,param_5);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

