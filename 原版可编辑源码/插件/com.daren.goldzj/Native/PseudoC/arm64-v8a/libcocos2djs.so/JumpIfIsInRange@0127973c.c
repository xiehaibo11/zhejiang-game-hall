
/* v8::internal::MacroAssembler::JumpIfIsInRange(v8::internal::Register const&, unsigned int,
   unsigned int, v8::internal::Label*) */

void __thiscall
v8::internal::MacroAssembler::JumpIfIsInRange
          (MacroAssembler *this,Register *param_1,uint param_2,uint param_3,Label *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  ulong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  local_90 = (ulong)param_3;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    local_b0[0] = 0;
    local_a8 = 0;
    local_88 = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::CompareAndBranch((TurboAssembler *)this,param_1,local_b0,9,param_4);
  }
  else {
    lVar4 = *(long *)(this + 0x198);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar3 = *(undefined8 *)(this + 0x1a8);
    uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_90 = (ulong)param_2;
    local_c0 = 0x200000003f;
    if (uVar2 != 0x3f) {
      local_c0 = (ulong)uVar2 | 0x2000000000;
    }
    local_b8 = 0;
    local_b0[0] = 0;
    local_a8 = 0;
    local_88 = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro((TurboAssembler *)this,&local_c0,param_1,local_b0,0,0x40000000);
    local_90 = (ulong)(param_3 - param_2);
    local_b0[0] = 0;
    local_a8 = 0;
    local_88 = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::CompareAndBranch((TurboAssembler *)this,&local_c0,local_b0,9,param_4);
    *(long *)(this + 0x198) = lVar4;
    *(undefined8 *)(this + 0x1a8) = uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

