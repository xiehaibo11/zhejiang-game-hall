
/* v8::internal::TurboAssembler::CallBuiltin(int) */

void __thiscall v8::internal::TurboAssembler::CallBuiltin(TurboAssembler *this,int param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_c0;
  ulong uStack_b8;
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
  TurboAssemblerBase::RecordCommentForOffHeapTrampoline((TurboAssemblerBase *)this,param_1);
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","builtin_index != Builtins::kNoBuiltinId");
  }
  lVar4 = *(long *)(this + 0x198);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(this + 0x1a8);
    uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_b0 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_b0 = (ulong)uVar2 | 0x4000000000;
    }
    local_a8 = 0;
    uVar3 = Isolate::CurrentEmbeddedBlob();
    uStack_b8 = Isolate::CurrentEmbeddedBlobSize();
    uStack_b8 = uStack_b8 & 0xffffffff;
    local_c0 = uVar3;
    local_70 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_c0,param_1);
    local_90 = (Assembler *)((ulong)local_90 & 0xffffffffffffff00);
    local_88[0] = (BlockScope)0x0;
    local_68 = 10;
    local_60 = 0xffffffff;
    local_58 = 2;
    Assembler::ldr((Assembler *)this,(CPURegister *)&local_b0,(Operand *)&local_90);
    local_a0 = local_b0;
    local_98 = local_a8;
    local_90 = (Assembler *)this;
    ConstantPool::BlockScope::BlockScope(local_88,(Assembler *)this,0);
    Assembler::CheckVeneerPool(local_90,false,true,0);
    Assembler::StartBlockVeneerPool(local_90);
    Assembler::blr((Assembler *)this,(Register *)&local_a0);
    Assembler::EndBlockVeneerPool(local_90);
    ConstantPool::BlockScope::~BlockScope(local_88);
    *(long *)(this + 0x198) = lVar4;
    *(undefined8 *)(this + 0x1a8) = uVar5;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

