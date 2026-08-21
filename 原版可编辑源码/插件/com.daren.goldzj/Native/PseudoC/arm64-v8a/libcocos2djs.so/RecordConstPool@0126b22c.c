
/* v8::internal::Assembler::RecordConstPool(int) */

void __thiscall v8::internal::Assembler::RecordConstPool(Assembler *this,int param_1)

{
  int iVar1;
  BlockScope aBStack_60 [8];
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  ConstantPool::BlockScope::BlockScope(aBStack_60,this,0);
  if ((*(long *)(this + 0x128) != 0) && (*(int *)(this + 0xd0) < 1)) {
    if (*(long *)(this + 0x128) * 4 + (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8 <
        (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
      *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    }
    else {
      EmitVeneers(this,false,true,0);
    }
  }
  iVar1 = *(int *)(this + 0xd0) + 1;
  *(int *)(this + 0xd0) = iVar1;
  if (this[0xa1] == (Assembler)0x0) {
    local_58 = *(undefined8 *)(this + 0x20);
    local_48 = (long)param_1;
    local_50 = 0xb;
    uStack_40 = 0;
    local_38 = 0;
    RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_58);
    iVar1 = *(int *)(this + 0xd0);
  }
  *(int *)(this + 0xd0) = iVar1 + -1;
  ConstantPool::BlockScope::~BlockScope(aBStack_60);
  return;
}

