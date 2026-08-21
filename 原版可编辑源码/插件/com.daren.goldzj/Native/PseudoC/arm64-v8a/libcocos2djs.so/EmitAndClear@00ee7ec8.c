
/* v8::internal::ConstantPool::EmitAndClear(v8::internal::Jump) */

void __thiscall v8::internal::ConstantPool::EmitAndClear(ConstantPool *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Assembler *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_50 [4];
  
  this_00 = *(Assembler **)this;
  if (*(int *)(this_00 + 0x174) == 0) {
    *(undefined4 *)(this_00 + 0x170) = 0x7fffffff;
  }
  *(int *)(this_00 + 0x174) = *(int *)(this_00 + 0x174) + 1;
  Assembler::StartBlockVeneerPool(this_00);
  uVar5 = *(undefined8 *)(*(long *)this + 0x20);
  uVar6 = *(undefined8 *)(*(long *)this + 0x10);
  iVar3 = PrologueSize(this,param_2);
  if ((*(long *)(this + 0x30) == 0) || ((iVar3 + ((int)uVar5 - (int)uVar6) & 7U) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar4 = PrologueSize(this,param_2);
  iVar2 = *(int *)(this + 0x28);
  iVar1 = *(int *)(this + 0x30);
  local_50[2] = 0;
  local_50[3] = 0;
  Assembler::bind(*(Label **)this);
  Assembler::RecordConstPool(*(Assembler **)this,iVar4 + iVar2 * 4 + iVar3 * 4 + iVar1 * 8);
  local_50[0] = 0;
  local_50[1] = 0;
  if (param_2 == 1) {
    Assembler::b(*(Assembler **)this,(Label *)local_50);
  }
  AssemblerBase::RecordComment(*(AssemblerBase **)this,"[ Constant Pool");
  EmitPrologue(this,iVar3);
  if (iVar3 != 0) {
    Assembler::Align(*(Assembler **)this,8);
  }
  EmitEntries(this);
  AssemblerBase::RecordComment(*(AssemblerBase **)this,"]");
  if (0 < local_50[0]) {
    Assembler::bind(*(Label **)this);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             *)(this + 0x10),*(__tree_node **)(this + 0x18));
  *(ConstantPool **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  Assembler::EndBlockVeneerPool(this_00);
  iVar3 = *(int *)(this_00 + 0x174);
  *(int *)(this_00 + 0x174) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    *(undefined4 *)(this_00 + 0x170) = 0;
  }
  return;
}

