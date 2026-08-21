
/* v8::internal::MacroAssembler::AssertRegisterIsRoot(v8::internal::Register,
   v8::internal::RootIndex, v8::internal::AbortReason) */

void v8::internal::MacroAssembler::AssertRegisterIsRoot
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_b0 = param_2;
  local_a8 = param_3;
  if (param_1[0xc0] != (TurboAssembler)0x0) {
    lVar3 = *(long *)(param_1 + 0x198);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    uVar2 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    local_70 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_70 = (ulong)uVar2 | 0x4000000000;
    }
    (**(code **)(*(long *)param_1 + 0x58))(param_1,local_70,0,param_4);
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0x13;
    uStack_60 = 0xffffffff;
    local_68 = 0;
    TurboAssembler::CmpTagged(param_1,(Register *)&local_b0,(Operand *)&local_a0);
    *(long *)(param_1 + 0x198) = lVar3;
    *(undefined8 *)(param_1 + 0x1a8) = uVar4;
    local_a0 = 0;
    TurboAssembler::B(param_1,&local_a0,0);
    TurboAssembler::Abort(param_1,param_5);
    Assembler::bind((Label *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

