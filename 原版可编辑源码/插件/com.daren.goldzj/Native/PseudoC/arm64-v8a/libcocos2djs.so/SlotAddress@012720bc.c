
/* v8::internal::TurboAssembler::SlotAddress(v8::internal::Register, int) */

void v8::internal::TurboAssembler::SlotAddress
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  local_b8 = (long)(param_4 << 3);
  local_b0 = 0x13;
  local_d8[0] = 0;
  local_d0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  local_e8 = param_2;
  local_e0 = param_3;
  if (param_4 << 3 < 0) {
    lVar5 = -local_b8;
    uVar2 = Assembler::IsImmAddSub(lVar5);
    if ((uVar2 & 1) != 0) {
      local_90[0] = 0;
      local_88 = 0;
      local_60 = 0xffffffff;
      local_68 = 0x13;
      local_58 = 2;
      puVar3 = local_90;
      uVar4 = 0x40000000;
      local_70 = lVar5;
      goto LAB_0127218c;
    }
  }
  puVar3 = local_d8;
  uVar4 = 0;
LAB_0127218c:
  AddSubMacro(param_1,&local_e8,&DAT_019f3ff4,puVar3,0,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

