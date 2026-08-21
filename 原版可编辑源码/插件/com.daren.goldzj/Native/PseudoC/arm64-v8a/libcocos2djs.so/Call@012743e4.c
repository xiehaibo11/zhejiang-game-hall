
/* v8::internal::TurboAssembler::Call(v8::internal::Handle<v8::internal::Code>,
   v8::internal::RelocInfo::Mode) */

void __thiscall
v8::internal::TurboAssembler::Call(TurboAssembler *this,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_44;
  Assembler *local_40;
  BlockScope aBStack_38 [8];
  
  local_40 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(aBStack_38,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_40,false,true,0);
  Assembler::StartBlockVeneerPool(local_40);
  if (this[0xa5] != (TurboAssembler)0x0) {
    local_44 = -1;
    uVar1 = Builtins::IsBuiltinHandle
                      ((Builtins *)(*(long *)(this + 0x178) + 0x9e00),param_2,&local_44);
    if ((uVar1 & 1) != 0) {
      CallBuiltin(this,local_44);
      goto LAB_012744b4;
    }
  }
  if ((param_3 & 0xff) == 7) {
    IndirectCall(this,param_2,7);
  }
  else {
    uVar2 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,param_2);
    Assembler::near_call((Assembler *)this,uVar2,param_3);
  }
LAB_012744b4:
  Assembler::EndBlockVeneerPool(local_40);
  ConstantPool::BlockScope::~BlockScope(aBStack_38);
  return;
}

