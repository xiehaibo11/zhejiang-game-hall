
/* v8::internal::Assembler::RecordDeoptReason(v8::internal::DeoptimizeReason,
   v8::internal::SourcePosition, int) */

void __thiscall
v8::internal::Assembler::RecordDeoptReason
          (Assembler *this,undefined1 param_2,ulong param_3,int param_4)

{
  int iVar1;
  BlockScope aBStack_48 [8];
  
  ConstantPool::BlockScope::BlockScope(aBStack_48,this,0);
  CheckVeneerPool(this,false,true,0);
  StartBlockVeneerPool(this);
  iVar1 = buffer_space(this);
  if (iVar1 < 0x40) {
    GrowBuffer(this);
  }
  RecordRelocInfo(this,0xd,(param_3 >> 1 & 0x3fffffff) - 1,0);
  RecordRelocInfo(this,0xe,(param_3 >> 0x1f & 0xffff) - 1,0);
  RecordRelocInfo(this,0xf,param_2,0);
  RecordRelocInfo(this,0x10,(long)param_4,0);
  EndBlockVeneerPool(this);
  ConstantPool::BlockScope::~BlockScope(aBStack_48);
  return;
}

