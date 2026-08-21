
/* v8::internal::TurboAssembler::Jump(v8::internal::ExternalReference const&) */

void __thiscall v8::internal::TurboAssembler::Jump(TurboAssembler *this,ExternalReference *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x198);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar4 = *(undefined8 *)(this + 0x1a8);
  uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
  local_a8 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_a8 = (ulong)uVar2 | 0x4000000000;
  }
  local_a0 = 0;
  local_70 = *(undefined8 *)param_1;
  local_68 = 7;
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_60 = 0xffffffff;
  local_58 = 2;
  Mov(this,&local_a8,&local_90,0);
  local_98 = 0;
  local_90 = local_a8;
  local_88 = local_a0;
  Assembler::br((Assembler *)this,(Register *)&local_90);
  Assembler::bind((Label *)this);
  *(long *)(this + 0x198) = lVar3;
  *(undefined8 *)(this + 0x1a8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

