
/* v8::internal::Assembler::ldr(v8::internal::CPURegister const&, v8::internal::Operand const&) */

void __thiscall v8::internal::Assembler::ldr(Assembler *this,CPURegister *param_1,Operand *param_2)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  Assembler *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_2 == (Operand)0x0) {
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    local_70 = *(Assembler **)(param_2 + 0x20);
    ldr(this,param_1,(Immediate *)&local_70);
  }
  else {
    local_70 = this;
    ConstantPool::BlockScope::BlockScope((BlockScope *)&uStack_68,this,0);
    if ((*(long *)(local_70 + 0x128) != 0) && (*(int *)(local_70 + 0xd0) < 1)) {
      if (*(long *)(local_70 + 0x128) * 4 +
          (long)(*(int *)(local_70 + 0x20) - *(int *)(local_70 + 0x10)) + 8 <
          (long)*(int *)(*(long *)(local_70 + 0x118) + 0x20)) {
        *(int *)(local_70 + 0x130) = *(int *)(*(long *)(local_70 + 0x118) + 0x20) + -0x800;
      }
      else {
        EmitVeneers(local_70,false,true,0);
      }
    }
    *(int *)(local_70 + 0xd0) = *(int *)(local_70 + 0xd0) + 1;
    local_50 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    AssemblerBase::RequestHeapObject((AssemblerBase *)this,&local_60);
    uStack_78 = *(undefined8 *)(param_2 + 0x28);
    local_80 = *(undefined8 *)(param_2 + 0x20);
    ldr(this,param_1,(Immediate *)&local_80);
    *(int *)(local_70 + 0xd0) = *(int *)(local_70 + 0xd0) + -1;
    ConstantPool::BlockScope::~BlockScope((BlockScope *)&uStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

