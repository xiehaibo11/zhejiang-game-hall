
/* v8::internal::compiler::CodeAssemblerScopedExceptionHandler::~CodeAssemblerScopedExceptionHandler()
    */

void __thiscall
v8::internal::compiler::CodeAssemblerScopedExceptionHandler::~CodeAssemblerScopedExceptionHandler
          (CodeAssemblerScopedExceptionHandler *this)

{
  CodeAssemblerLabel *this_00;
  ulong uVar1;
  undefined1 *puVar2;
  RawMachineLabel *pRVar3;
  long lVar4;
  Zone *this_01;
  CodeAssemblerScopedExceptionHandler *pCVar5;
  undefined8 *puVar6;
  CodeAssemblerParameterizedLabelBase *pCVar7;
  CodeAssemblerLabel local_a8 [8];
  undefined8 local_a0;
  undefined8 *local_98;
  RawMachineLabel *local_90;
  __tree_node **local_88;
  __tree_node *local_80;
  undefined8 local_78;
  __tree_node **pp_Stack_70;
  __tree_node *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  if (*this != (CodeAssemblerScopedExceptionHandler)0x0) {
    *(long *)(**(long **)(this + 8) + 0xa8) = *(long *)(**(long **)(this + 8) + 0xa8) + -8;
  }
  pCVar5 = this + 0x18;
  if (*(long *)pCVar5 == 0) {
    *(undefined8 *)pCVar5 = 0;
  }
  else {
    if (*(long *)(*(long *)pCVar5 + 0x40) == 0) {
      *(undefined8 *)pCVar5 = 0;
    }
    else {
      local_a8[0] = (CodeAssemblerLabel)0x0;
      local_a0 = 0;
      local_98 = (undefined8 *)**(undefined8 **)(this + 8);
      local_88 = &local_80;
      pp_Stack_70 = &local_68;
      local_78 = 0;
      local_80 = (__tree_node *)0x0;
      local_68 = (__tree_node *)0x0;
      uStack_60 = 0;
      local_90 = (RawMachineLabel *)0x0;
      this_01 = (Zone *)**(undefined8 **)(*(long *)**(undefined8 **)(this + 8) + 8);
      pRVar3 = *(RawMachineLabel **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)pRVar3) < 0x10) {
        pRVar3 = (RawMachineLabel *)Zone::NewExpand(this_01,0x10);
      }
      else {
        *(RawMachineLabel **)(this_01 + 0x10) = pRVar3 + 0x10;
      }
      *(undefined4 *)(pRVar3 + 7) = 0;
      *(undefined8 *)pRVar3 = 0;
      local_90 = pRVar3;
      uVar1 = RawMachineAssembler::InsideBlock(*(RawMachineAssembler **)**(undefined8 **)(this + 8))
      ;
      if ((uVar1 & 1) != 0) {
        puVar6 = *(undefined8 **)(this + 8);
        CodeAssemblerLabel::MergeVariables(local_a8);
        RawMachineAssembler::Goto(*(RawMachineAssembler **)*puVar6,local_90);
      }
      pCVar7 = *(CodeAssemblerParameterizedLabelBase **)(this + 0x18);
      RawMachineAssembler::Bind
                ((RawMachineAssembler *)**(undefined8 **)(pCVar7 + 0x48),
                 *(RawMachineLabel **)(pCVar7 + 0x50));
      CodeAssemblerLabel::UpdateVariablesAfterBind((CodeAssemblerLabel *)(pCVar7 + 0x38));
      puVar2 = operator_new(1);
      puStack_50 = puVar2 + 1;
      *puVar2 = 8;
      local_58 = puVar2;
      local_48 = puStack_50;
      puVar6 = (undefined8 *)CodeAssemblerParameterizedLabelBase::CreatePhis(pCVar7,&local_58);
      operator_delete(puVar2);
      *(undefined8 *)**(undefined8 **)(this + 0x20) = *(undefined8 *)*puVar6;
      puVar6 = *(undefined8 **)(this + 8);
      this_00 = *(CodeAssemblerLabel **)(this + 0x10);
      CodeAssemblerLabel::MergeVariables(this_00);
      RawMachineAssembler::Goto
                (*(RawMachineAssembler **)*puVar6,*(RawMachineLabel **)(this_00 + 0x18));
      if ((uVar1 & 1) != 0) {
        RawMachineAssembler::Bind((RawMachineAssembler *)*local_98,local_90);
        CodeAssemblerLabel::UpdateVariablesAfterBind(local_a8);
      }
      RawMachineLabel::~RawMachineLabel(local_90);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
                 *)&pp_Stack_70,local_68);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
                 *)&local_88,local_80);
      lVar4 = *(long *)pCVar5;
      *(undefined8 *)pCVar5 = 0;
      if (lVar4 == 0) {
        return;
      }
    }
    FUN_0168b280(pCVar5);
  }
  return;
}

