
/* v8::internal::TurboAssembler::Swap(v8::internal::Register, v8::internal::Register) */

void v8::internal::TurboAssembler::Swap
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  undefined8 local_90;
  undefined1 local_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x198);
  local_d0 = param_4;
  local_c8 = param_5;
  local_c0 = param_2;
  local_b8 = param_3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  uVar2 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
  local_e0 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_e0 = (ulong)uVar2 | 0x4000000000;
  }
  local_d8 = 0;
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0x13;
  local_74 = 0xffffffff00000000;
  local_6c = 0;
  local_80 = param_4;
  local_78 = param_5;
  Mov(param_1,&local_e0,local_b0,0);
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0x13;
  local_74 = 0xffffffff00000000;
  local_6c = 0;
  local_80 = param_2;
  local_78 = param_3;
  Mov(param_1,&local_d0,local_b0,0);
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0x13;
  local_74 = 0xffffffff00000000;
  local_80 = local_e0;
  local_78 = local_d8;
  local_6c = 0;
  Mov(param_1,&local_c0,local_b0,0);
  *(long *)(param_1 + 0x198) = lVar3;
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

