
/* v8::internal::compiler::PropertyAccessInfo::RecordDependencies(v8::internal::compiler::CompilationDependencies*)
    */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::RecordDependencies
          (PropertyAccessInfo *this,CompilationDependencies *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      CompilationDependencies::RecordDependency(param_1,(CompilationDependency *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar3;
  return;
}

