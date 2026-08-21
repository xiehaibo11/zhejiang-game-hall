
/* v8::internal::Assembler::RecordRelocInfo(v8::internal::RelocInfo::Mode, long,
   v8::internal::Assembler::ConstantPoolMode) */

void __thiscall
v8::internal::Assembler::RecordRelocInfo(Assembler *this,uint param_2,ulong param_3,int param_4)

{
  int iVar1;
  undefined8 local_58;
  undefined1 local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((((4 < (param_2 & 0xff) - 0xb) && ((param_2 & 0xff) != 8)) && ((param_2 & 0xff) != 0x10)) &&
     (param_4 == 0)) {
    if ((param_2 & 0xfe) == 2) {
      param_3 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,param_3);
    }
    if ((param_2 & 0xff) == 2) {
      iVar1 = ConstantPool::RecordEntry((ConstantPool *)(this + 0x138),param_3 & 0xffffffff,2);
    }
    else {
      iVar1 = ConstantPool::RecordEntry((ConstantPool *)(this + 0x138),param_3,param_2);
    }
    if (iVar1 == 1) {
      return;
    }
  }
  if ((this[0xa1] == (Assembler)0x0) &&
     ((((param_2 & 0xff) != 10 && ((param_2 & 0xff) != 7)) ||
      ((this[0xa0] != (Assembler)0x0 || (this[0xc0] != (Assembler)0x0)))))) {
    local_58 = *(undefined8 *)(this + 0x20);
    local_50 = (undefined1)param_2;
    uStack_40 = 0;
    local_38 = 0;
    local_48 = param_3;
    RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_58);
  }
  return;
}

