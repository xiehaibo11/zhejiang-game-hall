
/* v8::internal::compiler::CodeAssembler::GotoIfException(v8::internal::compiler::Node*,
   v8::internal::compiler::CodeAssemblerLabel*, v8::internal::compiler::CodeAssemblerVariable*) */

void __thiscall
v8::internal::compiler::CodeAssembler::GotoIfException
          (CodeAssembler *this,Node *param_1,CodeAssemblerLabel *param_2,
          CodeAssemblerVariable *param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineLabel *pRVar3;
  RawMachineLabel *pRVar4;
  Zone *pZVar5;
  RawMachineAssembler *this_00;
  CodeAssemblerLabel local_f0 [8];
  undefined8 local_e8;
  long *local_e0;
  RawMachineLabel *local_d8;
  __tree_node **local_d0;
  __tree_node *local_c8;
  undefined8 local_c0;
  __tree_node **pp_Stack_b8;
  __tree_node *local_b0;
  undefined8 uStack_a8;
  CodeAssemblerLabel local_a0 [8];
  undefined8 local_98;
  long *local_90;
  RawMachineLabel *local_88;
  __tree_node **local_80;
  __tree_node *local_78;
  undefined8 local_70;
  __tree_node **pp_Stack_68;
  __tree_node *local_60;
  undefined8 uStack_58;
  Node *local_50;
  Node *pNStack_48;
  
  if (param_2 != (CodeAssemblerLabel *)0x0) {
    local_a0[0] = (CodeAssemblerLabel)0x0;
    local_90 = *(long **)this;
    local_80 = &local_78;
    pp_Stack_68 = &local_60;
    local_60 = (__tree_node *)0x0;
    uStack_58 = 0;
    local_70 = 0;
    local_78 = (__tree_node *)0x0;
    local_88 = (RawMachineLabel *)0x0;
    local_98 = 0;
    pZVar5 = (Zone *)**(undefined8 **)(*local_90 + 8);
    pRVar3 = *(RawMachineLabel **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pRVar3) < 0x10) {
      pRVar3 = (RawMachineLabel *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(RawMachineLabel **)(pZVar5 + 0x10) = pRVar3 + 0x10;
    }
    *(undefined4 *)(pRVar3 + 7) = 0;
    *(undefined8 *)pRVar3 = 0;
    local_f0[0] = (CodeAssemblerLabel)0x0;
    local_e0 = *(long **)this;
    local_d0 = &local_c8;
    pp_Stack_b8 = &local_b0;
    local_b0 = (__tree_node *)0x0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_c8 = (__tree_node *)0x0;
    local_d8 = (RawMachineLabel *)0x0;
    local_e8 = 0;
    pZVar5 = (Zone *)**(undefined8 **)(*local_e0 + 8);
    pRVar4 = *(RawMachineLabel **)(pZVar5 + 0x10);
    local_88 = pRVar3;
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pRVar4) < 0x10) {
      pRVar4 = (RawMachineLabel *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(RawMachineLabel **)(pZVar5 + 0x10) = pRVar4 + 0x10;
    }
    *(undefined8 *)pRVar4 = 0;
    *(undefined2 *)(pRVar4 + 8) = 0;
    pRVar4[10] = (RawMachineLabel)0x1;
    local_d8 = pRVar4;
    CodeAssemblerLabel::MergeVariables(local_a0);
    CodeAssemblerLabel::MergeVariables(local_f0);
    RawMachineAssembler::Continuations
              ((RawMachineAssembler *)**(undefined8 **)this,param_1,local_88,local_d8);
    RawMachineAssembler::Bind((RawMachineAssembler *)*local_e0,local_d8);
    CodeAssemblerLabel::UpdateVariablesAfterBind(local_f0);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfException((CommonOperatorBuilder *)(**(long **)this + 0x48));
    local_50 = param_1;
    pNStack_48 = param_1;
    uVar2 = RawMachineAssembler::AddNode
                      ((RawMachineAssembler *)**(undefined8 **)this,pOVar1,2,&local_50);
    if (param_3 != (CodeAssemblerVariable *)0x0) {
      **(undefined8 **)param_3 = uVar2;
    }
    CodeAssemblerLabel::MergeVariables(param_2);
    RawMachineAssembler::Goto
              ((RawMachineAssembler *)**(undefined8 **)this,*(RawMachineLabel **)(param_2 + 0x18));
    RawMachineAssembler::Bind((RawMachineAssembler *)*local_90,local_88);
    CodeAssemblerLabel::UpdateVariablesAfterBind(local_a0);
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar1 = (Operator *)CommonOperatorBuilder::IfSuccess((CommonOperatorBuilder *)(this_00 + 0x48))
    ;
    local_50 = param_1;
    RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_50);
    RawMachineLabel::~RawMachineLabel(local_d8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
               *)&pp_Stack_b8,local_b0);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
               *)&local_d0,local_c8);
    RawMachineLabel::~RawMachineLabel(local_88);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
               *)&pp_Stack_68,local_60);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
               *)&local_80,local_78);
  }
  return;
}

