
/* v8::internal::Assembler::ldr(v8::internal::CPURegister const&, v8::internal::Immediate const&) */

void __thiscall
v8::internal::Assembler::ldr(Assembler *this,CPURegister *param_1,Immediate *param_2)

{
  uint uVar1;
  uint uVar2;
  BlockScope aBStack_38 [8];
  
  ConstantPool::BlockScope::BlockScope(aBStack_38,this,0);
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
  RecordRelocInfo(this,param_2[8],*(undefined8 *)param_2,0);
  uVar1 = 0x58000000;
  if (*(int *)(param_1 + 4) != 0x40) {
    uVar1 = 0x18000000;
  }
  uVar2 = 0x5c000000;
  if (*(int *)(param_1 + 4) != 0x40) {
    uVar2 = 0x1c000000;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = uVar2;
  }
  Emit(this,uVar1 | *(uint *)param_1);
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
  ConstantPool::BlockScope::~BlockScope(aBStack_38);
  return;
}

