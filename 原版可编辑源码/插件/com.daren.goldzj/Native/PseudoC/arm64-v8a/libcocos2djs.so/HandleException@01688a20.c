
/* v8::internal::compiler::CodeAssembler::HandleException(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::HandleException(CodeAssembler *this,Node *param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *pNVar3;
  RawMachineLabel *pRVar4;
  RawMachineLabel *pRVar5;
  Zone *pZVar6;
  RawMachineAssembler *this_00;
  CodeAssemblerParameterizedLabelBase *pCVar7;
  CodeAssemblerLabel local_108 [8];
  undefined8 local_100;
  long *local_f8;
  RawMachineLabel *local_f0;
  __tree_node **local_e8;
  __tree_node *local_e0;
  undefined8 local_d8;
  __tree_node **pp_Stack_d0;
  __tree_node *local_c8;
  undefined8 uStack_c0;
  CodeAssemblerLabel local_b8 [8];
  undefined8 local_b0;
  long *local_a8;
  RawMachineLabel *local_a0;
  __tree_node **pp_Stack_98;
  __tree_node *local_90;
  undefined8 local_88;
  __tree_node **pp_Stack_80;
  __tree_node *local_78;
  undefined8 uStack_70;
  Node *local_68;
  Node *pNStack_60;
  Node *local_58;
  
  local_a8 = *(long **)this;
  if ((local_a8[0x15] != local_a8[0x14]) && ((*(byte *)(*(long *)param_1 + 0x12) >> 5 & 1) == 0)) {
    pCVar7 = *(CodeAssemblerParameterizedLabelBase **)(local_a8[0x15] + -8);
    pp_Stack_98 = &local_90;
    pp_Stack_80 = &local_78;
    local_b8[0] = (CodeAssemblerLabel)0x0;
    local_b0 = 0;
    local_78 = (__tree_node *)0x0;
    uStack_70 = 0;
    local_88 = 0;
    local_90 = (__tree_node *)0x0;
    local_a0 = (RawMachineLabel *)0x0;
    pZVar6 = (Zone *)**(undefined8 **)(*local_a8 + 8);
    pRVar4 = *(RawMachineLabel **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar4) < 0x10) {
      pRVar4 = (RawMachineLabel *)Zone::NewExpand(pZVar6,0x10);
    }
    else {
      *(RawMachineLabel **)(pZVar6 + 0x10) = pRVar4 + 0x10;
    }
    *(undefined4 *)(pRVar4 + 7) = 0;
    *(undefined8 *)pRVar4 = 0;
    local_108[0] = (CodeAssemblerLabel)0x0;
    local_f8 = *(long **)this;
    local_e8 = &local_e0;
    pp_Stack_d0 = &local_c8;
    local_c8 = (__tree_node *)0x0;
    uStack_c0 = 0;
    local_d8 = 0;
    local_e0 = (__tree_node *)0x0;
    local_f0 = (RawMachineLabel *)0x0;
    local_100 = 0;
    pZVar6 = (Zone *)**(undefined8 **)(*local_f8 + 8);
    pRVar5 = *(RawMachineLabel **)(pZVar6 + 0x10);
    local_a0 = pRVar4;
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar5) < 0x10) {
      pRVar5 = (RawMachineLabel *)Zone::NewExpand(pZVar6,0x10);
    }
    else {
      *(RawMachineLabel **)(pZVar6 + 0x10) = pRVar5 + 0x10;
    }
    *(undefined8 *)pRVar5 = 0;
    *(undefined2 *)(pRVar5 + 8) = 0;
    pRVar5[10] = (RawMachineLabel)0x1;
    local_f0 = pRVar5;
    CodeAssemblerLabel::MergeVariables(local_b8);
    CodeAssemblerLabel::MergeVariables(local_108);
    RawMachineAssembler::Continuations
              ((RawMachineAssembler *)**(undefined8 **)this,param_1,local_a0,local_f0);
    RawMachineAssembler::Bind((RawMachineAssembler *)*local_f8,local_f0);
    CodeAssemblerLabel::UpdateVariablesAfterBind(local_108);
    pOVar1 = (Operator *)
             CommonOperatorBuilder::IfException((CommonOperatorBuilder *)(**(long **)this + 0x48));
    local_68 = param_1;
    pNStack_60 = param_1;
    uVar2 = RawMachineAssembler::AddNode
                      ((RawMachineAssembler *)**(undefined8 **)this,pOVar1,2,&local_68);
    pNVar3 = operator_new(8);
    pNStack_60 = pNVar3 + 8;
    *(undefined8 *)pNVar3 = uVar2;
    local_68 = pNVar3;
    local_58 = pNStack_60;
    CodeAssemblerParameterizedLabelBase::AddInputs(pCVar7,&local_68);
    operator_delete(pNVar3);
    CodeAssemblerLabel::MergeVariables((CodeAssemblerLabel *)(pCVar7 + 0x38));
    RawMachineAssembler::Goto
              ((RawMachineAssembler *)**(undefined8 **)this,*(RawMachineLabel **)(pCVar7 + 0x50));
    RawMachineAssembler::Bind((RawMachineAssembler *)*local_a8,local_a0);
    CodeAssemblerLabel::UpdateVariablesAfterBind(local_b8);
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar1 = (Operator *)CommonOperatorBuilder::IfSuccess((CommonOperatorBuilder *)(this_00 + 0x48))
    ;
    local_68 = param_1;
    RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_68);
    RawMachineLabel::~RawMachineLabel(local_f0);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
               *)&pp_Stack_d0,local_c8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
               *)&local_e8,local_e0);
    RawMachineLabel::~RawMachineLabel(local_a0);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
               *)&pp_Stack_80,local_78);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
               *)&pp_Stack_98,local_90);
  }
  return;
}

