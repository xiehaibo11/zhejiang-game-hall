
/* v8::internal::compiler::InstructionSelector::VisitConstant(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitConstant(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar3;
  long lVar4;
  ulong local_48;
  undefined1 local_40 [16];
  
  uVar3 = ((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(this + 0xb8) + uVar3) =
       1L << ((ulong)*(uint *)(param_1 + 0x14) & 0x3f) | *(ulong *)(*(long *)(this + 0xb8) + uVar3);
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (uVar2 == 0xffffffff) {
    uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = uVar2;
  }
  lVar4 = *(long *)(this + 0x10);
  local_40 = OperandGenerator::ToConstant(param_1);
  local_48 = CONCAT44(local_48._4_4_,uVar2);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>>>
  ::__emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::Constant>>
            ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>>>
              *)(lVar4 + 0x40),(int *)&local_48,(pair *)&local_48);
  local_48 = (ulong)uVar2 << 3 | 2;
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x11,1,(InstructionOperand *)&local_48,0,(InstructionOperand *)0x0,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

