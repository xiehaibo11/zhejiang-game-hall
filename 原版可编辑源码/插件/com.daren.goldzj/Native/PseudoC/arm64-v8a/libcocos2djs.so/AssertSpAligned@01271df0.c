
/* v8::internal::TurboAssembler::AssertSpAligned() */

void __thiscall v8::internal::TurboAssembler::AssertSpAligned(TurboAssembler *this)

{
  undefined8 *puVar1;
  TurboAssembler TVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  undefined1 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0xc0] != (TurboAssembler)0x0) {
    lVar5 = *(long *)(this + 0x198);
    TVar2 = this[0x18a];
    this[0x18a] = (TurboAssembler)0x1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar6 = *(undefined8 *)(this + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_a0 = 0x400000003f;
    if (uVar4 != 0x3f) {
      local_a0 = (ulong)uVar4 | 0x4000000000;
    }
    local_98 = 0;
    local_90 = local_90 & 0xffffffffffffff00;
    local_88 = 0;
    local_70 = 0;
    local_68 = 0x13;
    local_60 = 0x400000003f;
    uStack_50 = 0xffffffff;
    local_58 = 0;
    Mov(this,&local_a0,&local_90,0);
    local_70 = 0xf;
    local_60 = 0xffffffff;
    puVar1 = &DAT_019f4018;
    if (local_a0._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_90 = local_90 & 0xffffffffffffff00;
    local_88 = 0;
    local_68 = 0x13;
    local_58 = CONCAT44(local_58._4_4_,2);
    LogicalMacro(this,puVar1,&local_a0,&local_90,0x60000000);
    local_90 = 0;
    B(this,&local_90,0);
    Abort(this,0x2e);
    Assembler::bind((Label *)this);
    *(long *)(this + 0x198) = lVar5;
    *(undefined8 *)(this + 0x1a8) = uVar6;
    this[0x18a] = TVar2;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

