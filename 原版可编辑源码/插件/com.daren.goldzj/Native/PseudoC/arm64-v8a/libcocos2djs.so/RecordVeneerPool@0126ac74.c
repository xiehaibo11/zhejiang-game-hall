
/* v8::internal::Assembler::RecordVeneerPool(int, int) */

void __thiscall v8::internal::Assembler::RecordVeneerPool(Assembler *this,int param_1,int param_2)

{
  long local_68;
  undefined1 local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  Assembler *local_40;
  BlockScope aBStack_38 [8];
  
  local_40 = this;
  ConstantPool::BlockScope::BlockScope(aBStack_38,this,0);
  local_58 = (long)param_2;
  *(int *)(local_40 + 0xd0) = *(int *)(local_40 + 0xd0) + 1;
  local_60 = 0xc;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = *(long *)(this + 0x10) + (long)param_1;
  RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_68);
  *(int *)(local_40 + 0xd0) = *(int *)(local_40 + 0xd0) + -1;
  ConstantPool::BlockScope::~BlockScope(aBStack_38);
  return;
}

