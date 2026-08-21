
void FUN_0168b280(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != (void *)0x0) {
    v8::internal::compiler::RawMachineLabel::~RawMachineLabel
              (*(RawMachineLabel **)((long)param_2 + 0x50));
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>>>>
               *)((long)param_2 + 0x70),*(__tree_node **)((long)param_2 + 0x78));
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
               *)((long)param_2 + 0x58),*(__tree_node **)((long)param_2 + 0x60));
    pvVar1 = *(void **)((long)param_2 + 0x20);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_2 + 0x28) = pvVar1;
      operator_delete(pvVar1);
    }
    puVar4 = *(undefined8 **)((long)param_2 + 8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_2 + 0x10);
      puVar2 = puVar4;
      if (puVar3 != puVar4) {
        pvVar1 = (void *)puVar3[-3];
        puVar2 = puVar3 + -3;
        while( true ) {
          if (pvVar1 != (void *)0x0) {
            puVar3[-2] = pvVar1;
            operator_delete(pvVar1);
          }
          if (puVar4 == puVar2) break;
          pvVar1 = (void *)puVar2[-3];
          puVar3 = puVar2;
          puVar2 = puVar2 + -3;
        }
        puVar2 = *(undefined8 **)((long)param_2 + 8);
      }
      *(undefined8 **)((long)param_2 + 0x10) = puVar4;
      operator_delete(puVar2);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

