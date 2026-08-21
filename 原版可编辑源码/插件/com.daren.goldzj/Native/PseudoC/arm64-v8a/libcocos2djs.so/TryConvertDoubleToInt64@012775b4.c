
/* v8::internal::TurboAssembler::TryConvertDoubleToInt64(v8::internal::Register,
   v8::internal::VRegister, v8::internal::Label*) */

void v8::internal::TurboAssembler::TryConvertDoubleToInt64
               (Assembler *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  uint local_98;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = 0x400000003f;
  if (param_2 != 0x3f) {
    uVar1 = (ulong)param_2 | 0x4000000000;
  }
  local_98 = 0;
  local_b0 = param_4;
  uStack_a8 = param_5;
  local_a0 = uVar1;
  Assembler::fcvtzs(param_1,(Register *)&local_a0,(VRegister *)&local_b0,0);
  local_b8 = 0;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_98 = local_98 & 0xffffff00;
  local_80 = 1;
  local_78 = 0x13;
  local_70 = 0xffffffff;
  local_68 = 2;
  local_c0 = uVar1;
  AddSubMacro((TurboAssembler *)param_1,&DAT_019f4018,&local_c0,&local_a0,1,0x40000000);
  local_b8 = 0;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_98 = local_98 & 0xffffff00;
  local_80 = 1;
  local_78 = 0x13;
  local_70 = 0xffffffff;
  local_68 = 2;
  local_c0 = uVar1;
  ConditionalCompareMacro((TurboAssembler *)param_1,&local_c0,&local_a0,0x10000000,7,0x20000000);
  B((TurboAssembler *)param_1,param_6,7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

