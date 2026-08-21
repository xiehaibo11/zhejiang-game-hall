
/* v8::internal::TurboAssembler::Jump(v8::internal::Handle<v8::internal::Code>,
   v8::internal::RelocInfo::Mode, v8::internal::Condition) */

void __thiscall
v8::internal::TurboAssembler::Jump(TurboAssembler *this,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_b8;
  ulong uStack_b0;
  ulong local_a8;
  uint local_a0;
  int local_9c;
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
  if (this[0xa5] != (TurboAssembler)0x0) {
    local_9c = -1;
    uVar3 = Builtins::IsBuiltinHandle
                      ((Builtins *)(*(long *)(this + 0x178) + 0x9e00),param_2,&local_9c);
    if ((uVar3 & 1) != 0) {
      TurboAssemblerBase::RecordCommentForOffHeapTrampoline((TurboAssemblerBase *)this,local_9c);
      if (local_9c == -1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","builtin_index != Builtins::kNoBuiltinId");
      }
      lVar5 = *(long *)(this + 0x198);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar6 = *(undefined8 *)(this + 0x1a8);
      uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_a8 = 0x400000003f;
      if (uVar2 != 0x3f) {
        local_a8 = (ulong)uVar2 | 0x4000000000;
      }
      local_a0 = 0;
      uVar4 = Isolate::CurrentEmbeddedBlob();
      uStack_b0 = Isolate::CurrentEmbeddedBlobSize();
      uStack_b0 = uStack_b0 & 0xffffffff;
      local_b8 = uVar4;
      local_70 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_b8,local_9c);
      local_90 = local_90 & 0xffffffffffffff00;
      local_88 = local_88 & 0xffffff00;
      local_68 = 10;
      local_60 = 0xffffffff;
      local_58 = 2;
      Assembler::ldr((Assembler *)this,(CPURegister *)&local_a8,(Operand *)&local_90);
      local_90 = local_a8;
      local_88 = local_a0;
      if (param_4 != 0xf) {
        local_98 = 0;
        if (param_4 != 0xe) {
          B(this,&local_98,param_4 ^ 1);
        }
        Assembler::br((Assembler *)this,(Register *)&local_90);
        Assembler::bind((Label *)this);
      }
      *(long *)(this + 0x198) = lVar5;
      *(undefined8 *)(this + 0x1a8) = uVar6;
      goto LAB_01274748;
    }
  }
  if ((param_3 & 0xff) == 7) {
    param_3 = 7;
    param_2 = param_2 - *(long *)(this + 0x20);
    lVar5 = param_2 + 3;
    if (-1 < param_2) {
      lVar5 = param_2;
    }
    lVar5 = lVar5 >> 2;
  }
  else {
    lVar5 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,param_2);
  }
  JumpHelper(this,lVar5,param_3,param_4);
LAB_01274748:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

