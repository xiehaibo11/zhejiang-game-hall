
/* v8::internal::compiler::CodeAssembler::ReturnIf(v8::internal::compiler::Node*,
   v8::internal::TNode<v8::internal::Object>) */

void __thiscall
v8::internal::compiler::CodeAssembler::ReturnIf
          (CodeAssembler *this,undefined8 param_1,Node *param_3)

{
  RawMachineLabel *pRVar1;
  RawMachineLabel *pRVar2;
  Zone *pZVar3;
  CodeAssemblerLabel local_e0 [8];
  undefined8 local_d8;
  long *local_d0;
  RawMachineLabel *local_c8;
  __tree_node **local_c0;
  __tree_node *local_b8;
  undefined8 local_b0;
  __tree_node **pp_Stack_a8;
  __tree_node *local_a0;
  undefined8 uStack_98;
  CodeAssemblerLabel local_90 [8];
  undefined8 local_88;
  long *local_80;
  RawMachineLabel *local_78;
  __tree_node **local_70;
  __tree_node *local_68;
  undefined8 local_60;
  __tree_node **pp_Stack_58;
  __tree_node *local_50;
  undefined8 uStack_48;
  
  local_90[0] = (CodeAssemblerLabel)0x0;
  local_80 = *(long **)this;
  local_70 = &local_68;
  pp_Stack_58 = &local_50;
  local_50 = (__tree_node *)0x0;
  uStack_48 = 0;
  local_60 = 0;
  local_68 = (__tree_node *)0x0;
  local_78 = (RawMachineLabel *)0x0;
  local_88 = 0;
  pZVar3 = (Zone *)**(undefined8 **)(*local_80 + 8);
  pRVar1 = *(RawMachineLabel **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar1) < 0x10) {
    pRVar1 = (RawMachineLabel *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(RawMachineLabel **)(pZVar3 + 0x10) = pRVar1 + 0x10;
  }
  *(undefined4 *)(pRVar1 + 7) = 0;
  *(undefined8 *)pRVar1 = 0;
  local_e0[0] = (CodeAssemblerLabel)0x0;
  local_d0 = *(long **)this;
  local_c0 = &local_b8;
  pp_Stack_a8 = &local_a0;
  local_a0 = (__tree_node *)0x0;
  uStack_98 = 0;
  local_b0 = 0;
  local_b8 = (__tree_node *)0x0;
  local_c8 = (RawMachineLabel *)0x0;
  local_d8 = 0;
  pZVar3 = (Zone *)**(undefined8 **)(*local_d0 + 8);
  pRVar2 = *(RawMachineLabel **)(pZVar3 + 0x10);
  local_78 = pRVar1;
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pRVar2) < 0x10) {
    pRVar2 = (RawMachineLabel *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(RawMachineLabel **)(pZVar3 + 0x10) = pRVar2 + 0x10;
  }
  *(undefined4 *)(pRVar2 + 7) = 0;
  *(undefined8 *)pRVar2 = 0;
  local_c8 = pRVar2;
  Branch(this,param_1,local_90,local_e0);
  RawMachineAssembler::Bind((RawMachineAssembler *)*local_80,local_78);
  CodeAssemblerLabel::UpdateVariablesAfterBind(local_90);
  RawMachineAssembler::Return((RawMachineAssembler *)**(undefined8 **)this,param_3);
  RawMachineAssembler::Bind((RawMachineAssembler *)*local_d0,local_c8);
  CodeAssemblerLabel::UpdateVariablesAfterBind(local_e0);
  RawMachineLabel::~RawMachineLabel(local_c8);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
             *)&pp_Stack_a8,local_a0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
             *)&local_c0,local_b8);
  RawMachineLabel::~RawMachineLabel(local_78);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
             *)&pp_Stack_58,local_50);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
             *)&local_70,local_68);
  return;
}

