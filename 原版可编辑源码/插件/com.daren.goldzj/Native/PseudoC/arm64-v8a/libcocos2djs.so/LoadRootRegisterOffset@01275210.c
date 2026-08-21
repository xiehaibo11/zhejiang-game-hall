
/* v8::internal::TurboAssembler::LoadRootRegisterOffset(v8::internal::Register, long) */

void v8::internal::TurboAssembler::LoadRootRegisterOffset
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
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
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_e8 = param_2;
  local_e0 = param_3;
  if (param_4 == 0) {
    local_68 = 0x13;
    local_90[0] = 0;
    local_88 = 0;
    local_70 = 0;
    local_60 = 0x400000001a;
    uStack_50 = 0xffffffff;
    local_58 = 0;
    Mov(param_1,&local_e8,local_90);
    goto LAB_01275320;
  }
  local_d8[0] = 0;
  local_d0 = 0;
  local_b0 = 0x13;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  local_b8 = param_4;
  if (param_4 < 0) {
    uVar2 = Assembler::IsImmAddSub(-param_4);
    if ((uVar2 & 1) == 0) goto LAB_012752c0;
    local_90[0] = 0;
    local_88 = 0;
    local_60 = 0xffffffff;
    local_68 = 0x13;
    local_58 = CONCAT44(local_58._4_4_,2);
    puVar3 = local_90;
    uVar4 = 0x40000000;
    local_70 = -param_4;
  }
  else {
LAB_012752c0:
    puVar3 = local_d8;
    uVar4 = 0;
  }
  AddSubMacro(param_1,&local_e8,&DAT_019f4144,puVar3,0,uVar4);
LAB_01275320:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

