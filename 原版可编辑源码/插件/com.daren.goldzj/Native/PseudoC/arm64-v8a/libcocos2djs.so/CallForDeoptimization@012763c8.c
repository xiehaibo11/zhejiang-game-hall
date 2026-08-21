
/* v8::internal::TurboAssembler::CallForDeoptimization(unsigned long, int) */

void v8::internal::TurboAssembler::CallForDeoptimization(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  BlockScope aBStack_38 [8];
  
  ConstantPool::BlockScope::BlockScope(aBStack_38,(Assembler *)param_1,0);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,true,0);
  Assembler::StartBlockVeneerPool((Assembler *)param_1);
  uVar2 = (ulong)(uint)param_2 - *(long *)(param_1 + 0xa8);
  uVar1 = uVar2 + 3;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  Assembler::near_call((Assembler *)param_1,uVar1 >> 2,6);
  Assembler::EndBlockVeneerPool((Assembler *)param_1);
  ConstantPool::BlockScope::~BlockScope(aBStack_38);
  return;
}

