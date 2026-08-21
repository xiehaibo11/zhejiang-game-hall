
/* v8::internal::Assembler::near_call(v8::internal::HeapObjectRequest) */

void __thiscall v8::internal::Assembler::near_call(Assembler *this,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  BlockScope aBStack_80 [8];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ConstantPool::BlockScope::BlockScope(aBStack_80,this,0);
  if ((*(long *)(this + 0x128) != 0) && (*(int *)(this + 0xd0) < 1)) {
    if (*(long *)(this + 0x128) * 4 + (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8 <
        (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
      *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    }
    else {
      EmitVeneers(this,false,true,0);
    }
  }
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
  local_40 = param_2[2];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  AssemblerBase::RequestHeapObject((AssemblerBase *)this,&local_50);
  uVar2 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,0);
  if (this[0xa1] == (Assembler)0x0) {
    local_78 = *(undefined8 *)(this + 0x20);
    local_70 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_68 = uVar2;
    RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_78);
  }
  if ((long)(int)(uint)uVar2 + 0x2000000U >> 0x1a == 0) {
    Emit(this,(uint)uVar2 & 0x3ffffff | 0x94000000);
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
    ConstantPool::BlockScope::~BlockScope(aBStack_80);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int26(imm26)");
}

