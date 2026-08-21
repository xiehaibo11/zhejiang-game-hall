
/* v8::internal::RegExpMacroAssemblerARM64::capture_location(int, v8::internal::Register) */

void v8::internal::RegExpMacroAssemblerARM64::capture_location
               (undefined8 *param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  TurboAssembler *pTVar7;
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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = param_3 * -4 + 8;
  lVar6 = (long)iVar1;
  local_e8 = param_4;
  local_e0 = param_5;
  if (lVar6 + 0x40U < 0x80) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0x400000001d;
    *(undefined4 *)((long)param_1 + 0x14) = 2;
    *(undefined8 *)((long)param_1 + 0xc) = 0xffffffff;
    goto LAB_0128cbb4;
  }
  pTVar7 = *(TurboAssembler **)(param_2 + 0x28);
  local_f0 = 0;
  local_d8[0] = 0;
  local_d0 = 0;
  local_f8 = 0x400000001d;
  local_b0 = 0x13;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  local_b8 = lVar6;
  if (iVar1 < 0) {
    uVar3 = Assembler::IsImmAddSub(-lVar6);
    if ((uVar3 & 1) == 0) goto LAB_0128cb7c;
    local_90[0] = 0;
    local_88 = 0;
    local_60 = 0xffffffff;
    local_68 = 0x13;
    local_58 = 2;
    puVar4 = local_90;
    uVar5 = 0x40000000;
    local_70 = -lVar6;
  }
  else {
LAB_0128cb7c:
    puVar4 = local_d8;
    uVar5 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar7,&local_e8,&local_f8,puVar4,0,uVar5);
  lVar6 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 2;
  *param_1 = local_e8;
  *(undefined4 *)(param_1 + 1) = local_e0;
  *(undefined8 *)((long)param_1 + 0xc) = 0xffffffff;
LAB_0128cbb4:
  param_1[3] = lVar6;
  param_1[4] = 0xffffffff00000000;
  param_1[5] = 0xffffffff;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

