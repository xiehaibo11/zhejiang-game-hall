
/* v8::internal::compiler::CodeAssembler::GotoIfNot(v8::internal::SloppyTNode<v8::internal::IntegralT>,
   v8::internal::compiler::CodeAssemblerLabel*) */

void __thiscall
v8::internal::compiler::CodeAssembler::GotoIfNot
          (CodeAssembler *this,undefined8 param_2,undefined8 param_3)

{
  RawMachineLabel *pRVar1;
  Zone *this_00;
  CodeAssemblerLabel local_80 [8];
  undefined8 local_78;
  long *local_70;
  RawMachineLabel *local_68;
  __tree_node **local_60;
  __tree_node *local_58;
  undefined8 local_50;
  __tree_node **pp_Stack_48;
  __tree_node *local_40;
  undefined8 uStack_38;
  
  local_80[0] = (CodeAssemblerLabel)0x0;
  local_70 = *(long **)this;
  local_60 = &local_58;
  pp_Stack_48 = &local_40;
  local_40 = (__tree_node *)0x0;
  uStack_38 = 0;
  local_50 = 0;
  local_58 = (__tree_node *)0x0;
  local_68 = (RawMachineLabel *)0x0;
  local_78 = 0;
  this_00 = (Zone *)**(undefined8 **)(*local_70 + 8);
  pRVar1 = *(RawMachineLabel **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pRVar1) < 0x10) {
    pRVar1 = (RawMachineLabel *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(RawMachineLabel **)(this_00 + 0x10) = pRVar1 + 0x10;
  }
  *(undefined4 *)(pRVar1 + 7) = 0;
  *(undefined8 *)pRVar1 = 0;
  local_68 = pRVar1;
  Branch(this,param_2,local_80,param_3);
  RawMachineAssembler::Bind((RawMachineAssembler *)*local_70,local_68);
  CodeAssemblerLabel::UpdateVariablesAfterBind(local_80);
  RawMachineLabel::~RawMachineLabel(local_68);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
             *)&pp_Stack_48,local_40);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
             *)&local_60,local_58);
  return;
}

