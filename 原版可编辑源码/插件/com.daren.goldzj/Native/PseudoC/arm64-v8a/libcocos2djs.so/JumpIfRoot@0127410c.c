
/* v8::internal::MacroAssembler::JumpIfRoot(v8::internal::Register const&, v8::internal::RootIndex,
   v8::internal::Label*) */

void __thiscall
v8::internal::MacroAssembler::JumpIfRoot
          (MacroAssembler *this,Register *param_1,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  Operand local_a0 [8];
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x198);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar4 = *(undefined8 *)(this + 0x1a8);
  uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
  local_70 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_70 = (ulong)uVar2 | 0x4000000000;
  }
  (**(code **)(*(long *)this + 0x58))(this,local_70,0,param_3);
  local_a0[0] = (Operand)0x0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0x13;
  uStack_60 = 0xffffffff;
  local_68 = 0;
  TurboAssembler::CmpTagged((TurboAssembler *)this,param_1,local_a0);
  *(long *)(this + 0x198) = lVar3;
  *(undefined8 *)(this + 0x1a8) = uVar4;
  TurboAssembler::B((TurboAssembler *)this,param_4,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

