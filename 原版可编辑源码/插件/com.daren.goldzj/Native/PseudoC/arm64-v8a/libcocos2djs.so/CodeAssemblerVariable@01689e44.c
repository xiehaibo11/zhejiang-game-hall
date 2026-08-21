
/* v8::internal::compiler::CodeAssemblerVariable::CodeAssemblerVariable(v8::internal::compiler::CodeAssembler*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssemblerVariable::CodeAssemblerVariable
          (CodeAssemblerVariable *this,long *param_1,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *this_00;
  
  this_00 = (Zone *)**(undefined8 **)(*(long *)*param_1 + 8);
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 2;
  }
  iVar1 = *(int *)(*param_1 + 0xb8);
  *(int *)(*param_1 + 0xb8) = iVar1 + 1;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = param_3;
  *(int *)((long)puVar2 + 0xc) = iVar1;
  *(undefined8 **)this = puVar2;
  lVar3 = *param_1;
  *(long *)(this + 8) = lVar3;
  std::__ndk1::
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::Impl*const&>
            ((__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
              *)(lVar3 + 0x20),(Impl **)this,(Impl **)this);
  **(undefined8 **)this = param_4;
  return;
}

