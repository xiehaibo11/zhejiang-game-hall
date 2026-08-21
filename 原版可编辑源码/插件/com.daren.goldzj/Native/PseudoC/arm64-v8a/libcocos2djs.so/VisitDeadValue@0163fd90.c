
/* v8::internal::compiler::InstructionSelector::VisitDeadValue(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitDeadValue(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar5;
  InstructionSequence *this_02;
  long lVar6;
  ulong local_58;
  undefined1 local_50 [16];
  
  uVar2 = DeadValueRepresentationOf(*(Operator **)param_1);
  uVar1 = *(uint *)(param_1 + 0x14);
  this_02 = *(InstructionSequence **)(this + 0x10);
  iVar3 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (iVar3 == -1) {
    iVar3 = InstructionSequence::NextVirtualRegister(this_02);
    *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar3;
  }
  InstructionSequence::MarkAsRepresentation(this_02,uVar2,iVar3);
  uVar5 = ((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(this + 0xb8) + uVar5) =
       1L << ((ulong)*(uint *)(param_1 + 0x14) & 0x3f) | *(ulong *)(*(long *)(this + 0xb8) + uVar5);
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (uVar4 == 0xffffffff) {
    uVar4 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(uint *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = uVar4;
  }
  lVar6 = *(long *)(this + 0x10);
  local_50 = OperandGenerator::ToConstant(param_1);
  local_58 = CONCAT44(local_58._4_4_,uVar4);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>>>
  ::__emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::Constant>>
            ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::Constant>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::Constant>>>
              *)(lVar6 + 0x40),(int *)&local_58,(pair *)&local_58);
  local_58 = (ulong)uVar4 << 3 | 2;
  this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Instruction **)(this_00 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,0x13,1,(InstructionOperand *)&local_58,0,(InstructionOperand *)0x0,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  return;
}

