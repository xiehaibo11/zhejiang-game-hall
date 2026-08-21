
/* v8::internal::compiler::CodeAssembler::Branch(v8::internal::TNode<v8::internal::BoolT>,
   std::__ndk1::function<void ()> const&, std::__ndk1::function<void ()> const&) */

void __thiscall
v8::internal::compiler::CodeAssembler::Branch
          (CodeAssembler *this,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  RawMachineLabel *pRVar2;
  RawMachineLabel *pRVar3;
  int iVar4;
  long lVar5;
  Zone *pZVar6;
  CodeAssemblerLabel local_d0 [8];
  undefined8 local_c8;
  long *local_c0;
  RawMachineLabel *local_b8;
  __tree_node **local_b0;
  __tree_node *local_a8;
  undefined8 local_a0;
  __tree_node **pp_Stack_98;
  __tree_node *local_90;
  undefined8 uStack_88;
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
  
  lVar5 = *param_2;
  if (*(short *)(lVar5 + 0x10) == 0x18) {
    iVar4 = (int)*(long *)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x30) != (long)iVar4) goto LAB_016896fc;
  }
  else {
    if (*(short *)(lVar5 + 0x10) != 0x17) {
LAB_016896fc:
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
      pZVar6 = (Zone *)**(undefined8 **)(*local_70 + 8);
      pRVar2 = *(RawMachineLabel **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar2) < 0x10) {
        pRVar2 = (RawMachineLabel *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(RawMachineLabel **)(pZVar6 + 0x10) = pRVar2 + 0x10;
      }
      *(undefined4 *)(pRVar2 + 7) = 0;
      *(undefined8 *)pRVar2 = 0;
      local_d0[0] = (CodeAssemblerLabel)0x0;
      local_c0 = *(long **)this;
      local_b0 = &local_a8;
      pp_Stack_98 = &local_90;
      local_90 = (__tree_node *)0x0;
      uStack_88 = 0;
      local_a0 = 0;
      local_a8 = (__tree_node *)0x0;
      local_b8 = (RawMachineLabel *)0x0;
      local_c8 = 0;
      pZVar6 = (Zone *)**(undefined8 **)(*local_c0 + 8);
      pRVar3 = *(RawMachineLabel **)(pZVar6 + 0x10);
      local_68 = pRVar2;
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pRVar3) < 0x10) {
        pRVar3 = (RawMachineLabel *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(RawMachineLabel **)(pZVar6 + 0x10) = pRVar3 + 0x10;
      }
      *(undefined4 *)(pRVar3 + 7) = 0;
      *(undefined8 *)pRVar3 = 0;
      local_b8 = pRVar3;
      Branch(this,param_2,local_80,local_d0);
      RawMachineAssembler::Bind((RawMachineAssembler *)*local_70,local_68);
      CodeAssemblerLabel::UpdateVariablesAfterBind(local_80);
      if (*(long **)(param_3 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
        RawMachineAssembler::Bind((RawMachineAssembler *)*local_c0,local_b8);
        CodeAssemblerLabel::UpdateVariablesAfterBind(local_d0);
        if (*(long **)(param_4 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(param_4 + 0x20) + 0x30))();
          RawMachineLabel::~RawMachineLabel(local_b8);
          std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
          ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
                     *)&pp_Stack_98,local_90);
          std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
          ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
                     *)&local_b0,local_a8);
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
      }
      goto LAB_016898b0;
    }
    iVar4 = *(int *)(lVar5 + 0x2c);
  }
  if (iVar4 == 0) {
    plVar1 = *(long **)(param_4 + 0x20);
  }
  else {
    plVar1 = *(long **)(param_3 + 0x20);
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0168988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
LAB_016898b0:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

