
/* v8::internal::TurboAssembler::Call(unsigned long, v8::internal::RelocInfo::Mode) */

void __thiscall v8::internal::TurboAssembler::Call(TurboAssembler *this,ulong param_1,uint param_3)

{
  long lVar1;
  long lVar2;
  BlockScope aBStack_48 [8];
  
  ConstantPool::BlockScope::BlockScope(aBStack_48,(Assembler *)this,0);
  Assembler::CheckVeneerPool((Assembler *)this,false,true,0);
  Assembler::StartBlockVeneerPool((Assembler *)this);
  if ((param_3 & 0xff) == 7) {
    IndirectCall(this,param_1,7);
  }
  else {
    if ((param_3 & 0xfe) != 4) {
      lVar2 = param_1 - *(long *)(this + 0x20);
      lVar1 = lVar2 + 3;
      if (-1 < lVar2) {
        lVar1 = lVar2;
      }
      param_1 = lVar1 >> 2;
    }
    Assembler::near_call((Assembler *)this,param_1 & 0xffffffff,param_3);
  }
  Assembler::EndBlockVeneerPool((Assembler *)this);
  ConstantPool::BlockScope::~BlockScope(aBStack_48);
  return;
}

