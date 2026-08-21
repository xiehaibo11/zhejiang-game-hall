
/* v8::internal::compiler::CodeAssembler::Branch(v8::internal::TNode<v8::internal::BoolT>,
   v8::internal::compiler::CodeAssemblerLabel*, std::__ndk1::function<void ()> const&) */

void __thiscall
v8::internal::compiler::CodeAssembler::Branch
          (CodeAssembler *this,long *param_2,CodeAssemblerLabel *param_3,long param_4)

{
  RawMachineLabel *pRVar1;
  int iVar2;
  long lVar3;
  Zone *this_00;
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
  
  lVar3 = *param_2;
  if (*(short *)(lVar3 + 0x10) == 0x18) {
    iVar2 = (int)*(long *)(lVar3 + 0x30);
    if (*(long *)(lVar3 + 0x30) != (long)iVar2) goto LAB_0168993c;
  }
  else {
    if (*(short *)(lVar3 + 0x10) != 0x17) {
LAB_0168993c:
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
      this_00 = (Zone *)**(undefined8 **)(*local_80 + 8);
      pRVar1 = *(RawMachineLabel **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)pRVar1) < 0x10) {
        pRVar1 = (RawMachineLabel *)Zone::NewExpand(this_00,0x10);
      }
      else {
        *(RawMachineLabel **)(this_00 + 0x10) = pRVar1 + 0x10;
      }
      *(undefined4 *)(pRVar1 + 7) = 0;
      *(undefined8 *)pRVar1 = 0;
      local_78 = pRVar1;
      Branch(this,param_2,param_3,local_90);
      RawMachineAssembler::Bind((RawMachineAssembler *)*local_80,local_78);
      CodeAssemblerLabel::UpdateVariablesAfterBind(local_90);
      if (*(long **)(param_4 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(param_4 + 0x20) + 0x30))();
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
      goto LAB_01689a44;
    }
    iVar2 = *(int *)(lVar3 + 0x2c);
  }
  if (iVar2 != 0) {
    CodeAssemblerLabel::MergeVariables(param_3);
    RawMachineAssembler::Goto
              ((RawMachineAssembler *)**(undefined8 **)this,*(RawMachineLabel **)(param_3 + 0x18));
    return;
  }
  if (*(long **)(param_4 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01689a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_4 + 0x20) + 0x30))();
    return;
  }
LAB_01689a44:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

