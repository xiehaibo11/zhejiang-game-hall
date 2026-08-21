
/* v8::internal::TurboAssembler::Call(v8::internal::ExternalReference) */

void __thiscall v8::internal::TurboAssembler::Call(TurboAssembler *this,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined4 local_98;
  Assembler *local_90;
  BlockScope local_88 [24];
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
  local_68 = 7;
  local_b0 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_b0 = (ulong)uVar2 | 0x4000000000;
  }
  local_a8 = 0;
  local_90 = (Assembler *)((ulong)local_90 & 0xffffffffffffff00);
  local_88[0] = (BlockScope)0x0;
  local_60 = 0xffffffff;
  local_58 = 2;
  local_70 = param_2;
  Mov(this,&local_b0,&local_90,0);
  local_a0 = local_b0;
  local_98 = local_a8;
  local_90 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(local_88,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_90,false,true,0);
  Assembler::StartBlockVeneerPool(local_90);
  Assembler::blr((Assembler *)this,(Register *)&local_a0);
  Assembler::EndBlockVeneerPool(local_90);
  ConstantPool::BlockScope::~BlockScope(local_88);
  *(long *)(this + 0x198) = lVar3;
  *(undefined8 *)(this + 0x1a8) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

